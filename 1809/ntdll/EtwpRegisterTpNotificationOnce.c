/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x180081C00
 * Callers:
 *     <none>
 * Callees:
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A0C00 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x1800A3A70 (NtTraceControl.c)
 */

__int64 __fastcall EtwpRegisterTpNotificationOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  ULONG ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-18h] BYREF
  PTP_WAIT WaitReturn; // [rsp+40h] [rbp-10h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+28h] BYREF

  WaitReturn = 0LL;
  EventHandle = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)EtwpNotificationThread, EventHandle, 0LL) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0LL, 0LL);
      InputBuffer = (int)EventHandle;
      if ( NtTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0LL, 0, &ReturnLength) >= 0 )
        return 1LL;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return 0LL;
}

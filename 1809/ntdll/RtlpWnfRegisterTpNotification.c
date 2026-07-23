/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180080E74
 * Callers:
 *     RtlpInitializeWnf @ 0x180080DA0 (RtlpInitializeWnf.c)
 * Callees:
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A0C00 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A3870 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)RtlpWnfNotificationThread, Context, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    NtClose(Context);
  return (unsigned int)v0;
}

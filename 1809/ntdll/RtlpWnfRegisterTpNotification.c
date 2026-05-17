/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x180080E64
 * Callers:
 *     RtlpInitializeWnf @ 0x180080D90 (RtlpInitializeWnf.c)
 * Callees:
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18002C0B0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A0BE0 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1800A3850 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait((_PEB_LDR_DATA *)&v4, (__int64)RtlpWnfNotificationThread, (__int64)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, (__int64)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}

/*
 * XREFs of sub_18007BEB4 @ 0x18007BEB4
 * Callers:
 *     sub_18007BDE0 @ 0x18007BDE0 (sub_18007BDE0.c)
 * Callees:
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180031130 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     ZwSetWnfProcessNotificationEvent @ 0x18009FC70 (ZwSetWnfProcessNotificationEvent.c)
 */

__int64 sub_18007BEB4()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)sub_1800065D0, Context, 0LL);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(Context);
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
    ZwClose(Context);
  return (unsigned int)v0;
}

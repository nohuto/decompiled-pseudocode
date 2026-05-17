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
  int v0; // ebx
  char v2; // [rsp+20h] [rbp-18h]
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  v2 = 0;
  v0 = ZwCreateEvent(&v3, 2031619LL, 0LL, 1LL, v2);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&v4, (__int64)sub_1800065D0, v3, 0LL);
    if ( v0 >= 0 )
    {
      v0 = ZwSetWnfProcessNotificationEvent(v3);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v4, v3, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( v3 )
    ZwClose(v3);
  return (unsigned int)v0;
}

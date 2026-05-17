/*
 * XREFs of sub_18007CD00 @ 0x18007CD00
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x180031130 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 */

__int64 sub_18007CD00()
{
  char v1; // [rsp+20h] [rbp-30h]
  _BYTE v2[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v3; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h] BYREF
  int v5; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&v3, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v4, (__int64)sub_180007E90, v3, 0LL) >= 0 )
    {
      TpSetWaitEx(v4, v3, 0LL, 0LL);
      v5 = v3;
      if ( (int)ZwTraceControl(27LL, &v5, 4LL, 0LL, 0, v2) >= 0 )
        return 1LL;
    }
    if ( v4 )
      TpReleaseWait(v4);
  }
  if ( v3 )
    ZwClose(v3);
  return 0LL;
}

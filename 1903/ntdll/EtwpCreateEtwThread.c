/*
 * XREFs of EtwpCreateEtwThread @ 0x180005680
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 * Callees:
 *     RtlCreateUserThread @ 0x1800056F0 (RtlCreateUserThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwResumeThread @ 0x18009D120 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 */

__int64 __fastcall EtwpCreateEtwThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)RtlCreateUserThread(-1, 0, 1, 0, 0LL, 0LL, a1, a2, (__int64)&v5, 0LL) < 0 )
    return 0LL;
  v2 = v5;
  v3 = ZwResumeThread(v5, 0LL);
  if ( v3 < 0 )
  {
    ZwTerminateThread(v2, (unsigned int)v3);
    ZwClose(v2);
    return 0LL;
  }
  return v2;
}

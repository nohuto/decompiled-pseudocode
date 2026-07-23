/*
 * XREFs of SmQueryStoreCommitUsage @ 0x140306700
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SmpProcessQueryStoreStats @ 0x140306778 (SmpProcessQueryStoreStats.c)
 */

__int64 __fastcall SmQueryStoreCommitUsage(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE v8[12]; // [rsp+20h] [rbp-618h] BYREF
  unsigned int v9; // [rsp+2Ch] [rbp-60Ch]
  char v10; // [rsp+4Ch] [rbp-5ECh] BYREF

  result = SmpProcessQueryStoreStats(a1, v8);
  if ( (int)result >= 0 )
  {
    *a2 = 0LL;
    v4 = &v10;
    v5 = 0LL;
    v6 = 8LL;
    do
    {
      v7 = *(unsigned int *)v4;
      v4 += 8;
      v5 += v7;
      --v6;
    }
    while ( v6 );
    *a2 = v5 * v9;
    return 0LL;
  }
  return result;
}

/*
 * XREFs of SmQueryStoreCommitUsage @ 0x140323930
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SmpProcessQueryStoreStats @ 0x1403239CC (SmpProcessQueryStoreStats.c)
 */

__int64 __fastcall SmQueryStoreCommitUsage(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD v9[384]; // [rsp+20h] [rbp-618h] BYREF

  memset(v9, 0, sizeof(v9));
  result = SmpProcessQueryStoreStats(a1, v9);
  if ( (int)result >= 0 )
  {
    *a2 = 0LL;
    v5 = &v9[11];
    v6 = 0LL;
    v7 = 8LL;
    do
    {
      v8 = *v5;
      v5 += 2;
      v6 += v8;
      --v7;
    }
    while ( v7 );
    *a2 = v6 * v9[3];
    return 0LL;
  }
  return result;
}

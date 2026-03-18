/*
 * XREFs of MiCommitmentAvailable @ 0x140030FA4
 * Callers:
 *     MiPrefetchNormally @ 0x140031280 (MiPrefetchNormally.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 7784);
  v2 = *(_QWORD *)(a1 + 7656);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}

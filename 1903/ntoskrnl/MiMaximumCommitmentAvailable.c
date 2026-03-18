/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x1400F1C0C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMaximumCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 7176);
  v2 = *(_QWORD *)(a1 + 8424);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}

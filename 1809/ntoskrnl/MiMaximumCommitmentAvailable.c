/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x1400EF614
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMaximumCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 6408);
  v2 = *(_QWORD *)(a1 + 7656);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}

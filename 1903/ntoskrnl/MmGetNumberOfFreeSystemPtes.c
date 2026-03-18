/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1400F1C70
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1402C540C (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400F3018 (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v1; // r10
  unsigned __int64 v2; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(&qword_1404669C0);
  v2 = qword_140466A18 + NumberOfCachedPtes + v1;
  if ( v2 >= 0x100000000LL )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}

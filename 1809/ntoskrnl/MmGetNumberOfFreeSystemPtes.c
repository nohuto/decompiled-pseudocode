/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x1400F0D2C
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x1402AD708 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFFC (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400F0434 (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  unsigned int NumberOfCachedPtes; // eax
  __int64 v1; // r10
  unsigned __int64 v2; // r10

  NumberOfCachedPtes = MiGetNumberOfCachedPtes((__int64)&qword_14043AFA0);
  v2 = qword_14043AFF8 + NumberOfCachedPtes + v1;
  if ( v2 >= 0x100000000LL )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}

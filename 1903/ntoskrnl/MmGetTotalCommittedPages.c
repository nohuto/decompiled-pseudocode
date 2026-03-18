/*
 * XREFs of MmGetTotalCommittedPages @ 0x1400F3194
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommittedPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * a1) + 8424LL);
}

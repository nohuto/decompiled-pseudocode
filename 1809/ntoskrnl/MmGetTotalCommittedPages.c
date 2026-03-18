/*
 * XREFs of MmGetTotalCommittedPages @ 0x1400F0CD8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFFC (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommittedPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * a1) + 7656LL);
}

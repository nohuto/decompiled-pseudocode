/*
 * XREFs of MmGetAvailablePages @ 0x1400F31B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909C24 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * a1) + 8064LL);
}

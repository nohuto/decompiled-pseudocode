/*
 * XREFs of MmGetAvailablePages @ 0x1400DB6F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909684 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * a1) + 8064LL);
}

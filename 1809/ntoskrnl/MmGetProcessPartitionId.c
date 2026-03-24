/*
 * XREFs of MmGetProcessPartitionId @ 0x1400F0CCC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066CFDC (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x1408CBBB0 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CC30C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1454);
}

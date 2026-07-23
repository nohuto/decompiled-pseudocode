/*
 * XREFs of MmGetProcessPartitionId @ 0x1400F0D4C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14066E19C (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x1408CCE70 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CD5CC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1454);
}

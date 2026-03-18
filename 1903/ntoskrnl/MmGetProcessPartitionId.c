/*
 * XREFs of MmGetProcessPartitionId @ 0x1400F31CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x140909470 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909C24 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1454);
}

/*
 * XREFs of MmGetProcessPartitionId @ 0x1400DB70C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406738A0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x140908ED0 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x140909684 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1454);
}

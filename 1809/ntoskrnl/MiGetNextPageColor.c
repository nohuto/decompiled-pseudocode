/*
 * XREFs of MiGetNextPageColor @ 0x140031260
 * Callers:
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140653A14 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x1406D1578 (MiCombineIdenticalPages.c)
 *     MiAllocateTopLevelPage @ 0x1406D1BCC (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x14085C3FC (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14085F6F4 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14085F988 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 10) | _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & (unsigned int)*(unsigned __int16 *)(a1 + 8);
}

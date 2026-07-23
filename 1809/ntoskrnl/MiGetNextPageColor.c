/*
 * XREFs of MiGetNextPageColor @ 0x140031260
 * Callers:
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 10) | _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & (unsigned int)*(unsigned __int16 *)(a1 + 8);
}

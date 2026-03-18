/*
 * XREFs of MiGetNextPageColor @ 0x1400DAF0C
 * Callers:
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x14068D6D8 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x140898F94 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}

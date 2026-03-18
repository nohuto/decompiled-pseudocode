/*
 * XREFs of MiGetNextPageColor @ 0x1400BAD8C
 * Callers:
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x14089B754 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089C92C (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}

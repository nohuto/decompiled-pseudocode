/*
 * XREFs of MiCreateUltraThreadContext @ 0x14012372C
 * Callers:
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiCreateZeroThreadContext @ 0x14018837C (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MmInitializeProcessor @ 0x14059F6E4 (MmInitializeProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400F584C (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140123794 (MiCreateUltraThreadContextHelper.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  while ( !_bittest(&a3, v6) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v6, v6, a2) )
  {
    if ( ++v6 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}

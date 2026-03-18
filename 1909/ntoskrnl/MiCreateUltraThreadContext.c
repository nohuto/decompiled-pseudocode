/*
 * XREFs of MiCreateUltraThreadContext @ 0x1400F8D40
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiCreateZeroThreadContext @ 0x14018892C (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MmInitializeProcessor @ 0x14059F6C4 (MmInitializeProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14089B754 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14089C92C (MiInitializeScrubPacket.c)
 * Callees:
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
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

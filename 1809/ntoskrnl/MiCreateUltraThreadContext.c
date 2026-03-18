/*
 * XREFs of MiCreateUltraThreadContext @ 0x14013CAC4
 * Callers:
 *     MiZeroLargePage @ 0x140118D5C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C6A0 (MiZeroInParallelWorker.c)
 *     MiCreateZeroThreadContext @ 0x14017F64C (MiCreateZeroThreadContext.c)
 *     MmInitializeProcessor @ 0x140572A74 (MmInitializeProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406D1598 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14085F714 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x14085F9A8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400E17EC (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CB2C (MiCreateUltraThreadContextHelper.c)
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

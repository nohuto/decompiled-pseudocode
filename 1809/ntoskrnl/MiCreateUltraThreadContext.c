/*
 * XREFs of MiCreateUltraThreadContext @ 0x14013CBE4
 * Callers:
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CC4C (MiCreateUltraThreadContextHelper.c)
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

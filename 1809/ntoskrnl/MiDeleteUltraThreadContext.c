/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400E180C
 * Callers:
 *     MiZeroLargePage @ 0x140118D7C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C6C0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14013CAE4 (MiCreateUltraThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x1401850B4 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1402A6164 (MmDeleteProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406D1578 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14085F6F4 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x14085FAA4 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400E1844 (MiDeleteUltraMapContext.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = MiDeleteUltraMapContext(a1, i);
    a1 += 32LL;
  }
  return result;
}

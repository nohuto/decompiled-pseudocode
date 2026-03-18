/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400E17EC
 * Callers:
 *     MiZeroLargePage @ 0x140118D5C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C6A0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14013CAC4 (MiCreateUltraThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140185094 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1402A6064 (MmDeleteProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406D1598 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14085F714 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x14085FAC4 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400E1824 (MiDeleteUltraMapContext.c)
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

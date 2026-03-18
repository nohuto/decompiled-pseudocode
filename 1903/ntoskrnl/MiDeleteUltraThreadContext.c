/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400F584C
 * Callers:
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14012372C (MiCreateUltraThreadContext.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiDeleteZeroThreadContext @ 0x14018F9F4 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1402BD8AC (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1406F6DC4 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x14089D230 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400F5884 (MiDeleteUltraMapContext.c)
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

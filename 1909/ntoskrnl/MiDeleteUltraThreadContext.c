/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400F92EC
 * Callers:
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiDeleteZeroThreadContext @ 0x14018FB94 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1402BD60C (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1406F8B84 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14089B754 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x14089CA50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
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

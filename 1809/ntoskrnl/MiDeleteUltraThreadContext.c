/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1400E188C
 * Callers:
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x1401851F4 (MiDeleteZeroThreadContext.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1400E18C4 (MiDeleteUltraMapContext.c)
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

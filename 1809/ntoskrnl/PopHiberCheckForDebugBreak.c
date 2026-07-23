/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14056BFF8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14056AF90 (ConsumerPeekAndConsumeBuffer.c)
 *     PopWriteHiberImage @ 0x14056B4C8 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14056B988 (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x14056BED8 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x14056BF68 (ProducerGetBuffer.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140144778 (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}

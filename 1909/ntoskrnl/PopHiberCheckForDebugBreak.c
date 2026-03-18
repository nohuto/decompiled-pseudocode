/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14059A558
 * Callers:
 *     PopWriteHiberImage @ 0x140599AEC (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140599F80 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x14059A048 (ProducerGetBuffer.c)
 *     ConsumerGetBuffer @ 0x14059A4A4 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x14059A6E0 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14059A824 (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1405AD11C (PopRequestRead.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14015FD24 (KdCheckForDebugBreak.c)
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

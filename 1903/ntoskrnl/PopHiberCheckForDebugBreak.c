/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14059A578
 * Callers:
 *     PopWriteHiberImage @ 0x140599B0C (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x140599FA0 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x14059A068 (ProducerGetBuffer.c)
 *     ConsumerGetBuffer @ 0x14059A4C4 (ConsumerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x14059A700 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14059A844 (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1405AD13C (PopRequestRead.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14015F684 (KdCheckForDebugBreak.c)
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

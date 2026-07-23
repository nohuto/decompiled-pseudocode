/*
 * XREFs of KeSchedulerAssistThreadFlagEnabled @ 0x14008A3FC
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 KeSchedulerAssistThreadFlagEnabled()
{
  return (unsigned int)KiSchedulerAssistThreadFlagEnabled;
}

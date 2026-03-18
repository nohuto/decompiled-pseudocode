/*
 * XREFs of KeSchedulerAssistThreadFlagEnabled @ 0x14008A40C
 * Callers:
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 KeSchedulerAssistThreadFlagEnabled()
{
  return (unsigned int)KiSchedulerAssistThreadFlagEnabled;
}

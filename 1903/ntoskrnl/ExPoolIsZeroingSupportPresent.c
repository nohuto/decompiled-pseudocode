/*
 * XREFs of ExPoolIsZeroingSupportPresent @ 0x1401BFB94
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool ExPoolIsZeroingSupportPresent()
{
  return KernelVersionBump != 0;
}

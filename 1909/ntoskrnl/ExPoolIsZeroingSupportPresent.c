/*
 * XREFs of ExPoolIsZeroingSupportPresent @ 0x1401C0714
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool ExPoolIsZeroingSupportPresent()
{
  return KernelVersionBump != 0;
}

/*
 * XREFs of VslIsSecureKernelRunning @ 0x14013D5C0
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405A838C (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14085A0A8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}

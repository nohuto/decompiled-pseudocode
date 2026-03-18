/*
 * XREFs of VslIsSecureKernelRunning @ 0x14013DAD0
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405A836C (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1408597A8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}

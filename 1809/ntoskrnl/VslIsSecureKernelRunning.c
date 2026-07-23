/*
 * XREFs of VslIsSecureKernelRunning @ 0x14013BC4C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140579508 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140821238 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}

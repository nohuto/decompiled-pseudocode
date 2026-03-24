/*
 * XREFs of VslIsSecureKernelRunning @ 0x14013BB4C
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140578508 (IopLiveDumpCaptureMemoryPages.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140820038 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     <none>
 */

char VslIsSecureKernelRunning()
{
  return VslVsmEnabled;
}

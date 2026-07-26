/*
 * XREFs of ndisCaptureProcessorConfigurationAtBoot @ 0x1C01295EC
 * Callers:
 *     NdisDllInitialize @ 0x1C0129510 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

ULONG ndisCaptureProcessorConfigurationAtBoot()
{
  ULONG result; // eax

  ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
  KeQueryActiveProcessorCountEx(0);
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ndisMaxNumberOfProcessors = result;
  return result;
}

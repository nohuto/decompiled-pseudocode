/*
 * XREFs of ?ndisCaptureProcessorConfigurationAtBoot@@YAXXZ @ 0x1C0146FB4
 * Callers:
 *     NdisDllInitialize @ 0x1C0039550 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void ndisCaptureProcessorConfigurationAtBoot(void)
{
  ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
  KeQueryActiveProcessorCountEx(0);
  ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
}

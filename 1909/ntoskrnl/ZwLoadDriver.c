/*
 * XREFs of ZwLoadDriver @ 0x1401C2C50
 * Callers:
 *     KsepLoadShimProvider @ 0x1402B6BD0 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406E8880 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408B6064 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x140906A90 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

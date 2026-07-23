/*
 * XREFs of ZwLoadDriver @ 0x1401C20D0
 * Callers:
 *     KsepLoadShimProvider @ 0x1402B6E70 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406E7780 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408B6794 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1409070D0 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

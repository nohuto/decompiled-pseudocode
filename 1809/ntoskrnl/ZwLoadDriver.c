/*
 * XREFs of ZwLoadDriver @ 0x1401BA2D0
 * Callers:
 *     KsepLoadShimProvider @ 0x14029FC4C (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C6E58 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14087B474 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1408CAEBC (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

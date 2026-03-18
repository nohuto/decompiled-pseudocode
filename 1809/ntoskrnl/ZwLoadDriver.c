/*
 * XREFs of ZwLoadDriver @ 0x1401BA150
 * Callers:
 *     KsepLoadShimProvider @ 0x14029F95C (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C5BD8 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14087A234 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1408C9C1C (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}

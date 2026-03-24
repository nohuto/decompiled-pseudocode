/*
 * XREFs of ZwLoadDriver @ 0x1401BA170
 * Callers:
 *     KsepLoadShimProvider @ 0x14029FA5C (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C5BB8 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14087A214 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1408C9BFC (EtwpConstructIptData.c)
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

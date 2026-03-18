/*
 * XREFs of ZwUnloadDriver @ 0x1401C4450
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406E8880 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}

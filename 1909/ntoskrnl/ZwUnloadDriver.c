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
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

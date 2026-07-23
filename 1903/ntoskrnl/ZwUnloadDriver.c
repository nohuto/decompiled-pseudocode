/*
 * XREFs of ZwUnloadDriver @ 0x1401C38D0
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406E7780 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

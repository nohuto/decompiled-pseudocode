/*
 * XREFs of ZwUnloadDriver @ 0x1401BB950
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406C5BD8 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
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

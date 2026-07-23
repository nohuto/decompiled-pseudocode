/*
 * XREFs of NtUnloadDriver @ 0x1407082D0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}

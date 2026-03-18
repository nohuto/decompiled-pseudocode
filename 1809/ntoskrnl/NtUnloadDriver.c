/*
 * XREFs of NtUnloadDriver @ 0x140707050
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}

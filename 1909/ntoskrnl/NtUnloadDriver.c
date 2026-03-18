/*
 * XREFs of NtUnloadDriver @ 0x14085C490
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0);
}

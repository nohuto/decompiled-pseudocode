/*
 * XREFs of NtUnloadDriver @ 0x14085CD90
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0);
}

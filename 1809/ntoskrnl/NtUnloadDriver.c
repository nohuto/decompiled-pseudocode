/*
 * XREFs of NtUnloadDriver @ 0x140707030
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}

/*
 * XREFs of GsDriverEntry @ 0x1C0031010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C001FDDC (DriverEntry.c)
 *     __security_init_cookie @ 0x1C0031044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}

/*
 * XREFs of GsDriverEntry @ 0x1C037F010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry_0 @ 0x1C0164272 (DriverEntry_0.c)
 *     __security_init_cookie @ 0x1C037F044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry_0(DriverObject, RegistryPath);
}

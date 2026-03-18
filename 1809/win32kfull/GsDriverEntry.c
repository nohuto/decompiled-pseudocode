/*
 * XREFs of GsDriverEntry @ 0x1C036D010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry_0 @ 0x1C015B712 (DriverEntry_0.c)
 *     __security_init_cookie @ 0x1C036D044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry_0(DriverObject, RegistryPath);
}

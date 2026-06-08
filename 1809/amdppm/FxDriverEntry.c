/*
 * XREFs of FxDriverEntry @ 0x1C0001470
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1C00014A4 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x1C00335FC (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}

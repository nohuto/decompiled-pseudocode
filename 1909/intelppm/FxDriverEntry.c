/*
 * XREFs of FxDriverEntry @ 0x1C0001A90
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1C0001B54 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x1C0039008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}

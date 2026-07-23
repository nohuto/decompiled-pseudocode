/*
 * XREFs of ZwOpenEvent @ 0x1401B8AF0
 * Callers:
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}

/*
 * XREFs of ZwAlpcDeletePortSection @ 0x1401C1C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}

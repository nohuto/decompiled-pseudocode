/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x1401C3770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemEnvironmentValue(PUNICODE_STRING Name, PWSTR Value, ULONG Length, PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Name);
}

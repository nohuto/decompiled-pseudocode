/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x1401C3510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING Value)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

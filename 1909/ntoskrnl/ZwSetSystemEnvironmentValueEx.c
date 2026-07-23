/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1401C40B0
 * Callers:
 *     BiDeleteEfiVariable @ 0x140930A68 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}

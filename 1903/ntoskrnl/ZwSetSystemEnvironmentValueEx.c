/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1401C3530
 * Callers:
 *     BiDeleteEfiVariable @ 0x140930FF4 (BiDeleteEfiVariable.c)
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

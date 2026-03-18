/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1401BB5B0
 * Callers:
 *     BiDeleteEfiVariable @ 0x1408F337C (BiDeleteEfiVariable.c)
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
  return KiServiceInternal(VariableName, VendorGuid, Value);
}

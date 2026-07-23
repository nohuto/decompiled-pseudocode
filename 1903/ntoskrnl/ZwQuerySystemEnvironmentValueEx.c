/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401C2C10
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x140763DE4 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140930FF4 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySystemEnvironmentValueEx(
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

/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401C3790
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1407687F4 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x140930A68 (BiDeleteEfiVariable.c)
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

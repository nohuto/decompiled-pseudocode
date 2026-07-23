/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401BAE10
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14074186C (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1408F461C (BiDeleteEfiVariable.c)
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

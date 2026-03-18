/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1401BAC90
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14074069C (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1408F337C (BiDeleteEfiVariable.c)
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
  return KiServiceInternal(VariableName, VendorGuid, Value);
}

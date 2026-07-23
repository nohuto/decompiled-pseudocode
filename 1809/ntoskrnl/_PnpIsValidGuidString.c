/*
 * XREFs of _PnpIsValidGuidString @ 0x14059B534
 * Callers:
 *     _CmValidateInstallerClassName @ 0x140597DE4 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x1406EBC14 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074B490 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}

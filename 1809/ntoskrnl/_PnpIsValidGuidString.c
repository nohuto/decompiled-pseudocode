/*
 * XREFs of _PnpIsValidGuidString @ 0x14059A534
 * Callers:
 *     _CmValidateInstallerClassName @ 0x140596DE4 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x1406EA994 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2C0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}

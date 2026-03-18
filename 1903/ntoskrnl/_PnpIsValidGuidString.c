/*
 * XREFs of _PnpIsValidGuidString @ 0x1405C10D8
 * Callers:
 *     _CmValidateInstallerClassName @ 0x1405BD10C (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x1406F14F4 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140767CB8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  return RtlInitUnicodeStringEx(&GuidString, SourceString) >= 0
      && (GuidString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&GuidString, &Guid) >= 0;
}

/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x1409BEF08
 * Callers:
 *     EmpParseCallbacks @ 0x1409BE250 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1409BE478 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x1409BEA68 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1409BEFF4 (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409BF58C (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const char *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  GuidString.Buffer = (wchar_t *)&v9;
  GuidString.MaximumLength = 78;
  ValueFromSectionAndKeyName = (const char *)EmpInfParseGetValueFromSectionAndKeyName(a1, a2, a3);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}

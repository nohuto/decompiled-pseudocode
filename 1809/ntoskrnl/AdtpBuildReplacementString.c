/*
 * XREFs of AdtpBuildReplacementString @ 0x1408F0550
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     AdtpBuildRegistryValueString @ 0x1408EF1B4 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F51B0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1405A8E00 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall AdtpBuildReplacementString(ULONG a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // edi
  UNICODE_STRING Source; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF

  Source.Buffer = (wchar_t *)&v6;
  *(_DWORD *)&Source.Length = 1310720;
  v3 = RtlIntegerToUnicodeString(a1, 0xAu, &Source);
  if ( v3 >= 0 )
  {
    if ( a2->Length )
      RtlAppendUnicodeToString(a2, L", ");
    RtlAppendUnicodeToString(a2, L"%%");
    RtlAppendUnicodeStringToString(a2, &Source);
  }
  return (unsigned int)v3;
}

/*
 * XREFs of ExGetExpirationDate @ 0x14073541C
 * Callers:
 *     ExInitializeTimeRefresh @ 0x1409C4288 (ExInitializeTimeRefresh.c)
 *     ExInitLicenseData @ 0x1409C43A0 (ExInitLicenseData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x140127040 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401BAAF0 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  int LicenseValue; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+38h] [rbp-48h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]

  v5 = 0;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    LicenseValue = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v5, 0LL);
    v3 = LicenseValue;
    if ( LicenseValue == -1073741789 )
    {
      v3 = -1073741772;
    }
    else if ( LicenseValue >= 0 )
    {
      v3 = -1073741823;
    }
    Time->QuadPart = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}

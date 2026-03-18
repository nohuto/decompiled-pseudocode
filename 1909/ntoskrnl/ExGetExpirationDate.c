/*
 * XREFs of ExGetExpirationDate @ 0x1407651D0
 * Callers:
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 *     ExInitializeTimeRefresh @ 0x140A0EFD4 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x140121DD0 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
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

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  v5 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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

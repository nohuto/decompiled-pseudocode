/*
 * XREFs of ExGetExpirationDate @ 0x1407607C8
 * Callers:
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401C2A70 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // rax
  ULONG ResultDataSize; // [rsp+34h] [rbp-4Ch] BYREF
  ULONG Type; // [rsp+38h] [rbp-48h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h]

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  Type = 0;
  ResultDataSize = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Data = 0LL;
  v11 = 0LL;
  if ( !Time )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
  v2 = ZwQueryLicenseValue(&DestinationString, &Type, 0LL, 0, &ResultDataSize);
  v3 = v2;
  if ( v2 != -1073741789 )
  {
    if ( v2 < 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( ResultDataSize == 16 && Type == 3 )
  {
    v3 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
    if ( v3 < 0 )
    {
LABEL_17:
      Time->QuadPart = 0LL;
      return (unsigned int)v3;
    }
    v4 = -Data;
    if ( !Data )
      v4 = -v11;
    if ( !v4 )
    {
      Time->QuadPart = 0LL;
      goto LABEL_10;
    }
    TimeFields.Year = Data;
    *(_DWORD *)&TimeFields.Month = *(_DWORD *)((char *)&Data + 2);
    TimeFields.Hour = HIWORD(Data);
    *(_DWORD *)&TimeFields.Minute = v11;
    if ( !RtlTimeFieldsToTime(&TimeFields, Time) )
    {
LABEL_16:
      v3 = -1073741823;
      goto LABEL_17;
    }
  }
  else
  {
    v3 = -1073741772;
  }
LABEL_10:
  if ( v3 < 0 )
    goto LABEL_17;
  return (unsigned int)v3;
}

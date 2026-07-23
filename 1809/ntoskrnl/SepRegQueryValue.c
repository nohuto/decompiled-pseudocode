/*
 * XREFs of SepRegQueryValue @ 0x140737DD4
 * Callers:
 *     SepRegQueryDwordValue @ 0x1405BA9BC (SepRegQueryDwordValue.c)
 *     SepAdtInitializeBounds @ 0x140737C94 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140737D18 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140737D74 (SepAdtInitializePrivilegeAuditing.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall SepRegQueryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, unsigned int a4, _DWORD *a5)
{
  size_t v6; // rsi
  NTSTATUS v8; // ebx
  int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-78h] BYREF
  int v14; // [rsp+54h] [rbp-74h]
  int v15; // [rsp+58h] [rbp-70h]
  _DWORD Src[17]; // [rsp+5Ch] [rbp-6Ch] BYREF

  v6 = a4;
  RtlInitUnicodeString(&DestinationString, a2);
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v8 >= 0 )
  {
    if ( v14 == a3 && v15 == (_DWORD)v6 )
    {
      v10 = a3 - 3;
      if ( v10 )
      {
        if ( v10 == 1 && (unsigned int)v6 >= 4 )
          *a5 = Src[0];
        else
          return (unsigned int)-1073741811;
      }
      else
      {
        memmove(a5, Src, v6);
      }
    }
    else
    {
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v8;
}

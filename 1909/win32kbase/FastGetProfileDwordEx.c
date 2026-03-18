/*
 * XREFs of FastGetProfileDwordEx @ 0x1C005FC30
 * Callers:
 *     FastGetProfileDword @ 0x1C005FC00 (FastGetProfileDword.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

int __fastcall FastGetProfileDwordEx(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  const WCHAR *v8; // rdi
  void *v11; // rax
  void *v12; // r14
  int v13; // edi
  int v15; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  const WCHAR *v17; // [rsp+38h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a3;
  DestinationString.Buffer = 0LL;
  v17 = a3;
  v15 = a5 | gdwPolicyFlags;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(a1, a2, 0x20019u, &v15);
    v12 = v11;
    if ( !v11 )
      break;
    RtlInitUnicodeString(&DestinationString, v8);
    if ( ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v13 = 0;
      v15 = 0;
      *a6 = v20;
    }
    else
    {
      v13 = v15;
      if ( !v15 )
      {
        if ( a7 )
          *a7 = 1;
        *a6 = a4;
      }
    }
    LODWORD(v11) = ZwClose(v12);
    if ( !v13 )
      return (int)v11;
    v8 = v17;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return (int)v11;
}

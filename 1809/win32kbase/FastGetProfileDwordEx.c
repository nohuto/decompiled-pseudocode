/*
 * XREFs of FastGetProfileDwordEx @ 0x1C006C5B0
 * Callers:
 *     FastGetProfileDword @ 0x1C006C580 (FastGetProfileDword.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
  void *v11; // rax
  void *v12; // rbp
  int v13; // edi
  int v15; // [rsp+30h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-74h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-60h] BYREF
  int v19; // [rsp+54h] [rbp-54h]

  v15 = a5 | gdwPolicyFlags;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(a1, a2, 0x20019u, &v15);
    v12 = v11;
    if ( !v11 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v13 = 0;
      v15 = 0;
      *a6 = v19;
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
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return (int)v11;
}

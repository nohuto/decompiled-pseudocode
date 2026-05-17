/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x1800D6D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 */

__int64 __fastcall RtlNewInstanceSecurityObject(
        char a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 *a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v15; // [rsp+90h] [rbp-38h]

  result = ZwQueryInformationToken();
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a4 = v15;
    if ( *(_DWORD *)a4 != *a3 || *(_DWORD *)(a4 + 4) != a3[1] || a1 || a2 )
    {
      return sub_1800100C4(a5, a6, a7, 0LL, 0, a8, 0, a9, a10);
    }
    else
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  return result;
}

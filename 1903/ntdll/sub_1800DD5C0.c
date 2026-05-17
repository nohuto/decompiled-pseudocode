/*
 * XREFs of sub_1800DD5C0 @ 0x1800DD5C0
 * Callers:
 *     sub_1800DD460 @ 0x1800DD460 (sub_1800DD460.c)
 *     sub_1800DD510 @ 0x1800DD510 (sub_1800DD510.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1800DD5C0(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v6; // [rsp+4Ch] [rbp-2Ch]
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey();
  if ( (_DWORD)result == -1073741772 )
    return 3221225524LL;
  if ( (int)result >= 0 )
  {
    if ( v6 == 4 && v7 == 4 )
    {
      *a3 = v8;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}

/*
 * XREFs of KitpReadUlongFromKey @ 0x140789E94
 * Callers:
 *     KitpInitAitSampleRate @ 0x140A20348 (KitpInitAitSampleRate.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall KitpReadUlongFromKey(void *a1, __int64 a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  *a3 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  result = ZwQueryValueKey(a1, (PUNICODE_STRING)&SbtSamplingRateValue, KeyValuePartialInformation, &v6, 0x14u, &v5);
  if ( result >= 0 )
  {
    if ( HIDWORD(v6) == 4 && (_DWORD)v7 == 4 )
    {
      *a3 = HIDWORD(v7);
      return 0;
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}

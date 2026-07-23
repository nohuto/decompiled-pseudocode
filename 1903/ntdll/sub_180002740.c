/*
 * XREFs of sub_180002740 @ 0x180002740
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 * Callees:
 *     sub_18000283C @ 0x18000283C (sub_18000283C.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memcmp @ 0x180090560 (memcmp.c)
 *     wcschr @ 0x1800922E0 (wcschr.c)
 *     wcsrchr @ 0x180092520 (wcsrchr.c)
 *     wcsstr @ 0x1800925B0 (wcsstr.c)
 */

ULONG __fastcall sub_180002740(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t Buf2[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    _InterlockedExchangeAdd(a2, 1u);
    if ( !(unsigned int)sub_18000283C(Buf2) && memcmp(a1[1], Buf2, *(unsigned __int16 *)a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlCreateUnicodeString(a3, Buf2);
      return 0;
    }
    v8 = -1073741776;
  }
  else
  {
    v8 = -1073741773;
  }
  return RtlNtStatusToDosError(v8);
}

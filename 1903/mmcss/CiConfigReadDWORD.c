/*
 * XREFs of CiConfigReadDWORD @ 0x1C000D570
 * Callers:
 *     CiConfigInitialize @ 0x1C000D270 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 *     WPP_SF_Zd @ 0x1C000449C (WPP_SF_Zd.c)
 */

__int64 __fastcall CiConfigReadDWORD(void *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 Length; // [rsp+20h] [rbp-38h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int64 KeyValueInformation; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  KeyValueInformation = 0LL;
  v9 = 0LL;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
    && HIDWORD(KeyValueInformation) == 4 )
  {
    return HIDWORD(v9);
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(Length) = a3;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_1d5a60252b7d3a9c2ed54ac3501c653e_Traceguids,
      &a2->Length,
      Length);
  }
  return a3;
}

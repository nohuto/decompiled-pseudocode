/*
 * XREFs of sub_180122450 @ 0x180122450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180122450(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)sub_18011FBAC(a1, a2, &v5) )
    return v5;
  return a3;
}

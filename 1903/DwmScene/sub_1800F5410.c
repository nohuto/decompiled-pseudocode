/*
 * XREFs of sub_1800F5410 @ 0x1800F5410
 * Callers:
 *     sub_1800904B0 @ 0x1800904B0 (sub_1800904B0.c)
 *     sub_1800994F0 @ 0x1800994F0 (sub_1800994F0.c)
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 * Callees:
 *     sub_1800645D8 @ 0x1800645D8 (sub_1800645D8.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800F5410(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_1800656A8((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_1800645D8((__int64 *)(a1 + 88), &v6);
}

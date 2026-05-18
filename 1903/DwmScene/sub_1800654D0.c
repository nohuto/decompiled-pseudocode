/*
 * XREFs of sub_1800654D0 @ 0x1800654D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_18009EA90 @ 0x18009EA90 (sub_18009EA90.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800654D0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  sub_1800656A8(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_18009EA90(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_18009EA90(v5, a2);
  return sub_1800641F0(a1, a2);
}

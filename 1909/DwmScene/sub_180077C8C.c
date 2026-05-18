/*
 * XREFs of sub_180077C8C @ 0x180077C8C
 * Callers:
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077DDC @ 0x180077DDC (sub_180077DDC.c)
 *     sub_180077E84 @ 0x180077E84 (sub_180077E84.c)
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 *     sub_180079C94 @ 0x180079C94 (sub_180079C94.c)
 *     sub_18007B834 @ 0x18007B834 (sub_18007B834.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180077C8C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  sub_180063468(a1 + 112, &v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  if ( (_BYTE)v5 )
    sub_180063780(v4);
  return (unsigned int)v2;
}

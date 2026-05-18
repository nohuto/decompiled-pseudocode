/*
 * XREFs of sub_1801246AC @ 0x1801246AC
 * Callers:
 *     sub_18011ECFC @ 0x18011ECFC (sub_18011ECFC.c)
 *     sub_18011F05C @ 0x18011F05C (sub_18011F05C.c)
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_18011F918 @ 0x18011F918 (sub_18011F918.c)
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     sub_180122800 @ 0x180122800 (sub_180122800.c)
 *     sub_180122920 @ 0x180122920 (sub_180122920.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_180123798 @ 0x180123798 (sub_180123798.c)
 */

bool __fastcall sub_1801246AC(__int64 a1, _WORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __m128i si128; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v6[0]) = 0;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  sub_180026168((char *)v6, a2, v2);
  v4 = *(_QWORD *)(a1 + 72);
  sub_180123798((_QWORD *)(a1 + 64), &v8, (unsigned __int64 *)v6);
  unknown_libname_116(v6);
  return v8 != v4;
}

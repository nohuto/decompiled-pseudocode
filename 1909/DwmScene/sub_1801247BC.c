/*
 * XREFs of sub_1801247BC @ 0x1801247BC
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 *     sub_18011F16C @ 0x18011F16C (sub_18011F16C.c)
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_18011FA28 @ 0x18011FA28 (sub_18011FA28.c)
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 *     sub_18011FF04 @ 0x18011FF04 (sub_18011FF04.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180120434 @ 0x180120434 (sub_180120434.c)
 *     sub_180122740 @ 0x180122740 (sub_180122740.c)
 *     sub_180122910 @ 0x180122910 (sub_180122910.c)
 *     sub_180122A30 @ 0x180122A30 (sub_180122A30.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_1801238A8 @ 0x1801238A8 (sub_1801238A8.c)
 */

bool __fastcall sub_1801247BC(__int64 a1, _WORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __m128i si128; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  LOWORD(v6[0]) = 0;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  sub_180026278((char *)v6, a2, v2);
  v4 = *(_QWORD *)(a1 + 72);
  sub_1801238A8((_QWORD *)(a1 + 64), &v8, (unsigned __int64 *)v6);
  unknown_libname_116(v6);
  return v8 != v4;
}

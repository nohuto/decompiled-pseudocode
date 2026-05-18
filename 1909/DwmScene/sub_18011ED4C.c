/*
 * XREFs of sub_18011ED4C @ 0x18011ED4C
 * Callers:
 *     sub_18011EE0C @ 0x18011EE0C (sub_18011EE0C.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180121C7C @ 0x180121C7C (sub_180121C7C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011ED4C(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  _QWORD v12[3]; // [rsp+48h] [rbp-30h] BYREF

  v11 = -2LL;
  v4 = a2;
  v12[2] = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  LOWORD(v9[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  sub_180026278((char *)v9, a2, v6);
  sub_180121C7C(a1 + 64, v12, v9);
  v7 = v12[0];
  *(_DWORD *)(v12[0] + 88LL) = a3;
  *(_DWORD *)(v7 + 48) = 1;
  unknown_libname_116(v9);
  return unknown_libname_116(v4);
}

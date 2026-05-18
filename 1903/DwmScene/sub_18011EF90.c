/*
 * XREFs of sub_18011EF90 @ 0x18011EF90
 * Callers:
 *     sub_18011F05C @ 0x18011F05C (sub_18011F05C.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_180121B6C @ 0x180121B6C (sub_180121B6C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011EF90(__int64 a1, __int64 *a2, double a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  _QWORD v11[3]; // [rsp+48h] [rbp-40h] BYREF

  v10 = -2LL;
  v3 = a2;
  v11[2] = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v8[0]) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)a2 + v5) );
  sub_180026168((char *)v8, a2, v5);
  sub_180121B6C(a1 + 64, v11, v8);
  v6 = v11[0];
  *(double *)(v11[0] + 96LL) = a3;
  *(_DWORD *)(v6 + 48) = 2;
  unknown_libname_116(v8);
  return unknown_libname_116(v3);
}

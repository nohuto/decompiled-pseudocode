/*
 * XREFs of sub_18011F854 @ 0x18011F854
 * Callers:
 *     sub_18011F918 @ 0x18011F918 (sub_18011F918.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_180121B6C @ 0x180121B6C (sub_180121B6C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011F854(__int64 a1, __int64 *a2, char a3)
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v9[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  sub_180026168((char *)v9, a2, v6);
  sub_180121B6C(a1 + 64, v12, v9);
  v7 = v12[0];
  *(_BYTE *)(v12[0] + 108LL) = a3;
  *(_DWORD *)(v7 + 48) = 4;
  unknown_libname_116(v9);
  return unknown_libname_116(v4);
}

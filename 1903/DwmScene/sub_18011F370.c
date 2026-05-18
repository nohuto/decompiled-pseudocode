/*
 * XREFs of sub_18011F370 @ 0x18011F370
 * Callers:
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18011F300 @ 0x18011F300 (sub_18011F300.c)
 *     sub_180121B6C @ 0x180121B6C (sub_180121B6C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011F370(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r8
  _QWORD v8[4]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v9[2]; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+60h] [rbp-9h]
  _QWORD *v12; // [rsp+68h] [rbp-1h]
  _QWORD v13[4]; // [rsp+70h] [rbp+7h] BYREF

  v11 = -2LL;
  v4 = a2;
  v13[2] = a2;
  v13[3] = a3;
  v12 = v8;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v9[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  sub_180026168((char *)v9, a2, v6);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001110C(v8, (__int64)a3);
  sub_180121B6C(a1 + 64, v13, v9);
  sub_18011F300((_DWORD *)(v13[0] + 48LL), (char *)v8);
  unknown_libname_116(v9);
  unknown_libname_116(v4);
  return unknown_libname_116(a3);
}

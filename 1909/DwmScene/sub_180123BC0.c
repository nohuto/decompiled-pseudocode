/*
 * XREFs of sub_180123BC0 @ 0x180123BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800261E8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180074288 @ 0x180074288 (sub_180074288.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__m128i *__fastcall sub_180123BC0(__int64 a1, __m128i *a2, __int64 *a3)
{
  unsigned __int64 v4; // rcx
  _WORD *v5; // rax
  char *v6; // r9
  unsigned __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  _BYTE pExceptionObject[64]; // [rsp+38h] [rbp-19h] BYREF
  __m128i v13; // [rsp+78h] [rbp+27h] BYREF
  __m128i si128; // [rsp+88h] [rbp+37h]

  v4 = a3[2];
  if ( !v4 )
  {
    sub_18000E4E8(&v13);
    sub_180074288(pExceptionObject, &v13, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v5 = a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v5 = (_WORD *)*a3;
  if ( *v5 == 47 )
  {
    v6 = (char *)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v6 = (char *)*a3;
    if ( v4 <= 1 )
      goto LABEL_14;
    v7 = v4 - 1;
    v8 = v6 + 2;
    while ( *(_WORD *)v8 != 47 )
    {
      v8 += 2;
      if ( !--v7 )
      {
        v8 = 0LL;
        break;
      }
    }
    if ( v8 )
      v9 = (v8 - v6) >> 1;
    else
LABEL_14:
      v9 = -1LL;
    if ( v9 == -1 )
    {
      sub_18000E4E8(&v13);
      sub_180074288(pExceptionObject, &v13, 0LL);
      throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
    v13.m128i_i16[0] = 0;
    v10 = v9 - 1;
    if ( v4 - 1 < v9 - 1 )
      v10 = v4 - 1;
    if ( (unsigned __int64)a3[3] >= 8 )
      a3 = (__int64 *)*a3;
    sub_180026278(v13.m128i_i8, (char *)a3 + 2, v10);
    *a2 = v13;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
    v13.m128i_i16[0] = 0;
    unknown_libname_116(v13.m128i_i64);
  }
  else
  {
    a2[1].m128i_i64[0] = 0LL;
    a2[1].m128i_i64[1] = 0LL;
    sub_18001115C(a2, (__int64)byte_18025F1E0);
  }
  return a2;
}

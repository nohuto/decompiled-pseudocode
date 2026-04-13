/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x18008F890
 * Callers:
 *     <none>
 * Callees:
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800366A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009046C (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     _Stodx @ 0x1800AB1AC (_Stodx.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        double *a7)
{
  unsigned int v10; // eax
  double v11; // xmm0_8
  double v12; // xmm6_8
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v15 = 0;
  v14 = 0;
  v10 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld(
          a1,
          (unsigned int)v17,
          (_DWORD)a3,
          (_DWORD)a4,
          a5,
          (__int64)&v14);
  v11 = Stodx(v17, &v16, v10, &v15);
  v12 = v11;
  if ( v14 )
    v12 = ldexp(v11, 4 * v14);
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v16 == v17 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *(_OWORD *)a3;
  return result;
}

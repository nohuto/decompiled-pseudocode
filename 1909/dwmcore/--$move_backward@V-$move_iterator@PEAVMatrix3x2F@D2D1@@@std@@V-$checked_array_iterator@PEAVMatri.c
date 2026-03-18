/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180250F20
 * Callers:
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x18008295C (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ?reserve_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVMatrix3x2F@D2D1@@_K0@Z @ 0x18025E318 (-reserve_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)(__int64)0xD555555555555555uLL) >> 64) >> 2;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 && a4[2] < (unsigned __int64)-v6 || v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v6);
    __debugbreak();
  }
  v7 = *a4;
  v8 = *a4 + 24 * a4[2];
  while ( a2 != a3 )
  {
    v8 -= 24LL;
    a3 -= 24LL;
    *(_OWORD *)v8 = *(_OWORD *)a3;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(a3 + 16);
  }
  v9 = (__int64)((unsigned __int128)((v8 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  result = a1;
  a4[2] = (v9 >> 63) + v9;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}

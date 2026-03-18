/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18020CACC
 * Callers:
 *     ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18007FC28 (-clear_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackd.c)
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x18008295C (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020DB20 (-clear_region@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18025E1CC (-ensure_extra_capacity@-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v5 = (__int64)((unsigned __int128)((a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v6 = (v5 >> 63) + v5;
  if ( v6 < 0 && a4[2] < (unsigned __int64)-v6 || v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v6);
    __debugbreak();
  }
  v7 = *a4;
  v8 = *a4 + 24 * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)v4;
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(v4 + 16);
    v8 += 24LL;
    v4 += 24LL;
  }
  v9 = (__int64)((unsigned __int128)((v8 - v7) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  result = a1;
  a4[2] = (v9 >> 63) + v9;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}

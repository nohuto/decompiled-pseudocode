/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180013F48
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180013E80 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000ADDC (-ensure_extra_capacity@-$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail.c)
 */

__int64 __fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  _OWORD *v8; // rdx
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  _OWORD *v11; // r10
  _OWORD *v12; // rax
  bool v13; // sf
  _OWORD *v14; // rax
  _OWORD *v15; // rdx

  detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1uLL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  v8 = (_OWORD *)(*a1 + 16 * v7);
  v9 = v7 - a2;
  if ( !v8 )
    goto LABEL_21;
  v10 = v7 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v4 = 16 * v10;
  v11 = (_OWORD *)(v6 - v4);
  if ( v6 != v6 - v4 )
  {
    v12 = (_OWORD *)(v6 - 16);
    v4 = 1LL;
    ++v8;
    while ( v4 )
    {
      --v4;
      --v8;
      if ( v4 )
        break;
      *v8 = *v12;
      if ( v12 == v11 )
        goto LABEL_11;
      --v12;
    }
    goto LABEL_21;
  }
LABEL_11:
  if ( v9 > 1 )
  {
    v13 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_21;
      v13 = v7 < 0;
    }
    if ( v13 && v7 )
    {
LABEL_21:
      _o__invalid_parameter_noinfo_noreturn(v4, v8, v7, v5);
      JUMPOUT(0x1800140B7LL);
    }
    v14 = (_OWORD *)(v5 + 16 * (v7 - 1));
    v15 = (_OWORD *)(16 * (v7 - 1) + v5 + 16);
    while ( (_OWORD *)(v5 + 16 * a2) != v14 )
      *--v15 = *--v14;
  }
  a1[1] += 16LL;
  return v5 + 16 * a2;
}

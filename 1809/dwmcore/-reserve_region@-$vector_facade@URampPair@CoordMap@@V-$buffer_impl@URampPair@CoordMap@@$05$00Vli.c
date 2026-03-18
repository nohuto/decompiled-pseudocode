/*
 * XREFs of ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000CC78
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x18000CBF4 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ?size@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x18000CE0C (-size@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expa.c)
 *     ?ensure_extra_capacity@?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000CE34 (-ensure_extra_capacity@-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$move_backward@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x18022CEE0 (--$move_backward@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PEAURam.c)
 */

__int64 __fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r11
  bool v14; // sf
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::size(a1);
  v17 = 0LL;
  v5 = *a1;
  v6 = v4 - a2;
  v7 = v4;
  v8 = a1[1];
  v9 = 3 * v4;
  *((_QWORD *)&v16 + 1) = 1LL;
  v10 = v5 + 12 * v4;
  v19 = 0LL;
  *(_QWORD *)&v16 = v10;
  v18 = v16;
  if ( !v10 )
    goto LABEL_19;
  v19 = 1LL;
  v11 = v4 - a2;
  if ( v6 > 1 )
    v11 = 1LL;
  v17 = 1LL;
  v12 = 12 * v11;
  v13 = v8 - v12;
  if ( v8 != v8 - v12 )
  {
    v10 = v18;
    v8 -= 12LL;
    if ( (_QWORD)v18 )
    {
      v9 = v17;
      v10 = v18 + 12;
      while ( v9 )
      {
        --v9;
        v10 -= 12LL;
        if ( v9 >= *((_QWORD *)&v16 + 1) )
          break;
        *(_QWORD *)v10 = *(_QWORD *)v8;
        *(_DWORD *)(v10 + 8) = *(_DWORD *)(v8 + 8);
        if ( v8 == v13 )
          goto LABEL_11;
        v8 -= 12LL;
      }
    }
    goto LABEL_19;
  }
LABEL_11:
  if ( v6 > 1 )
  {
    *(_QWORD *)&v18 = v5;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = 0LL;
    v14 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_19;
      v14 = v7 < 0;
    }
    if ( v14 && v7 )
    {
LABEL_19:
      _o__invalid_parameter_noinfo_noreturn(v8, v9, v10, v7);
      JUMPOUT(0x18000CE02LL);
    }
    v19 = v7;
    v16 = v18;
    v17 = v7;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v18,
      v5 + 12 * a2,
      v5 + 12 * (v7 - 1),
      &v16);
  }
  a1[1] += 12LL;
  return v5 + 12 * a2;
}

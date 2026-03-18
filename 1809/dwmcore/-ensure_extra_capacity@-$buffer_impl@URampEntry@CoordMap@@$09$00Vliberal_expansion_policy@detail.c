/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000ADDC
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000AEE8 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000D434 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180013F48 (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x18022A7B0 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 */

void __fastcall detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  const char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // r8
  void *v9; // rdx
  void *v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = (const char *)a1[2];
  v4 = a1[1];
  if ( (__int64)&v3[-v4] >> 4 < a2 )
  {
    v5 = (v4 - *a1) >> 4;
    if ( v5 + a2 < v5 )
      std::_Xoverflow_error(v3);
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((__int64)&v3[-*a1] >> 4),
           (__int64)&v3[-*a1] >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = a1[1];
    v9 = (void *)*a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v14,
      v9,
      v8,
      &v16);
    v11 = (void *)*a1;
    v12 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    WPF::ProcessHeapImpl::Free(v11);
    v13 = *a1 + 16 * v5;
    a1[2] = *a1 + 16 * v6;
    a1[1] = v13;
  }
}

/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180186704
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006F790 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180181658 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCDrawListEntry@@@detail@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCDrawListEntry@@@0@0V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@Z @ 0x1801818A4 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCDrawListEntry@@@detail@@V-$checked_array_i.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186314 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v20 = a3;
  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v16 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  *((_QWORD *)&v15 + 1) = 1LL;
  v9 = v8 >> 3;
  v16 = 0LL;
  v10 = v9 - a2;
  v11 = v6 + 8 * v9;
  *(_QWORD *)&v15 = v11;
  if ( !v11 )
    goto LABEL_12;
  v20 = v7;
  v16 = 1LL;
  v12 = 1LL;
  v17 = v15;
  if ( v10 <= 1 )
    v12 = v9 - a2;
  v18 = 1LL;
  v19 = v7 - 8 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
    (unsigned __int64)&v19,
    &v20,
    (__int64 *)&v17);
  if ( v10 > 1 )
  {
    v16 = 0LL;
    *(_QWORD *)&v15 = v6;
    *((_QWORD *)&v15 + 1) = v9;
    v18 = 0LL;
    v13 = v9 < 0;
    if ( v9 )
    {
      if ( !v6 )
        goto LABEL_12;
      v13 = v9 < 0;
    }
    if ( !v13 || !v9 )
    {
      v18 = v9;
      v16 = v9;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        (__int64)&v17,
        (_QWORD *)(v6 + 8 * a2),
        (_QWORD *)(v6 - 8 + 8 * v9),
        (__int64 *)&v15);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v11, v5);
    JUMPOUT(0x18018683BLL);
  }
LABEL_11:
  a1[1] += 8LL;
  return v6 + 8 * a2;
}

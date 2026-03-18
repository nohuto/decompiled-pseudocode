/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180187DE4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092A20 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x180182D58 (--$move_backward@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@PEAVCDrawListEntry@@@detail@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCDrawListEntry@@@0@0V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@Z @ 0x180182FA4 (--$move_backward_uninitialized@V-$basic_iterator@PEAVCDrawListEntry@@@detail@@V-$checked_array_i.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801879F4 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // sf
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF

  v22 = a3;
  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v18 = 0LL;
  v8 = *a1;
  v9 = a1[1];
  v10 = v9 - *a1;
  *((_QWORD *)&v17 + 1) = 1LL;
  v11 = v10 >> 3;
  v18 = 0LL;
  v12 = v11 - a2;
  v13 = v8 + 8 * v11;
  *(_QWORD *)&v17 = v13;
  if ( !v13 )
    goto LABEL_12;
  v22 = v9;
  v18 = 1LL;
  v14 = 1LL;
  v19 = v17;
  if ( v12 <= 1 )
    v14 = v11 - a2;
  v20 = 1LL;
  v21 = v9 - 8 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<CDrawListEntry *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
    (unsigned __int64)&v21,
    &v22,
    (__int64 *)&v19);
  if ( v12 > 1 )
  {
    v18 = 0LL;
    *(_QWORD *)&v17 = v8;
    *((_QWORD *)&v17 + 1) = v11;
    v20 = 0LL;
    v15 = v11 < 0;
    if ( v11 )
    {
      if ( !v8 )
        goto LABEL_12;
      v15 = v11 < 0;
    }
    if ( !v15 || !v11 )
    {
      v20 = v11;
      v18 = v11;
      std::move_backward<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
        (__int64)&v19,
        (_QWORD *)(v8 + 8 * a2),
        (_QWORD *)(v8 - 8 + 8 * v11),
        (__int64 *)&v17);
      goto LABEL_11;
    }
LABEL_12:
    _o__invalid_parameter_noinfo_noreturn(v13, v5, v6, v7);
    JUMPOUT(0x180187F1BLL);
  }
LABEL_11:
  a1[1] += 8LL;
  return v8 + 8 * a2;
}

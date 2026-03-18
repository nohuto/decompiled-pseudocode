/*
 * XREFs of ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18002FA88
 * Callers:
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18002F730 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18002F8BC (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@M@detail@@V?$checked_array_iterator@PEAM@stdext@@@detail@@YAXV?$basic_iterator@M@0@0V?$checked_array_iterator@PEAM@stdext@@@Z @ 0x18002FB6C (--$move_backward_uninitialized@V-$basic_iterator@M@detail@@V-$checked_array_iterator@PEAM@stdext.c)
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18002FB90 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x1801B7768 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 */

__int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
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
  bool v14; // sf
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v20 = a3;
  detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v16 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  *((_QWORD *)&v15 + 1) = 1LL;
  v9 = v8 >> 2;
  v16 = 0LL;
  v10 = v9 - a2;
  v11 = v6 + 4 * v9;
  *(_QWORD *)&v15 = v11;
  if ( !v11 )
    goto LABEL_6;
  v20 = v7;
  v16 = 1LL;
  v12 = 1LL;
  v17 = v15;
  if ( v10 <= 1 )
    v12 = v9 - a2;
  v18 = 1LL;
  v19 = v7 - 4 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<float>,stdext::checked_array_iterator<float *>>(
    &v19,
    &v20,
    &v17);
  if ( v10 > 1 )
  {
    v16 = 0LL;
    *(_QWORD *)&v15 = v6;
    *((_QWORD *)&v15 + 1) = v9;
    v18 = 0LL;
    v14 = v9 < 0;
    if ( v9 )
    {
      if ( !v6 )
        goto LABEL_6;
      v14 = v9 < 0;
    }
    if ( !v14 || !v9 )
    {
      v18 = v9;
      v16 = v9;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        &v17,
        v6 + 4 * a2,
        v6 - 4 + 4 * v9,
        &v15);
      goto LABEL_5;
    }
LABEL_6:
    _o__invalid_parameter_noinfo_noreturn(v11, v5);
    JUMPOUT(0x18002FB62LL);
  }
LABEL_5:
  a1[1] += 4LL;
  return v6 + 4 * a2;
}

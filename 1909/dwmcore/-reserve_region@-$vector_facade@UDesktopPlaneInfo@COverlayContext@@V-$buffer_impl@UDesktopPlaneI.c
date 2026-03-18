/*
 * XREFs of ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x1801869A8
 * Callers:
 *     ??$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBUDesktopPlaneInfo@COverlayContext@@@1@AEBUDesktopPlaneInfo@COverlayContext@@@Z @ 0x1801812F4 (--$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@-$vector_facade@UDesktopPlaneInfo@COv.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x1801816E0 (--$move_backward@V-$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@0@0V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@Z @ 0x1801818FC (--$move_backward_uninitialized@V-$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V-$.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180186418 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  bool v12; // sf
  __int64 v13; // rsi
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v20 = a3;
  detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = *a1;
  v16 = 0LL;
  v6 = a1[1];
  *((_QWORD *)&v15 + 1) = 1LL;
  v7 = (unsigned __int128)((v6 - v5) * (__int128)(__int64)0x8888888888888889uLL) >> 64;
  v16 = 0LL;
  v8 = (v6 - v5) / 120;
  v9 = v5 + 120 * v8;
  v10 = v8 - a2;
  *(_QWORD *)&v15 = v9;
  if ( !v9 )
    goto LABEL_13;
  v20 = v6;
  v16 = 1LL;
  v11 = 1LL;
  v17 = v15;
  if ( v10 <= 1 )
    v11 = (v6 - v5) / 120 - a2;
  v18 = 1LL;
  v19 = v6 - 120 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext::DesktopPlaneInfo>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    &v19,
    &v20,
    (__int64 *)&v17);
  if ( v10 <= 1 )
  {
    v13 = 120 * a2;
    goto LABEL_12;
  }
  v16 = 0LL;
  *(_QWORD *)&v15 = v5;
  *((_QWORD *)&v15 + 1) = v8;
  v18 = 0LL;
  v12 = v8 < 0;
  if ( v8 )
  {
    if ( !v5 )
      goto LABEL_13;
    v12 = v8 < 0;
  }
  if ( v12 && v8 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v9, v7);
    JUMPOUT(0x180186B0ALL);
  }
  v13 = 120 * a2;
  v18 = v8;
  v16 = v8;
  std::move_backward<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    (__int64)&v17,
    120 * a2 + v5,
    120 * v8 + v5 - 120,
    &v15);
LABEL_12:
  a1[1] += 120LL;
  return v13 + v5;
}

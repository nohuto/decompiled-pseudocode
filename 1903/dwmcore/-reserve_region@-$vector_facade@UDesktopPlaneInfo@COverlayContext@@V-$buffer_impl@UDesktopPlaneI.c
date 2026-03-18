/*
 * XREFs of ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x180188088
 * Callers:
 *     ??$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBUDesktopPlaneInfo@COverlayContext@@@1@AEBUDesktopPlaneInfo@COverlayContext@@@Z @ 0x1801829F4 (--$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@-$vector_facade@UDesktopPlaneInfo@COv.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182DE0 (--$move_backward@V-$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@0@0V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@Z @ 0x180182FFC (--$move_backward_uninitialized@V-$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V-$.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187AF8 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  bool v13; // sf
  __int64 v14; // rsi
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF

  v21 = a3;
  detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = *a1;
  v17 = 0LL;
  v6 = a1[1];
  v7 = v6 - v5;
  *((_QWORD *)&v16 + 1) = 1LL;
  v8 = (unsigned __int128)((v6 - v5) * (__int128)(__int64)0x8888888888888889uLL) >> 64;
  v17 = 0LL;
  v9 = (v6 - v5) / 120;
  v10 = v5 + 120 * v9;
  v11 = v9 - a2;
  *(_QWORD *)&v16 = v10;
  if ( !v10 )
    goto LABEL_13;
  v21 = v6;
  v17 = 1LL;
  v12 = 1LL;
  v18 = v16;
  if ( v11 <= 1 )
    v12 = v7 / 120 - a2;
  v19 = 1LL;
  v20 = v6 - 120 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext::DesktopPlaneInfo>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    &v20,
    &v21,
    (__int64 *)&v18);
  if ( v11 <= 1 )
  {
    v14 = 120 * a2;
    goto LABEL_12;
  }
  v17 = 0LL;
  *(_QWORD *)&v16 = v5;
  *((_QWORD *)&v16 + 1) = v9;
  v19 = 0LL;
  v13 = v9 < 0;
  if ( v9 )
  {
    if ( !v5 )
      goto LABEL_13;
    v13 = v9 < 0;
  }
  if ( v13 && v9 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v10, v8, v6, v7);
    JUMPOUT(0x1801881EALL);
  }
  v14 = 120 * a2;
  v19 = v9;
  v17 = v9;
  std::move_backward<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    (__int64)&v18,
    120 * a2 + v5,
    120 * v9 + v5 - 120,
    &v16);
LABEL_12:
  a1[1] += 120LL;
  return v14 + v5;
}

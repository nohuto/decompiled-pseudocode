/*
 * XREFs of ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CC24
 * Callers:
 *     ??$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBUDesktopPlaneInfo@COverlayContext@@@1@AEBUDesktopPlaneInfo@COverlayContext@@@Z @ 0x180167D38 (--$insert_unchecked@AEBUDesktopPlaneInfo@COverlayContext@@@-$vector_facade@UDesktopPlaneInfo@COv.c)
 * Callees:
 *     ?size@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800D5370 (-size@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COverl.c)
 *     ??$move_backward@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180167E48 (--$move_backward@V-$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V-$checked_array_i.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@0@0V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@Z @ 0x180167FA8 (--$move_backward_uninitialized@V-$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V-$.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016C904 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  _OWORD *v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // sf
  __int64 v15; // r11
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  char *v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h]
  _OWORD *v23; // [rsp+B0h] [rbp+50h] BYREF

  v23 = a3;
  detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v5 = detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::size(a1);
  v8 = *a1;
  v9 = (_OWORD *)a1[1];
  v10 = v5 - a2;
  v11 = v5;
  v18 = 0LL;
  *((_QWORD *)&v17 + 1) = 1LL;
  v12 = v8 + 120 * v5;
  *(_QWORD *)&v17 = v12;
  v22 = v12;
  if ( !v12 )
    goto LABEL_13;
  v23 = v9;
  v18 = 1LL;
  v13 = v5 - a2;
  v19 = v17;
  if ( v10 > 1 )
    v13 = 1LL;
  v20 = 1LL;
  v21 = (char *)v9 - 120 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext::DesktopPlaneInfo>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    (__int64)&v21,
    &v23,
    (__int64 *)&v19);
  if ( v10 <= 1 )
  {
    v15 = 120 * a2;
    goto LABEL_12;
  }
  v18 = 0LL;
  *(_QWORD *)&v17 = v8;
  *((_QWORD *)&v17 + 1) = v11;
  v20 = 0LL;
  v14 = v11 < 0;
  if ( v11 )
  {
    if ( !v8 )
      goto LABEL_13;
    v14 = v11 < 0;
  }
  if ( v14 && v11 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v9, v12, v6, v7);
    JUMPOUT(0x18016CD5ELL);
  }
  v20 = v11;
  v18 = v11;
  std::move_backward<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
    (__int64)&v19,
    120 * a2 + v8,
    120 * v11 + v8 - 120,
    &v17);
LABEL_12:
  a1[1] += 120LL;
  return v15 + v8;
}

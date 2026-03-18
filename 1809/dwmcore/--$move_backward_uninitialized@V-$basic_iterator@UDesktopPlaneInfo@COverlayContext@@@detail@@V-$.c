/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@0@0V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@Z @ 0x180167FA8
 * Callers:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CC24 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext::DesktopPlaneInfo>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        _OWORD **a2,
        __int64 *a3)
{
  _OWORD *result; // rax
  _QWORD *i; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  _OWORD *v7; // rax

  result = *a2;
  for ( i = (_QWORD *)a1; *a2 != (_OWORD *)*i; result = *a2 )
  {
    *a2 = (_OWORD *)((char *)result - 120);
    v5 = *a3;
    if ( !*a3 || (v6 = a3[2]) == 0 || (a1 = v6 - 1, a3[2] = v6 - 1, v6 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, v5);
      JUMPOUT(0x18016804FLL);
    }
    v7 = *a2;
    a1 *= 120LL;
    *(_OWORD *)(a1 + v5) = **a2;
    *(_OWORD *)(a1 + v5 + 16) = v7[1];
    *(_OWORD *)(a1 + v5 + 32) = v7[2];
    *(_OWORD *)(a1 + v5 + 48) = v7[3];
    *(_OWORD *)(a1 + v5 + 64) = v7[4];
    *(_OWORD *)(a1 + v5 + 80) = v7[5];
    *(_OWORD *)(a1 + v5 + 96) = v7[6];
    *(_QWORD *)(a1 + v5 + 112) = *((_QWORD *)v7 + 14);
  }
  return result;
}

/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@detail@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@detail@@YAXV?$basic_iterator@UDesktopPlaneInfo@COverlayContext@@@0@0V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@Z @ 0x1801818FC
 * Callers:
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x1801869A8 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<COverlayContext::DesktopPlaneInfo>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v4 = *a3;
    do
    {
      v5 = result - 120;
      *a2 = result - 120;
      if ( !v4 || (v6 = a3[2]) == 0 || (v7 = v6 - 1, a3[2] = v7, v7 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2);
        JUMPOUT(0x1801819A8LL);
      }
      v8 = 120 * v7;
      *(_OWORD *)(v8 + v4) = *(_OWORD *)v5;
      *(_OWORD *)(v8 + v4 + 16) = *(_OWORD *)(v5 + 16);
      *(_OWORD *)(v8 + v4 + 32) = *(_OWORD *)(v5 + 32);
      *(_OWORD *)(v8 + v4 + 48) = *(_OWORD *)(v5 + 48);
      *(_OWORD *)(v8 + v4 + 64) = *(_OWORD *)(v5 + 64);
      *(_OWORD *)(v8 + v4 + 80) = *(_OWORD *)(v5 + 80);
      *(_OWORD *)(v8 + v4 + 96) = *(_OWORD *)(v5 + 96);
      *(_QWORD *)(v8 + v4 + 112) = *(_QWORD *)(v5 + 112);
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}

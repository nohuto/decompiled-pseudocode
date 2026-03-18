/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180168058
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18016C904 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = 120LL * a4[2] + *a4;
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 96);
    *(_QWORD *)(v5 + 112) = *(_QWORD *)(a2 + 112);
    v5 += 120LL;
    a2 += 120LL;
  }
  result = a1;
  a4[2] = (v5 - *a4) / 120;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}

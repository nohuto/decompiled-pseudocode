/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAUDesktopPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180182B8C
 * Callers:
 *     ?clear_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180187928 (-clear_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInf.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180187AF8 (-ensure_extra_capacity@-$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<COverlayContext::DesktopPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::DesktopPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // kr18_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v6 = a3 - a2;
  v7 = v6 / 120;
  if ( v6 / 120 < 0 && a4[2] < (unsigned __int64)(v6 / -120) || v7 > 0 && a4[1] - a4[2] < (unsigned __int64)v7 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v7, a3, a4);
    __debugbreak();
  }
  v8 = *a4 + 120LL * a4[2];
  while ( v4 != a3 )
  {
    *(_OWORD *)v8 = *(_OWORD *)v4;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v4 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(v4 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(v4 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(v4 + 96);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v4 + 112);
    v8 += 120LL;
    v4 += 120LL;
  }
  result = a1;
  a4[2] = (v8 - *a4) / 120;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}

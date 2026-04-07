/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x180080A18
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180084818 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18004C268 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  unsigned int v2; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *(_DWORD *)(a1 + 64) = 0;
  v2 = 0;
  if ( a2 == 1 )
  {
    v2 = 2;
    *(_DWORD *)(a1 + 64) = 2;
  }
  v4 = CVisual::SetSamplingMode(*(_QWORD *)(a1 + 32), v2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 64LL))(*(_QWORD *)(a1 + 32));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x190u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x18Bu);
  }
  return v5;
}

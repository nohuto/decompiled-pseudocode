/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x18007A208
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007E5C8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18004A42C (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned int v3; // edx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v2 = a2 == 1;
  v3 = 2;
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    v3 = 0;
  v6 = CVisual::SetSamplingMode(v5, v3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 64LL))(*(_QWORD *)(a1 + 40));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x191u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x18Cu);
  }
  return v7;
}

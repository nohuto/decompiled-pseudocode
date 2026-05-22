/*
 * XREFs of ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4
 * Callers:
 *     ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180035170 (-OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     SignedNormalize @ 0x180032970 (SignedNormalize.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180035578 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1800356D0 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180035844 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180035984 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180035DBC (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037698 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037764 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800B97D4 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsPointerAndManipulation(
        ControllerProcessor *this,
        struct Windows::Gaming::Input::GamepadReading *a2)
{
  float v3; // xmm0_4
  float v4; // xmm10_4
  __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm10_4
  __int64 v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm11_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rdx
  __int64 v14; // rcx
  float v15; // xmm12_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rdx
  float v21; // xmm0_4
  int v22; // eax
  int v23; // ecx
  float v24; // xmm0_4

  v3 = *((double *)a2 + 2);
  v4 = 0.0 - SignedNormalize(v3, 0.1171875, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_f32[0];
  v6 = *(double *)(v5 + 24);
  v7 = v4 + SignedNormalize(v6, 0.1171875, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_f32[0];
  v9 = *(double *)(v8 + 48);
  LODWORD(v10) = SignedNormalize(v9, 0.26516724, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  v12 = *(double *)(v11 + 56);
  LODWORD(v15) = SignedNormalize(v12, 0.26516724, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  v16 = 0.0;
  v17 = 0.0;
  if ( *(_BYTE *)(v14 + 704) )
  {
    v18 = *(_DWORD *)(v13 + 8);
    if ( (v18 & 0x40) != 0 )
      v16 = *(float *)(v14 + 6960);
    if ( (v18 & 0x80u) != 0 )
      v16 = *(float *)(v14 + 6960) * -1.0;
    if ( (v18 & 0x100) != 0 )
      v17 = *(float *)(v14 + 6960) * -1.0;
    if ( (v18 & 0x200) != 0 )
      v17 = *(float *)(v14 + 6960);
  }
  else
  {
    v19 = *(double *)(v13 + 32);
    LODWORD(v17) = SignedNormalize(v19, 0.23953247, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
    v21 = *(double *)(v20 + 40);
    LODWORD(v16) = SignedNormalize(v21, 0.23953247, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  }
  v22 = *(_DWORD *)(v14 + 1776);
  if ( (v22 & 1) != 0 )
  {
    ControllerProcessor::CalculateNavigationDelta((ControllerProcessor *)v14, v17, v16);
    v22 = *((_DWORD *)this + 444);
  }
  if ( *((_BYTE *)this + 2681) )
  {
    LOBYTE(v23) = v22;
    if ( (v22 & 8) != 0 )
    {
      ControllerProcessor::CalculateMarginPanDelta(this);
      v23 = *((_DWORD *)this + 444);
      LOBYTE(v22) = v23;
    }
    if ( (v23 & 0x84) != 0 )
    {
      ControllerProcessor::CalculatePanDelta(this, v10, v15);
      v22 = *((_DWORD *)this + 444);
      LOBYTE(v23) = v22;
    }
    if ( (v23 & 2) != 0 )
    {
      ControllerProcessor::CalculateZoomDelta(this, v7);
      v22 = *((_DWORD *)this + 444);
    }
  }
  if ( (v22 & 1) != 0 )
  {
    ControllerProcessor::ApplyNavigationDelta(this);
    v22 = *((_DWORD *)this + 444);
  }
  if ( (v22 & 0x80u) != 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 2681) )
  {
    if ( (*((_BYTE *)this + 1776) & 0xC) != 0 )
    {
      if ( *((float *)this + 463) == 0.0 && *((float *)this + 464) == 0.0 )
      {
        if ( *((_DWORD *)this + 669) == 1 )
          ControllerProcessor::TryUpdateInteractionType(this, 0LL);
      }
      else
      {
        ControllerProcessor::TryUpdateInteractionType(this, 1LL);
        if ( *((_DWORD *)this + 669) == 1 )
          ManipulationInjector::InjectPan(
            (ControllerProcessor *)((char *)this + 1872),
            *((float *)this + 463),
            *((float *)this + 464),
            0);
        *((_DWORD *)this + 463) = 0;
        *((_DWORD *)this + 464) = 0;
      }
    }
    if ( (*((_BYTE *)this + 1776) & 2) != 0 )
    {
      v24 = *((float *)this + 465);
      if ( v24 == 0.0 )
      {
        if ( ((*((_DWORD *)this + 669) - 16) & 0xFFFFFFEF) == 0 )
          ControllerProcessor::TryUpdateInteractionType(this, 0LL);
      }
      else
      {
        if ( v24 <= 1.0 )
        {
          if ( !*((_DWORD *)this + 669) && *((_BYTE *)this + 2681) )
            ControllerProcessor::StartInteractionHelper(this, 32LL);
        }
        else
        {
          ControllerProcessor::TryUpdateInteractionType(this, 16LL);
        }
        if ( ((*((_DWORD *)this + 669) - 16) & 0xFFFFFFEF) == 0 )
          ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 1872), *((float *)this + 465), 0);
        *((_DWORD *)this + 465) = 0;
      }
    }
  }
  return 0LL;
}

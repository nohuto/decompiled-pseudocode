/*
 * XREFs of ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054
 * Callers:
 *     ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180076B70 (-OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18007508C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18007533C (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1800753C8 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800754EC (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1800758A8 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180075A1C (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180075B74 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180075CB4 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x180077C88 (SignedNormalize.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsPointerAndManipulation(
        ControllerProcessor *this,
        struct Windows::Gaming::Input::GamepadReading *a2)
{
  float v3; // xmm9_4
  double v4; // xmm7_8
  float v5; // xmm9_4
  double v6; // xmm0_8
  float v7; // xmm10_4
  __int64 v8; // rdx
  __int64 v9; // rcx
  double v10; // xmm0_8
  float v11; // xmm11_4
  double v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  int v17; // eax

  v3 = 0.0 - ((float (*)(void))SignedNormalize)();
  v4 = 0.0;
  v5 = v3 + ((float (*)(void))SignedNormalize)();
  v6 = ((double (*)(void))SignedNormalize)();
  v7 = *(float *)&v6;
  v10 = ((double (*)(void))SignedNormalize)();
  v11 = *(float *)&v10;
  v12 = 0.0;
  if ( *(_BYTE *)(v9 + 272) )
  {
    v13 = *(_DWORD *)(v8 + 8);
    if ( (v13 & 0x40) != 0 )
      *(_QWORD *)&v12 = *(unsigned int *)(v9 + 11344);
    if ( (v13 & 0x80u) != 0 )
    {
      *(_QWORD *)&v12 = *(unsigned int *)(v9 + 11344);
      *(float *)&v12 = *(float *)&v12 * -1.0;
    }
    if ( (v13 & 0x100) != 0 )
    {
      *(_QWORD *)&v4 = *(unsigned int *)(v9 + 11344);
      *(float *)&v4 = *(float *)&v4 * -1.0;
    }
    if ( (v13 & 0x200) != 0 )
      *(_QWORD *)&v4 = *(unsigned int *)(v9 + 11344);
  }
  else
  {
    v4 = ((double (*)(void))SignedNormalize)();
    v12 = *(double *)(v14 + 40);
    SignedNormalize();
  }
  v15 = *(_DWORD *)(v9 + 2232);
  if ( (v15 & 1) != 0 )
  {
    ControllerProcessor::CalculateNavigationDelta((ControllerProcessor *)v9, v4, v12);
    v15 = *((_DWORD *)this + 558);
  }
  if ( *((_BYTE *)this + 3145) )
  {
    LOBYTE(v16) = v15;
    if ( (v15 & 8) != 0 )
    {
      ControllerProcessor::CalculateMarginPanDelta(this);
      v16 = *((_DWORD *)this + 558);
      LOBYTE(v15) = v16;
    }
    if ( (v16 & 0x84) != 0 )
    {
      ControllerProcessor::CalculatePanDelta(this, v7, v11);
      v15 = *((_DWORD *)this + 558);
      LOBYTE(v16) = v15;
    }
    if ( (v16 & 2) != 0 )
    {
      ControllerProcessor::CalculateZoomDelta(this, v5);
      v15 = *((_DWORD *)this + 558);
    }
  }
  if ( (v15 & 1) != 0 )
  {
    ControllerProcessor::ApplyNavigationDelta(this);
    v15 = *((_DWORD *)this + 558);
  }
  if ( (v15 & 0x80u) != 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 3145) )
  {
    v17 = *((_DWORD *)this + 558);
    if ( (v17 & 0xC) != 0 )
    {
      ControllerProcessor::ApplyPanDelta(this);
      v17 = *((_DWORD *)this + 558);
    }
    if ( (v17 & 2) != 0 )
      ControllerProcessor::ApplyZoomDelta(this);
  }
  return 0LL;
}

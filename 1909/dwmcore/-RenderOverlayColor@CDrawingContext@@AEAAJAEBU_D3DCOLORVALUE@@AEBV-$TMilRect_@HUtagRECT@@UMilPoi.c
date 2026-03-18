/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016FB5C
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180012D38 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800CE2E0 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016B9C4 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z @ 0x18016E480 (-GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderOverlayColor(COverlayContext **this, __int128 *a2, __int64 a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 i; // rax
  signed int v12; // eax
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v16[64]; // [rsp+40h] [rbp-88h] BYREF
  int v17; // [rsp+80h] [rbp-48h]
  float v18[4]; // [rsp+90h] [rbp-38h] BYREF

  v17 = 0;
  v15[0] = 0LL;
  COverlayContext::GetInverseDesktopMPOTransform(this[790], (struct CMILMatrix *)v16);
  v6 = CDrawingContext::PushTransformInternal((CDrawingContext *)this, 0LL, (const struct CMILMatrix *)v16, 0LL, 1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1C19u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::CDisableCPUClipScope::Enter(
           (CDrawingContext::CDisableCPUClipScope *)v15,
           (struct CDrawingContext *)this);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C1Eu, 0LL);
    }
    else
    {
      for ( i = 0LL; i < 4; ++i )
        v18[i] = (float)*(int *)(a3 + 4 * i);
      v12 = CDrawingContext::DrawColorRectangleAsDrawList((CDrawingContext *)this, a2, (__int64)v18);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1C21u, 0LL);
    }
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
  }
  CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)v15);
  return v8;
}

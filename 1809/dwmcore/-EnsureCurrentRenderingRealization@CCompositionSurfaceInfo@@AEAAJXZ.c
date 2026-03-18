/*
 * XREFs of ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1800A12BC
 * Callers:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18009F920 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016B83C (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800A302C (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(CCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int CompositionSurfaceRenderingRealization; // eax
  int updated; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-F8h]
  _DWORD v9[8]; // [rsp+30h] [rbp-E8h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]

  v2 = 0;
  memset_0(v9, 0, 0xC8uLL);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&g_pComposition + 536LL) + 112LL))(*(_QWORD *)(*(_QWORD *)&g_pComposition + 536LL)) )
  {
    v2 = -2003292412;
    v8 = 458;
LABEL_12:
    v7 = v2;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, v8);
    goto LABEL_7;
  }
  CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v9);
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    v8 = 465;
    v2 = CompositionSurfaceRenderingRealization | 0x10000000;
    goto LABEL_12;
  }
  if ( v9[0] == 200 && v9[1] == *((_DWORD *)this + 10) && v9[2] == *((_DWORD *)this + 11) )
  {
    updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, (const struct CSM_SURFACE_UPDATE *)v9);
    v2 = updated;
    if ( updated < 0 )
    {
      v8 = 473;
      v7 = updated;
      goto LABEL_14;
    }
  }
LABEL_7:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v2;
}

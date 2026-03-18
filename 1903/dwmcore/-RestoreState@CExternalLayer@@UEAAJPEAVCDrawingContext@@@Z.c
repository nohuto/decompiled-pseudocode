/*
 * XREFs of ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18007AF80
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180011D70 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B50E0 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800CC620 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017CFB0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D5E0 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017E8B0 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017EDA0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017F4B0 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180180380 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x180015B44 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18007AF54 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800B09FC (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // esi
  int v5; // eax
  unsigned int v6; // ecx

  v2 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start);
  if ( *((_BYTE *)this + 35) )
  {
    *((_BYTE *)a2 + 6347) = *((_BYTE *)this + 36);
    *((_BYTE *)this + 35) = 0;
  }
  if ( *((_BYTE *)this + 34) )
  {
    CScopedClipStack::PopGpuClipFromScope((struct CDrawingContext *)((char *)a2 + 1008));
    *((_BYTE *)a2 + 6345) = 1;
    *((_BYTE *)this + 34) = 0;
  }
  if ( *((_BYTE *)this + 33) )
  {
    v5 = CDrawingContext::PopRenderTargetInternal(a2, 0);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x110u, 0LL);
  }
  if ( *((_BYTE *)this + 32) )
  {
    CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 40));
    *((_BYTE *)this + 32) = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
  return v2;
}

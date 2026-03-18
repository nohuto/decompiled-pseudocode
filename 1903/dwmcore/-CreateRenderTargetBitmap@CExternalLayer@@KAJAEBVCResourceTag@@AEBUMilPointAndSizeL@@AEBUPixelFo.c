/*
 * XREFs of ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180014AA8 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x18003E140 (-Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18017CD3C (-Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@PEAPEAV1@@Z @ 0x18017D04C (-Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAV-$TValueResource@U.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18017E4A0 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18017EA28 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@AEBV-$TMilRect_@M.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z @ 0x18017F2E0 (-Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x18017F814 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180016F4C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180166350 (McTemplateU0qqqq.c)
 */

__int64 __fastcall CExternalLayer::CreateRenderTargetBitmap(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        struct _LUID a4,
        int a5,
        char a6,
        char a7,
        char a8,
        _QWORD *a9)
{
  __int64 v9; // xmm0_8
  int v11; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  int ScratchRenderTargetBitmap; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int RenderTargetBitmap; // eax
  unsigned int v21; // ecx
  int v22; // [rsp+38h] [rbp-59h]
  __int64 v23; // [rsp+70h] [rbp-21h] BYREF
  __int64 v24; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+80h] [rbp-11h] BYREF
  int v26; // [rsp+88h] [rbp-9h]

  v9 = *a3;
  v11 = *((_DWORD *)a3 + 2);
  v23 = 0LL;
  HIDWORD(v24) = 0;
  v25 = v9;
  *a9 = 0LL;
  v26 = v11;
  LODWORD(v24) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
    McTemplateU0qqqq(
      *a2 + a2[2],
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Start,
      *a2,
      a2[1],
      *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
      a2[1] + *((_BYTE *)a2 + 12));
  v14 = a2[3];
  v15 = a2[2];
  if ( a7 )
  {
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  a1,
                                  v15,
                                  v14,
                                  v24,
                                  0,
                                  (__int64)&v25,
                                  v22,
                                  a4,
                                  a5,
                                  a6,
                                  a8,
                                  &v23);
    v18 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap >= 0 )
    {
LABEL_5:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qqqq(
          *a2 + a2[2],
          (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginExternalLayer_Stop,
          *a2,
          a2[1],
          *(_BYTE *)a2 + *((_BYTE *)a2 + 8),
          a2[1] + *((_BYTE *)a2 + 12));
      *a9 = v23;
      return v18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ScratchRenderTargetBitmap, 0x2Du, 0LL);
  }
  else
  {
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (unsigned int)&qword_180340368,
                           a1,
                           v15,
                           v14,
                           v24,
                           0,
                           (__int64)&v25,
                           1,
                           a4,
                           a5,
                           a6,
                           1,
                           a8,
                           (__int64)&v23);
    v18 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, RenderTargetBitmap, 0x3Du, 0LL);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v18;
}

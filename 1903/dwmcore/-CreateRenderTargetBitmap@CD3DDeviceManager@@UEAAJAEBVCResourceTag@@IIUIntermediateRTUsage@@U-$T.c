/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E4B0
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006F20C (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800CA08C (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18019A910 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025CD84 (-EnsureRestoreBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180264AF4 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x18004238C (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800477B0 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B20BC (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        struct _LUID a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _QWORD *a14)
{
  int v14; // ebx
  struct _LUID v15; // rdi
  _QWORD *v17; // r13
  int v19; // r9d
  struct CD3DDeviceLevel1 *v20; // r14
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // esi
  int D3DDevice; // eax
  unsigned int v25; // ecx
  int RenderTargetBitmap; // eax
  unsigned int v27; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  DWORD LowPart; // [rsp+38h] [rbp-30h]
  int v32; // [rsp+40h] [rbp-28h]
  struct CD3DDeviceLevel1 *v33; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp+60h] BYREF

  v37 = a4;
  v36 = a3;
  v14 = a10;
  v15 = a9;
  v17 = a14;
  v19 = a5;
  v32 = a10;
  v20 = 0LL;
  LowPart = a9.LowPart;
  *a14 = 0LL;
  v33 = 0LL;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams(a1, (unsigned int)&v36, (unsigned int)&v37, v19);
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802920EC, 1u, v21, 0x4A0u, 0LL);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 8), v15, &v33);
    v23 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802920EC, 1u, D3DDevice, 0x4A2u, 0LL);
      v20 = v33;
    }
    else
    {
      v20 = v33;
      if ( a12 )
      {
        LOBYTE(v32) = 0;
        LOBYTE(LowPart) = a13;
        RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                               (char *)v33 + 520,
                               a2,
                               a3,
                               a4,
                               v14,
                               a7,
                               a11,
                               LowPart,
                               v32,
                               v17);
        v23 = RenderTargetBitmap;
        if ( RenderTargetBitmap < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802920EC, 1u, RenderTargetBitmap, 0x4ADu, 0LL);
      }
      else
      {
        v29 = CD3DDeviceLevel1::CreateRenderTargetBitmap(v33, a2, a3, a4, v14, a7, a11, v17, v32);
        v23 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v30, &dword_1802920EC, 1u, v29, 0x4B7u, 0LL);
      }
    }
  }
  if ( v20 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v20 + 496));
  return v23;
}

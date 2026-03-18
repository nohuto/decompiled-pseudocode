/*
 * XREFs of ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180004810 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180015820 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FC60 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029E60 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800924C4 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DAC2C (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800DAFC0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::GetRenderTargetBitmap(
        CRenderTargetBitmapCache *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        bool a8,
        char a9,
        void **a10)
{
  int MatchingBitmap; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  CHwTextureRenderTarget *v17; // rbx
  __int64 v18; // rcx
  int Interface; // eax
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // rcx
  CHwTextureRenderTarget *v24[2]; // [rsp+40h] [rbp-38h] BYREF

  v24[0] = 0LL;
  MatchingBitmap = CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, a4, a6, a7, a8, v24);
  v16 = MatchingBitmap;
  if ( MatchingBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, MatchingBitmap, 0xA2u);
    goto LABEL_17;
  }
  v17 = v24[0];
  if ( !v24[0] )
  {
    v22 = CScratchRenderTargetBitmap::Create(
            a3,
            a4,
            (struct CD3DDeviceLevel1 *)(((unsigned __int64)a1 - 520) & -(__int64)(a1 != 0LL)),
            a5,
            a6,
            a7,
            v24);
    v16 = v22;
    if ( v22 >= 0 )
    {
      v17 = v24[0];
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB5u);
LABEL_17:
    v17 = v24[0];
    goto LABEL_9;
  }
  CHwTextureRenderTarget::UpdatePixelFormatInfo(v24[0], a6);
  *((_DWORD *)v17 + 29) = a5;
LABEL_4:
  v18 = *((_QWORD *)v17 + 30);
  *((_BYTE *)v17 + 281) = a9;
  if ( v18 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v18 + 120) + 40LL))(
      *(_QWORD *)(v18 + 120),
      &WKPDID_D3DDebugObjectName,
      *(unsigned int *)(a2 + 8),
      *(_QWORD *)a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CHwTextureRenderTarget *)((char *)v17 + 160),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a10);
  v16 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Interface, 0xC2u);
  }
  else if ( *((_BYTE *)v17 + 281) )
  {
    ++*((_DWORD *)a1 + 10);
  }
LABEL_9:
  if ( v17 )
    CScratchRenderTargetBitmap::Release(v17);
  return v16;
}

/*
 * XREFs of ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800158FC (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18001851C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180049F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18004A260 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18004A3F0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066FD0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800CFB3C (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  unsigned int v15; // ecx
  unsigned int v16; // edi
  CHwTextureRenderTarget *v17; // rbx
  __int64 v18; // rcx
  int Interface; // eax
  unsigned int v20; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // [rsp+28h] [rbp-50h]
  CHwTextureRenderTarget *v25[2]; // [rsp+40h] [rbp-38h] BYREF

  v25[0] = 0LL;
  MatchingBitmap = CRenderTargetBitmapCache::FindMatchingBitmap(a1, a3, a4, a6, a7, a8, v25);
  v16 = MatchingBitmap;
  if ( MatchingBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, MatchingBitmap, 0xA2u, 0LL);
    goto LABEL_17;
  }
  v17 = v25[0];
  if ( !v25[0] )
  {
    LOBYTE(v24) = a7;
    v22 = CScratchRenderTargetBitmap::Create(
            a3,
            a4,
            ((unsigned __int64)a1 - 520) & -(__int64)(a1 != 0LL),
            a5,
            a6,
            v24,
            v25);
    v16 = v22;
    if ( v22 >= 0 )
    {
      v17 = v25[0];
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB5u, 0LL);
LABEL_17:
    v17 = v25[0];
    goto LABEL_9;
  }
  CHwTextureRenderTarget::UpdatePixelFormatInfo(v25[0], a6);
  *((_DWORD *)v17 + 12) = a5;
LABEL_4:
  v18 = *((_QWORD *)v17 + 22);
  *((_BYTE *)v17 + 217) = a9;
  if ( v18 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v18 + 120) + 40LL))(
      *(_QWORD *)(v18 + 120),
      &WKPDID_D3DDebugObjectName,
      *(unsigned int *)(a2 + 8),
      *(_QWORD *)a2);
  Interface = CMILCOMBase::InternalQueryInterface(
                (CHwTextureRenderTarget *)((char *)v17 + 96),
                &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
                a10);
  v16 = Interface;
  if ( Interface < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, Interface, 0xC2u, 0LL);
  }
  else if ( *((_BYTE *)v17 + 217) )
  {
    ++*((_DWORD *)a1 + 10);
  }
LABEL_9:
  if ( v17 )
    CScratchRenderTargetBitmap::Release(v17);
  return v16;
}

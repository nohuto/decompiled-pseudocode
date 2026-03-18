/*
 * XREFs of ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180016F4C
 * Callers:
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E304 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABB88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x18004238C (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800477B0 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetScratchRenderTargetBitmap(
        CD3DDeviceManager *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        struct _LUID a9,
        int a10,
        char a11,
        char a12,
        _QWORD *a13)
{
  int v13; // edi
  struct _LUID v14; // rbx
  _QWORD *v16; // r12
  __int64 v18; // r13
  int v19; // r9d
  struct CD3DDeviceLevel1 *v20; // rbp
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // esi
  int D3DDevice; // eax
  unsigned int v25; // ecx
  int RenderTargetBitmap; // eax
  unsigned int v27; // ecx
  char v29; // [rsp+30h] [rbp-78h]
  DWORD LowPart; // [rsp+38h] [rbp-70h]
  int v31; // [rsp+40h] [rbp-68h]
  struct CD3DDeviceLevel1 *v32; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v36; // [rsp+C8h] [rbp+20h] BYREF

  v36 = a4;
  v35 = a3;
  v13 = a10;
  v14 = a9;
  v16 = a13;
  v18 = a7;
  v19 = a5;
  v20 = 0LL;
  v31 = a10;
  *a13 = 0LL;
  LowPart = v14.LowPart;
  v32 = 0LL;
  v21 = CD3DDeviceManager::ValidateRenderTargetBitmapParams((_DWORD)a1, (unsigned int)&v35, (unsigned int)&v36, v19);
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802920EC, 1u, v21, 0x524u, 0LL);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(a1, v14, &v32);
    v23 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802920EC, 1u, D3DDevice, 0x526u, 0LL);
      v20 = v32;
    }
    else
    {
      v20 = v32;
      LOBYTE(v31) = 1;
      LOBYTE(LowPart) = a12;
      v29 = a11;
      RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                             (char *)v32 + 520,
                             a2,
                             a3,
                             a4,
                             v13,
                             v18,
                             v29,
                             LowPart,
                             v31,
                             v16);
      v23 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802920EC, 1u, RenderTargetBitmap, 0x52Fu, 0LL);
    }
  }
  if ( v20 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v20 + 496));
  return v23;
}

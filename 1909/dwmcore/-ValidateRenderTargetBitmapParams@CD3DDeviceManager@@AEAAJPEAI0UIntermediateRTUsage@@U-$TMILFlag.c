/*
 * XREFs of ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180053DEC
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800158FC (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180052D80 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180047C9C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180053E90 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateRenderTargetBitmapParams(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        unsigned int a9)
{
  int PixelFormatColorSpace; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( a2 && *a2 > 0x1000000u || a3 && *a3 > 0x1000000u )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x3F9u, 0LL);
  }
  else
  {
    PixelFormatColorSpace = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, a8, a9);
    v12 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v14 = 1023;
      goto LABEL_14;
    }
    if ( a7 )
    {
      if ( (a4 & 1) != 0 && *(_DWORD *)a6 == 24 )
      {
        *(_DWORD *)a6 = 10;
        PixelFormatColorSpace = GetPixelFormatColorSpace(10, (enum DXGI_COLOR_SPACE_TYPE *)(a6 + 8));
        v12 = PixelFormatColorSpace;
        if ( PixelFormatColorSpace < 0 )
        {
          v14 = 1080;
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, PixelFormatColorSpace, v14, 0LL);
        }
      }
    }
  }
  return v12;
}

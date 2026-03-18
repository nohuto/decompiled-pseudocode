/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B22BC
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800477B0 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800474C0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800B23A0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800B414C (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        unsigned int a1,
        unsigned int a2,
        struct CD3DDeviceLevel1 *a3,
        unsigned int a4,
        struct PixelFormatInfo *a5,
        bool a6,
        _QWORD *a7)
{
  LPVOID v11; // rax
  __int64 v12; // rcx
  _BYTE *v13; // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  const char *v18; // [rsp+40h] [rbp-18h] BYREF
  int v19; // [rsp+48h] [rbp-10h]

  *a7 = 0LL;
  v11 = operator new(0xE0uLL);
  if ( v11 )
    v13 = (_BYTE *)CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v11, a4);
  else
    v13 = 0LL;
  if ( v13 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)(v13 + 96));
    v19 = 24;
    v18 = "DWM Scratch Rendertarget";
    v14 = CHwTextureRenderTarget::Init(
            (CHwTextureRenderTarget *)v13,
            a3,
            (const struct CResourceTag *)&v18,
            a1,
            a2,
            a5,
            a6);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x21u, 0LL);
      CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v13);
    }
    else
    {
      v13[216] = 1;
      *a7 = v13;
    }
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x19u, 0LL);
  }
  return v16;
}

/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800924C4
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800936AC (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x1800DA87C (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        unsigned int a1,
        unsigned int a2,
        struct CD3DDeviceLevel1 *a3,
        unsigned int a4,
        struct PixelFormatInfo *a5,
        bool a6,
        CHwTextureRenderTarget **a7)
{
  LPVOID v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  CHwTextureRenderTarget *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  const char *v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  *a7 = 0LL;
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x120uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v11, a4);
  v14 = (CHwTextureRenderTarget *)v12;
  if ( v12 )
  {
    CMILCOMBase::InternalAddRef((CMILCOMBase *)(v12 + 160));
    v20 = 24;
    v19 = "DWM Scratch Rendertarget";
    v15 = CHwTextureRenderTarget::Init(v14, a3, (const struct CResourceTag *)&v19, a1, a2, a5, a6);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x23u);
      CScratchRenderTargetBitmap::Release(v14);
    }
    else
    {
      *((_BYTE *)v14 + 280) = 1;
      *a7 = v14;
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Bu);
  }
  return v17;
}

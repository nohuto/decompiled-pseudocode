/*
 * XREFs of ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B277C
 * Callers:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B26EC (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x180163560 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x18016B75C (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023FAA4 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180262D68 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180264508 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800B2824 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x1800B29C4 (--0CD3DVidMemOnlyTexture@@IEAA@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateFromTexture(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        bool a3,
        struct CD3DDeviceLevel1 *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DVidMemOnlyTexture *v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // ebx

  *a5 = 0LL;
  v9 = (CD3DVidMemOnlyTexture *)operator new(0x100uLL);
  if ( v9 )
    v11 = (volatile signed __int32 *)CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(v9, a3);
  else
    v11 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v12 = CD3DTexture::Init((CD3DTexture *)v11, (struct CD3DDeviceLevel1 *)((char *)a4 + 896), a1, a2);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x10Bu, 0LL);
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0xCBu, 0LL);
      CMILPoolResource::Release((CMILPoolResource *)v11);
    }
    else
    {
      *a5 = (struct CD3DVidMemOnlyTexture *)v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0xC3u, 0LL);
  }
  return (unsigned int)v14;
}

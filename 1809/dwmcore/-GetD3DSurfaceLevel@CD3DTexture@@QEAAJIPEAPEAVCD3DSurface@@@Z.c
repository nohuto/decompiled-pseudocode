/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180093974
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180093914 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x18015D130 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180093A54 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  struct CD3DSurface **v3; // rdx
  unsigned int v4; // edi
  unsigned int v7; // ecx
  struct CD3DSurface *v8; // rcx
  unsigned int v9; // r9d
  struct CD3DResourceManager *v10; // rcx
  struct ID3D11Texture2D *v11; // rdx
  int ViewOfTexture; // eax
  unsigned int v13; // ecx
  struct CD3DSurface **v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+34h] [rbp-14h]

  v3 = (struct CD3DSurface **)*((_QWORD *)this + 24);
  v4 = 0;
  if ( v3
    || (v3 = (struct CD3DSurface **)WPF::ProcessHeapImpl::AllocClear(8LL * *((unsigned int *)this + 46)),
        (*((_QWORD *)this + 24) = v3) != 0LL) )
  {
    v8 = *v3;
    if ( !*v3 )
    {
      v9 = *((_DWORD *)this + 43);
      v10 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v16 = *((_DWORD *)this + 36);
      v15 = v3;
      v11 = (struct ID3D11Texture2D *)*((_QWORD *)this + 15);
      v17 = 0LL;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v10, v11, 0LL, v9, v15);
      v4 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, ViewOfTexture, 0x122u);
        return v4;
      }
      v17 = *((_QWORD *)this + 22);
      CD3DSurface::UpdatePixelFormatInfo(**((CD3DSurface ***)this + 24), (const struct PixelFormatInfo *)&v16);
      v8 = (struct CD3DSurface *)**((_QWORD **)this + 24);
    }
    *a3 = v8;
    (**(void (__fastcall ***)(struct CD3DSurface *))v8)(v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x114u);
  }
  return v4;
}

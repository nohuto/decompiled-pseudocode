/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180049A70
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18004A528 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x1801A8910 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023E394 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18004A4F4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  struct CD3DSurface **v3; // rbx
  unsigned int v4; // esi
  unsigned __int64 v7; // rbp
  struct CD3DSurface **v8; // rax
  unsigned int v9; // ecx
  struct CD3DSurface *v10; // rcx
  unsigned int v11; // r9d
  struct ID3D11Texture2D *v12; // rdx
  struct CD3DResourceManager *v13; // rcx
  int ViewOfTexture; // eax
  unsigned int v15; // ecx
  int v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+34h] [rbp-14h]

  v3 = (struct CD3DSurface **)*((_QWORD *)this + 24);
  v4 = 0;
  if ( v3 )
    goto LABEL_5;
  v7 = saturated_mul(*((unsigned int *)this + 46), 8uLL);
  v8 = (struct CD3DSurface **)DefaultHeap::Alloc(v7);
  v3 = v8;
  if ( v8 )
    memset_0(v8, 0, v7);
  else
    v3 = 0LL;
  *((_QWORD *)this + 24) = v3;
  if ( v3 )
  {
LABEL_5:
    v10 = *v3;
    if ( !*v3 )
    {
      v11 = *((_DWORD *)this + 43);
      v12 = (struct ID3D11Texture2D *)*((_QWORD *)this + 15);
      v13 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v17 = *((_DWORD *)this + 36);
      v18 = 0LL;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v13, v12, 0LL, v11, v3);
      v4 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ViewOfTexture, 0x11Eu, 0LL);
        return v4;
      }
      v18 = *((_QWORD *)this + 22);
      CD3DSurface::UpdatePixelFormatInfo(**((CD3DSurface ***)this + 24), (const struct PixelFormatInfo *)&v17);
      v10 = (struct CD3DSurface *)**((_QWORD **)this + 24);
    }
    *a3 = v10;
    (**(void (__fastcall ***)(struct CD3DSurface *))v10)(v10);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x110u, 0LL);
  }
  return v4;
}

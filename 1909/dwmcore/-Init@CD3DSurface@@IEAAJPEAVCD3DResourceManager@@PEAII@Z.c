/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180047AF0
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x1800475A4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180047C9C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18004889C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180048C3C (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180049510 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?CreateRenderTargetView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1800496A0 (-CreateRenderTargetView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  unsigned int v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  bool v15; // cc
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v16; // r8
  bool v17; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v18; // r8
  unsigned int v20; // [rsp+20h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+34h] [rbp-1Ch]
  int v23; // [rsp+3Ch] [rbp-14h]
  int v24; // [rsp+40h] [rbp-10h]
  int v25; // [rsp+44h] [rbp-Ch]
  struct IDXGIResource *v26; // [rsp+80h] [rbp+30h] BYREF
  char v27; // [rsp+98h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 16);
  v26 = 0LL;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 80LL))(v6, (char *)this + 140);
  if ( a4 >= *((_DWORD *)this + 38) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0xD6u, 0LL);
    goto LABEL_20;
  }
  v10 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = a4;
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel(v10) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(
                            (enum DXGI_FORMAT)*((_DWORD *)this + 39),
                            (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v13 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v20 = 233;
    goto LABEL_29;
  }
  v14 = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 48LL))(this);
  CD3DResource::Init(this, a2, v14);
  if ( !a3 )
  {
    PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v26);
    v13 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v20 = 247;
    }
    else
    {
      PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, char *))v26->lpVtbl->GetUsage)(v26, &v27);
      v13 = PixelFormatColorSpace;
      if ( PixelFormatColorSpace >= 0 )
      {
        a3 = &v27;
        goto LABEL_7;
      }
      v20 = 249;
    }
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, PixelFormatColorSpace, v20, 0LL);
    goto LABEL_20;
  }
LABEL_7:
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v15 = *((_DWORD *)this + 38) <= 1u;
    if ( *((_DWORD *)this + 38) > 1u )
    {
      v21 = *((_DWORD *)this + 39);
      v23 = *((_DWORD *)this + 34);
      v22 = 5LL;
      v24 = 1;
    }
    v16 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v21;
    if ( v15 )
      v16 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateRenderTargetView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v16,
                              (struct ID3D11RenderTargetView **)this + 24);
    v13 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v20 = 273;
      goto LABEL_29;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v17 = *((_DWORD *)this + 38) <= 1u;
    if ( *((_DWORD *)this + 38) > 1u )
    {
      v21 = *((_DWORD *)this + 39);
      v23 = *((_DWORD *)this + 37);
      v24 = *((_DWORD *)this + 34);
      v22 = 5LL;
      v25 = 1;
    }
    v18 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v21;
    if ( v17 )
      v18 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateShaderResourceView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v18,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v13 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v20 = 296;
      goto LABEL_29;
    }
  }
LABEL_20:
  if ( v26 )
    ((void (__fastcall *)(struct IDXGIResource *))v26->lpVtbl->Release)(v26);
  return v13;
}

/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180093F18
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x18009438C (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180094428 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18009445C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180094484 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?CreateRenderTargetView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1800944E8 (-CreateRenderTargetView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180098AF4 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::Init(CD3DSurface *this, struct CD3DResourceManager *a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx
  unsigned int v9; // ecx
  enum DXGI_FORMAT v10; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v16; // r8
  unsigned int v17; // ecx
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
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0xD9u);
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
    v20 = 236;
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
      v20 = 250;
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
      v20 = 252;
    }
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, PixelFormatColorSpace, v20);
    goto LABEL_20;
  }
LABEL_7:
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (*(_DWORD *)a3 & 0x100) == 0 )
  {
    v15 = *((_DWORD *)this + 38);
    if ( v15 > 1 )
    {
      v21 = *((_DWORD *)this + 39);
      v23 = *((_DWORD *)this + 34);
      v22 = 5LL;
      v24 = 1;
    }
    v16 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v21;
    if ( v15 <= 1 )
      v16 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateRenderTargetView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v16,
                              (struct ID3D11RenderTargetView **)this + 24);
    v13 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v20 = 276;
      goto LABEL_29;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v17 = *((_DWORD *)this + 38);
    if ( v17 > 1 )
    {
      v21 = *((_DWORD *)this + 39);
      v23 = *((_DWORD *)this + 37);
      v24 = *((_DWORD *)this + 34);
      v22 = 5LL;
      v25 = 1;
    }
    v18 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v21;
    if ( v17 <= 1 )
      v18 = 0LL;
    PixelFormatColorSpace = CD3DDeviceLevel1::CreateShaderResourceView(
                              *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v18,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v13 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v20 = 299;
      goto LABEL_29;
    }
  }
LABEL_20:
  if ( v26 )
    ((void (__fastcall *)(struct IDXGIResource *))v26->lpVtbl->Release)(v26);
  return v13;
}

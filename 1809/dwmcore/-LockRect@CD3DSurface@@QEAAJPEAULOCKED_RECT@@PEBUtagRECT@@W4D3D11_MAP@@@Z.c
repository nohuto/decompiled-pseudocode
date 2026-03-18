/*
 * XREFs of ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180091000
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800909E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800910BC (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DSurface::LockRect(
        CD3DSurface *this,
        struct LOCKED_RECT *a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned __int8 PixelFormatSize; // al
  char *pData; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v16; // [rsp+30h] [rbp-18h] BYREF
  enum D3D11_MAP v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v7 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
         *((struct ID3D11Resource **)this + 16),
         *((_DWORD *)this + 34),
         D3D11_MAP_READ,
         v15,
         &v16);
  v17 = v7;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x32u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 39));
    pData = (char *)v16.pData;
    v12 = a3->left * (PixelFormatSize >> 3);
    v13 = v16.RowPitch * a3->top;
    *(_DWORD *)a2 = v16.RowPitch;
    *((_QWORD *)a2 + 1) = &pData[v12 + v13];
  }
  TranslateDXGIorD3DErrorInContext(v9, 0, &v17);
  return (unsigned int)v17;
}

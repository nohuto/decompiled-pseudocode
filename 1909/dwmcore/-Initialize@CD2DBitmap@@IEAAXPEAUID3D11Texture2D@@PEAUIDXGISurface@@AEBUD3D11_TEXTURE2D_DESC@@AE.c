/*
 * XREFs of ?Initialize@CD2DBitmap@@IEAAXPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004F0E8
 * Callers:
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18004ECB8 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x18004F00C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        unsigned int a8)
{
  __int128 v11; // xmm1
  __int64 result; // rax

  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 136) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a4 + 40);
  *(_OWORD *)(a1 + 216) = *a5;
  v11 = a5[1];
  *(_DWORD *)(a1 + 248) = a6;
  *(_DWORD *)(a1 + 252) = a7;
  result = a8;
  *(_DWORD *)(a1 + 256) = a8;
  *(_OWORD *)(a1 + 232) = v11;
  return result;
}

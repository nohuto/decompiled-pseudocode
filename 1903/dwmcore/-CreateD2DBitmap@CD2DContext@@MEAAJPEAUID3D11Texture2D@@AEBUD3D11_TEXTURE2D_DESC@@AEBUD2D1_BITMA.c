/*
 * XREFs of ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18015C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x1800B3B2C (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmap(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  return CD2DContext::CreateD2DBitmapInternal(a1, a2, a3, a4, a5, a6, 0, a7);
}

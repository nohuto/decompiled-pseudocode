/*
 * XREFs of ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x1800B39AC
 * Callers:
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800B38C8 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 * Callees:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3DC4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::CSecondaryD2DBitmap(
        CSecondaryD2DBitmap *this,
        struct CD2DResourceManager *a2)
{
  CD2DBitmap::CD2DBitmap(this, a2, 0);
  *((_QWORD *)this + 34) = (char *)this + 280;
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)this = &CSecondaryD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 33) = &CSecondaryD2DBitmap::`vftable';
  return this;
}

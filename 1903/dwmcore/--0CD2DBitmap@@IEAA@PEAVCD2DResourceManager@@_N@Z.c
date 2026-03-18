/*
 * XREFs of ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3DC4
 * Callers:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x1800B39AC (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800B3C1C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x1800B3E54 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::CD2DBitmap(CD2DBitmap *this, struct CD2DResourceManager *a2, bool a3)
{
  __int64 v3; // r10
  CD2DBitmap *result; // rax

  CD2DResource::CD2DResource(this, a2, a3);
  *(_QWORD *)(v3 + 16) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v3 = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v3 + 104) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v3 + 112) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v3 + 120) = &CD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(v3 + 128) = 0LL;
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_QWORD *)(v3 + 144) = 0LL;
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_QWORD *)(v3 + 160) = 0LL;
  *(_DWORD *)(v3 + 252) = (_DWORD)DisplayId::None;
  result = (CD2DBitmap *)v3;
  *(_DWORD *)(v3 + 256) = 0;
  *(_BYTE *)(v3 + 260) = 0;
  return result;
}

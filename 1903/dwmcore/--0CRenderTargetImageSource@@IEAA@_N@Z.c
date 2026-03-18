/*
 * XREFs of ??0CRenderTargetImageSource@@IEAA@_N@Z @ 0x180047CC0
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180047DB8 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::CRenderTargetImageSource(
        CRenderTargetImageSource *this,
        bool a2)
{
  _QWORD *v2; // rcx
  CRenderTargetImageSource *v3; // r9

  CRenderTargetBitmap::CRenderTargetBitmap((CRenderTargetImageSource *)((char *)this + 8), a2);
  *v2 = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)v3 = &CRenderTargetImageSource::`vftable';
  *((_QWORD *)v3 + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)v3 + 4) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)v3 + 12) = &CRenderTargetImageSource::`vftable'{for `CDeviceResource'};
  *((_QWORD *)v3 + 19) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  return v3;
}

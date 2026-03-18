/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE798
 * Callers:
 *     ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1800DE3D4 (--0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE5D4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180198E80 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x1801A2A74 (--0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801A3C34 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x180243D44 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18024E8F8 (--0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x180027FCC (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  int DefaultSRGBFormat; // eax
  CRenderTarget *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  *((_QWORD *)this + 8) = &IRenderTargetResource::`vftable';
  *((_QWORD *)this + 9) = &IVisualTreeClient::`vftable';
  DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 24) = DefaultSRGBFormat;
  result = this;
  *((_DWORD *)this + 25) = 3;
  *((_DWORD *)this + 39) = 1065353216;
  *((_BYTE *)this + 161) = 1;
  return result;
}

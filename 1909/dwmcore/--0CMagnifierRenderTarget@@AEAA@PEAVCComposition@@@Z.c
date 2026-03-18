/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801A85A4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180198E80 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 28;
  v4 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 151) = 0;
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 76) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 77) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 78) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 79) = 0x3FF0000000000000LL;
  return this;
}

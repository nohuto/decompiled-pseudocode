/*
 * XREFs of ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801732F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18001D2E4 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::CIndirectSwapchainRenderTarget(
        CIndirectSwapchainRenderTarget *this,
        struct CComposition *a2)
{
  CIndirectSwapchainRenderTarget *result; // rax
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 37;
  v4 = "DWM Rendertarget (indirect swapchain)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_QWORD *)this = &CIndirectSwapchainRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = (char *)this + 464;
  *((_QWORD *)this + 55) = (char *)this + 464;
  *((_DWORD *)this + 112) = 2;
  *(_QWORD *)((char *)this + 452) = 2LL;
  result = this;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  return result;
}

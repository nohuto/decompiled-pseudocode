/*
 * XREFs of ??0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18024E8F8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE798 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLocalAppRenderTarget *__fastcall CLocalAppRenderTarget::CLocalAppRenderTarget(
        CLocalAppRenderTarget *this,
        struct CComposition *a2)
{
  CLocalAppRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CLocalAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CLocalAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CLocalAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 39) = 0;
  result = this;
  *((_DWORD *)this + 25) = 1;
  *((_BYTE *)this + 160) = 1;
  return result;
}

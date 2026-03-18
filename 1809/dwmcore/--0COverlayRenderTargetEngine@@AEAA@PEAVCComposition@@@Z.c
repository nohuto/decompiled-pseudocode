/*
 * XREFs of ??0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x18015E180
 * Callers:
 *     ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015EC64 (-ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CRE.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007D6C4 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

COverlayRenderTargetEngine *__fastcall COverlayRenderTargetEngine::COverlayRenderTargetEngine(
        COverlayRenderTargetEngine *this,
        struct CComposition *a2)
{
  COverlayRenderTargetEngine *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &COverlayRenderTargetEngine::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COverlayRenderTargetEngine::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COverlayRenderTargetEngine::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = "DWM RenderTarget (overlay)";
  result = this;
  *((_DWORD *)this + 60) = 26;
  return result;
}

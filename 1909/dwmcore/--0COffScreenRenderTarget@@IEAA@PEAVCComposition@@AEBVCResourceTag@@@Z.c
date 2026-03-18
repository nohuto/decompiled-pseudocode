/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180198E80
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019B524 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18019BAA4 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x1801A85A4 (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1801FBE20 (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DE798 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  COffScreenRenderTarget *result; // rax
  __int128 v6; // xmm0

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 34) = (char *)this + 304;
  *((_QWORD *)this + 35) = (char *)this + 304;
  *((_DWORD *)this + 72) = 6;
  *(_QWORD *)((char *)this + 292) = 6LL;
  result = this;
  v6 = *(_OWORD *)a3;
  *((_QWORD *)this + 45) = 0LL;
  *(_OWORD *)((char *)this + 376) = v6;
  *((_DWORD *)this + 92) = 0;
  *((_OWORD *)this + 9) = _xmm;
  *((_WORD *)this + 132) = 1;
  return result;
}

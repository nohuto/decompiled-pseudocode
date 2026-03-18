/*
 * XREFs of ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x1801A9F48
 * Callers:
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801A1EB0 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1801A2020 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800CD248 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::VisualCaptureBitsResponse(
        VisualCaptureBitsResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        struct IRenderTargetResource *a4,
        struct CVisualTree *a5,
        const struct WICRect *a6,
        enum DXGI_FORMAT a7,
        void *a8,
        void *a9)
{
  CaptureBitsResponse::CaptureBitsResponse(this, a2, a3, a4, a5, 1.0, a6, a7, 0LL);
  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  *((_QWORD *)this + 18) = a8;
  *((_QWORD *)this + 14) = a9;
  return this;
}

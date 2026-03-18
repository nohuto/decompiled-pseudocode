/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800125F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x180034860 (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180035450 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     _lambda_580f0a00adc947519c271a5e102e8e8a_::operator() @ 0x18016586C (_lambda_580f0a00adc947519c271a5e102e8e8a_--operator().c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x1801AC36C (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B3F64 (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B5C5C (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B600C (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x1801B6848 (-WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801BC090 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?ProcessEnableRemoteSuperWet@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_ENABLEREMOTESUPERWET@@@Z @ 0x1801C2734 (-ProcessEnableRemoteSuperWet@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_ENABLEREMOTE.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     GetStagingTexture @ 0x18021AD08 (GetStagingTexture.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180154CC0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}

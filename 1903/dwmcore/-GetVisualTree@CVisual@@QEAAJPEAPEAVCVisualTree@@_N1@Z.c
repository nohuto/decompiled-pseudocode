/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98
 * Callers:
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4714 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B53A4 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E6340 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801A3770 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x1801A5410 (-SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AB254 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x18020DD70 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180247A28 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800B5084 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x1800B5820 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z.c)
 *     ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x1800EACEC (-SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::GetVisualTree(struct CComposition **this, struct CVisualTree **a2, __int64 a3, bool a4)
{
  unsigned int v7; // ebx
  volatile signed __int32 *VisualTreeNoRef; // rax
  struct CComposition *v9; // rbx
  CVisualTree *v10; // rax
  __int64 v11; // r8
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  struct CVisualTree *v14; // rdi
  __int64 v15; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v7 = 0;
  VisualTreeNoRef = (volatile signed __int32 *)CVisual::GetVisualTreeNoRef((CVisual *)this);
  if ( VisualTreeNoRef )
  {
    _InterlockedIncrement(VisualTreeNoRef + 2);
    *a2 = (struct CVisualTree *)VisualTreeNoRef;
  }
  else
  {
    v9 = this[2];
    v10 = (CVisualTree *)DefaultHeap::AllocClear(0x530uLL);
    if ( !v10 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v11);
    v12 = (volatile signed __int32 *)CVisualTree::CVisualTree(v10, v9, (struct CVisual *)this, a4);
    v14 = (struct CVisualTree *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v7 = 0;
      CVisual::SetVisualTree((CVisual *)this, (struct CVisualTree *)v12);
      *a2 = v14;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x1Cu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802C1870, 1u, 0x8007000E, 0x1041u, 0LL);
    }
  }
  return v7;
}

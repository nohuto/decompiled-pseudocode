/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x180024408
 * Callers:
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180023BD8 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180025764 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E71F0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801A1EB0 (-Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x1801A3B50 (-SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_.c)
 *     ?ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LEGACYVISUALCAPTURERENDERTARGET_CAPTUREBITS@@@Z @ 0x1801A9994 (-ProcessCaptureBits@CLegacyVisualCaptureRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_LE.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x18020C680 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x180246318 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1800244F4 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x180025830 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x1800ECEDC (-SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::GetVisualTree(struct CComposition **this, struct CVisualTree **a2, __int64 a3, bool a4)
{
  unsigned int v7; // ebx
  volatile signed __int32 *VisualTreeNoRef; // rax
  struct CComposition *v9; // rbx
  CVisualTree *v10; // rax
  __int64 v11; // r8
  volatile signed __int32 *v12; // rax
  unsigned int v13; // ecx
  struct CVisualTree *v14; // rdi
  unsigned int v15; // ecx
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
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Cu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_1802BF9B0, 1u, -2147024882, 0x1041u, 0LL);
    }
  }
  return v7;
}

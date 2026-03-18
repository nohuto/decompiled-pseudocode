/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748
 * Callers:
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800714EC (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARG.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x18007AAD0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18008F850 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008FA28 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18014B1A8 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18015F1DC (-SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SET.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1801D9D90 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x18020E7BC (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x18008BB54 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18008F7F4 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18008FA6C (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CVisual::GetVisualTree(struct CComposition **this, struct CVisualTree **a2, __int64 a3, char a4)
{
  unsigned int v7; // ebx
  volatile signed __int32 *VisualTreeNoRef; // rax
  struct CComposition *v10; // rbx
  CVisualTree *v11; // rax
  volatile signed __int32 *v12; // rax
  unsigned int v13; // ecx
  struct CVisualTree *v14; // rsi
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
    v10 = this[2];
    v11 = (CVisualTree *)WPF::ProcessHeapImpl::AllocClear(0x510uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v12 = (volatile signed __int32 *)CVisualTree::CVisualTree(v11, v10, (struct CVisual *)this, a4);
    v14 = (struct CVisualTree *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v7 = 0;
      CVisual::SetVisualTreeNoRef((CVisual *)this, (struct CVisualTree *)v12);
      *a2 = v14;
      if ( a4 )
        CVisual::PropagateFlags(this, 1LL);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x1Eu);
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_18029B794, 1u, -2147024882, 0xFD1u);
    }
  }
  return v7;
}

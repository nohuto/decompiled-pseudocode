/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x1801FC470
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E71F0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this, __int64 a2, __int64 a3)
{
  struct CComposition **v4; // rdx

  if ( !*((_BYTE *)this + 440) )
  {
    v4 = (struct CComposition **)*((_QWORD *)this + 50);
    if ( v4 )
    {
      if ( (int)CRenderTarget::SetRoot(this, v4, a3) >= 0
        && (int)CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), this) >= 0 )
      {
        *((_BYTE *)this + 440) = 1;
        *((_BYTE *)this + 266) = 1;
      }
    }
  }
}

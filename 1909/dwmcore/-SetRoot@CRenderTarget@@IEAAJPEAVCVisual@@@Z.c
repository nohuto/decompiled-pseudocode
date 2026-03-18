/*
 * XREFs of ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E71F0
 * Callers:
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x1800E71A0 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180193F80 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x1801FC470 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18024E66C (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetReferenceProperty@CLocalAppRenderTarget@@UEAAJIPEAVCResource@@@Z @ 0x18024F570 (-SetReferenceProperty@CLocalAppRenderTarget@@UEAAJIPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x180024408 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTarget::SetRoot(CRenderTarget *this, struct CComposition **a2, __int64 a3)
{
  CDirtyRegion *v3; // rbx
  signed int VisualTree; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  signed int v8; // eax
  __int64 v9; // rcx
  struct CVisualTree *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v11, a3, 0);
    v7 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0xB4u, 0LL);
      v3 = v11;
      goto LABEL_6;
    }
    v3 = v11;
  }
  v8 = (*(__int64 (__fastcall **)(CRenderTarget *, CDirtyRegion *))(*(_QWORD *)this + 336LL))(this, v3);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB7u, 0LL);
LABEL_6:
  if ( v3 )
    CDirtyRegion::Release(v3);
  return v7;
}

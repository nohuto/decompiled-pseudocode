/*
 * XREFs of ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x18007AAD0
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x18001FB50 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETROOT@@@Z @ 0x18007AA80 (-ProcessSetRoot@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETROOT@@@Z.c)
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x180158F58 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTarget::SetRoot(CRenderTarget *this, struct CVisual *a2, bool a3)
{
  CMILRefCountBase *v3; // rbx
  int VisualTree; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  struct CVisualTree *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    VisualTree = CVisual::GetVisualTree(a2, &v11, a3, 0);
    v7 = VisualTree;
    if ( VisualTree < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0xB5u);
      v3 = v11;
      goto LABEL_6;
    }
    v3 = v11;
  }
  v8 = (*(__int64 (__fastcall **)(CRenderTarget *, CMILRefCountBase *))(*(_QWORD *)this + 200LL))(this, v3);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB8u);
LABEL_6:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v7;
}

/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180062E8C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x180062EF8 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v4; // ebx
  CRenderTargetManager *v5; // rax
  struct CRenderTargetManager *v6; // rax
  unsigned int v7; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CRenderTargetManager *)WPF::ProcessHeapImpl::AllocClear(0x78uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CRenderTargetManager::CRenderTargetManager(v5, a1);
  if ( v6 )
  {
    *a2 = v6;
    (**(void (__fastcall ***)(struct CRenderTargetManager *))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x4Au);
  }
  return v4;
}

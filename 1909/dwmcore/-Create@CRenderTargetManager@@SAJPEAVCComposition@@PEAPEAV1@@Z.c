/*
 * XREFs of ?Create@CRenderTargetManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E2A2C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E2A98 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderTargetManager::Create(struct CComposition *a1, struct CRenderTargetManager **a2)
{
  unsigned int v3; // ebx
  CRenderTargetManager *v5; // rax
  __int64 v6; // r8
  struct CRenderTargetManager *v7; // rax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v5 = (CRenderTargetManager *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v6);
  v7 = CRenderTargetManager::CRenderTargetManager(v5, a1);
  if ( v7 )
  {
    *a2 = v7;
    (**(void (__fastcall ***)(struct CRenderTargetManager *))v7)(v7);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x48u, 0LL);
  }
  return v3;
}

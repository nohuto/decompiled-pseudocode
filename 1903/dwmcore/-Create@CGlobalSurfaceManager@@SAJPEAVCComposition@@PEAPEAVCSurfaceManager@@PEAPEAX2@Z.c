/*
 * XREFs of ?Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z @ 0x1800DF8BC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800DF954 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ??0CGlobalSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800DFE8C (--0CGlobalSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Create(
        struct CComposition *a1,
        struct CSurfaceManager **a2,
        void **a3,
        void **a4)
{
  CGlobalSurfaceManager *v8; // rax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rax
  __int64 v11; // rcx
  CDirtyRegion *v12; // rdi
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v8 = (CGlobalSurfaceManager *)DefaultHeap::AllocClear(0x258uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v9);
  v10 = (volatile signed __int32 *)CGlobalSurfaceManager::CGlobalSurfaceManager(v8, a1);
  v12 = (CDirtyRegion *)v10;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v13 = CGlobalSurfaceManager::Initialize((CGlobalSurfaceManager *)v10, a3, a4);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x41u, 0LL);
      CDirtyRegion::Release(v12);
    }
    else
    {
      *a2 = v12;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x3Eu, 0LL);
  }
  return v15;
}

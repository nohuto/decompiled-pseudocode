/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180062380
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800625D0 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x180089158 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CManipulationManager *v4; // rax
  CManipulationManager *v5; // rax
  unsigned int v6; // ecx
  CManipulationManager *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CManipulationManager *)WPF::ProcessHeapImpl::AllocClear(0x190uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CManipulationManager::CManipulationManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = CManipulationManager::Initialize(v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x25u);
      (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x22u);
  }
  return v10;
}

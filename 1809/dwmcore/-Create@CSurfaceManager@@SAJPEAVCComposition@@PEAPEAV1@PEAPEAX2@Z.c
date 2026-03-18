/*
 * XREFs of ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180088A8C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x180088B2C (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180088D64 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CSurfaceManager::Create(struct CComposition *a1, struct CSurfaceManager **a2, void **a3, void **a4)
{
  CSurfaceManager *v8; // rax
  CSurfaceManager *v9; // rax
  unsigned int v10; // ecx
  CSurfaceManager *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v8 = (CSurfaceManager *)WPF::ProcessHeapImpl::AllocClear(0x228uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = CSurfaceManager::CSurfaceManager(v8, a1);
  v11 = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CSurfaceManager *))v9)(v9);
    v12 = CSurfaceManager::Initialize(v11, a3, a4);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21u);
      (*(void (__fastcall **)(CSurfaceManager *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a2 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v14;
}

/*
 * XREFs of ?Create@CWindowManager@@SAJPEAPEAV1@@Z @ 0x180062F58
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CWindowManager@@QEAA@XZ @ 0x180062FA4 (--0CWindowManager@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowManager::Create(struct CWindowManager **a1)
{
  unsigned int v2; // ebx
  CWindowManager *v3; // rax
  volatile signed __int32 *v4; // rax
  unsigned int v5; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CWindowManager *)WPF::ProcessHeapImpl::AllocClear(0x78uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = (volatile signed __int32 *)CWindowManager::CWindowManager(v3);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    *a1 = (struct CWindowManager *)v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x36u);
  }
  return v2;
}

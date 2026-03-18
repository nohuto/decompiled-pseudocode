/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18006224C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1800622E0 (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  CHolographicManager *v5; // rax
  unsigned int v6; // ecx
  struct CHolographicManager *v7; // rdi
  HANDLE Event; // rax
  unsigned int v9; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)WPF::ProcessHeapImpl::AllocClear(0xE0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CHolographicManager::CHolographicManager(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v7 + 26) = Event;
    v9 = Event == 0LL ? 0x80004005 : 0;
    if ( Event )
    {
      *a2 = v7;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v9, 0x1Du);
      CMILRefCountBase::Release(v7);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x19u);
  }
  return v9;
}

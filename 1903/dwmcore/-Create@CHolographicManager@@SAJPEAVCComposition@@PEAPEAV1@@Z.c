/*
 * XREFs of ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0CE0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E0D78 (--0CHolographicManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CHolographicManager::Create(struct CComposition *a1, struct CHolographicManager **a2)
{
  CHolographicManager *v4; // rax
  __int64 v5; // r8
  CHolographicManager *v6; // rax
  __int64 v7; // rcx
  CHolographicManager *v8; // rdi
  signed int v9; // ebx
  HANDLE Event; // rax
  __int64 v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CHolographicManager *)DefaultHeap::AllocClear(0xF8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v5);
  v6 = CHolographicManager::CHolographicManager(v4, a1);
  v8 = v6;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 4);
    v9 = -2147467259;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v8 + 29) = Event;
    if ( Event )
      v9 = 0;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x1Bu, 0LL);
      CDirtyRegion::Release((CHolographicManager *)((char *)v8 + 8));
    }
    else
    {
      *a2 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x17u, 0LL);
  }
  return (unsigned int)v9;
}

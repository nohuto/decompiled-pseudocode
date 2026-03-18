/*
 * XREFs of ?Create@CSceneResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0E34
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E0E84 (--0CSceneResourceManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CSceneResourceManager::Create(struct CComposition *a1, struct CSceneResourceManager **a2)
{
  CSceneResourceManager *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = (CSceneResourceManager *)DefaultHeap::AllocClear(0x50uLL);
  if ( v4 )
    v4 = CSceneResourceManager::CSceneResourceManager(v4, a1);
  if ( v4 )
  {
    *a2 = v4;
    return 0;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x14u, 0LL);
  }
  return v6;
}

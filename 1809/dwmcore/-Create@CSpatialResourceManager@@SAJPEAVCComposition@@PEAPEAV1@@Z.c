/*
 * XREFs of ?Create@CSpatialResourceManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180061500
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800612A4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0CSpatialResourceManager@@AEAA@PEAVCComposition@@@Z @ 0x180061564 (--0CSpatialResourceManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSpatialResourceManager::Create(struct CComposition *a1, struct CSpatialResourceManager **a2)
{
  CSpatialResourceManager *v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  struct CSpatialResourceManager *v7; // rax

  v4 = (CSpatialResourceManager *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  v6 = 0;
  if ( v4 )
    v7 = CSpatialResourceManager::CSpatialResourceManager(v4, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    *a2 = v7;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u);
  }
  return v6;
}

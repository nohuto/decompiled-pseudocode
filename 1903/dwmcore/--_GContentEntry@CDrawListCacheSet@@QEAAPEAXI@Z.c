/*
 * XREFs of ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1801AED00
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18004E7EC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801AEA70 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(
        CDrawListCacheSet::ContentEntry *this)
{
  CDirtyRegion *v2; // rcx

  v2 = (CDirtyRegion *)*((_QWORD *)this + 1);
  if ( v2 )
    CDirtyRegion::Release(v2);
  return this;
}

/*
 * XREFs of ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x18002716C
 * Callers:
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x180027134 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800273AC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

CDrawListCacheSet::ContentEntry *__fastcall CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(
        CDrawListCacheSet::ContentEntry *this)
{
  CMILRefCountBase *v2; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 1);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  return this;
}

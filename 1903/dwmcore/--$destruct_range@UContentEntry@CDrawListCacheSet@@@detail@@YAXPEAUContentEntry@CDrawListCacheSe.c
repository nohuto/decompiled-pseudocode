/*
 * XREFs of ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801AEA70
 * Callers:
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18004E7EC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 * Callees:
 *     ??_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z @ 0x1801AED00 (--_GContentEntry@CDrawListCacheSet@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<CDrawListCacheSet::ContentEntry>(
        CDrawListCacheSet::ContentEntry *this,
        CDrawListCacheSet::ContentEntry *a2)
{
  CDrawListCacheSet::ContentEntry *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CDrawListCacheSet::ContentEntry::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CDrawListCacheSet::ContentEntry *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
  return result;
}

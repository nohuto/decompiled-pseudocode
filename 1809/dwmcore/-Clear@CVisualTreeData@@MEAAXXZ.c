/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801B6500
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180021C60 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(struct CDrawListCacheSet::RenderTargetEntry *const *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 32) = 0LL;
}

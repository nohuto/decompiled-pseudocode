/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801C2990
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C4A70 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 32) = 0LL;
}

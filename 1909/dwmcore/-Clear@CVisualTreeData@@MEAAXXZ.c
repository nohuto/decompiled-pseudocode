/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801C11F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C4550 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 32) = 0LL;
}

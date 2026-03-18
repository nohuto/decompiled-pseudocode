/*
 * XREFs of ?UnLink@CDesktopTreeData@@MEAAXXZ @ 0x1800E7100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::UnLink(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) &= ~1u;
}

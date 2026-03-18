/*
 * XREFs of ?Link@CDesktopTreeData@@MEAAXXZ @ 0x1800DA960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopTreeData::Link(CDesktopTreeData *this)
{
  *((_BYTE *)this + 16) |= 1u;
}

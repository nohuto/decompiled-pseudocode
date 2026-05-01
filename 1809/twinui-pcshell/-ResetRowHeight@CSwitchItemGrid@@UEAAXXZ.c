/*
 * XREFs of ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x1803093E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1803093A8 (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::ResetRowHeight(CSwitchItemGrid *this)
{
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 560));
  CMultitaskingViewElementBase::_LayoutChildren((_QWORD *)this - 26, 0, 0LL);
}

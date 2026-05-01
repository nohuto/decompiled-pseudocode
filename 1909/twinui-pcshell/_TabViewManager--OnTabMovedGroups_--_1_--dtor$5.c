/*
 * XREFs of _TabViewManager::OnTabMovedGroups_::_1_::dtor$5 @ 0x1802539AF
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnTabMovedGroups_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 80));
  }
}

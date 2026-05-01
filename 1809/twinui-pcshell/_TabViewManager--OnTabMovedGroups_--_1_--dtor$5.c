/*
 * XREFs of _TabViewManager::OnTabMovedGroups_::_1_::dtor$5 @ 0x1801E0E06
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnTabMovedGroups_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 56));
  }
}

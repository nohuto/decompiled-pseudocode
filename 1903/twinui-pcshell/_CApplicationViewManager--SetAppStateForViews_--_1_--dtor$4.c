/*
 * XREFs of _CApplicationViewManager::SetAppStateForViews_::_1_::dtor$4 @ 0x180156FF9
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationViewManager::SetAppStateForViews_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 184) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 56));
  }
}

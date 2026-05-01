/*
 * XREFs of _TabViewManager::GetActivationValueSet_::_1_::dtor$10 @ 0x1801DBD17
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::GetActivationValueSet_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 80));
  }
}

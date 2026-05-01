/*
 * XREFs of _TabViewManager::OnViewCanTabChanged_::_1_::dtor$11 @ 0x1801E2859
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnViewCanTabChanged_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 48));
  }
}

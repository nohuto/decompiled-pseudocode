/*
 * XREFs of _TabViewManager::PerformDelayedInitialization_::_1_::dtor$5 @ 0x180235EC6
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::PerformDelayedInitialization_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 240) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 240) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 256));
  }
}

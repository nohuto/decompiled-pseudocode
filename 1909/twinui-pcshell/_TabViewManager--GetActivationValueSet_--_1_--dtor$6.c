/*
 * XREFs of _TabViewManager::GetActivationValueSet_::_1_::dtor$6 @ 0x18024EA23
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::GetActivationValueSet_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 40));
  }
}

/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$27 @ 0x1800E7658
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_27(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~0x20u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 104));
  }
}

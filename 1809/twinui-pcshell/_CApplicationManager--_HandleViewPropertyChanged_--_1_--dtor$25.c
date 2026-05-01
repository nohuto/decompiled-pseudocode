/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$25 @ 0x1800ACB42
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 104));
  }
}

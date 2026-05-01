/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$18 @ 0x1800E7491
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 64));
  }
}

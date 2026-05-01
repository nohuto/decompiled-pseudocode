/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$16 @ 0x1800ACC92
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 48));
  }
}

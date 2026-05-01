/*
 * XREFs of _CApplicationManager::_HandleViewEvent_::_1_::dtor$23 @ 0x1800ACB92
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewEvent_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 72));
  }
}

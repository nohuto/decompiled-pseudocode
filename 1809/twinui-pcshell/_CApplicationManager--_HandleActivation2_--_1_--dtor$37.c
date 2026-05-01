/*
 * XREFs of _CApplicationManager::_HandleActivation2_::_1_::dtor$37 @ 0x1800ACF50
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleActivation2_::_1_::dtor_37(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 248) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 248) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 184));
  }
}

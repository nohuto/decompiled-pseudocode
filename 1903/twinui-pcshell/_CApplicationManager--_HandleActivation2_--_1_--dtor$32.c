/*
 * XREFs of _CApplicationManager::_HandleActivation2_::_1_::dtor$32 @ 0x1800C36B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleActivation2_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 252) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 252) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 216));
  }
}

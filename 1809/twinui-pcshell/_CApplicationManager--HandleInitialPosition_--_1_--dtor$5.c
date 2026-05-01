/*
 * XREFs of _CApplicationManager::HandleInitialPosition_::_1_::dtor$5 @ 0x1800ACA02
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::HandleInitialPosition_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 136) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 136) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 32));
  }
}

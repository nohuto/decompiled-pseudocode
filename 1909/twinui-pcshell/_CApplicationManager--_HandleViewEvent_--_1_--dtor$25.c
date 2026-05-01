/*
 * XREFs of _CApplicationManager::_HandleViewEvent_::_1_::dtor$25 @ 0x1800E7409
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewEvent_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 72));
  }
}

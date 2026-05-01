/*
 * XREFs of _CApplicationManager::_HandleCloseRequested_::_1_::dtor$5 @ 0x18011D29E
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleCloseRequested_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
  }
}

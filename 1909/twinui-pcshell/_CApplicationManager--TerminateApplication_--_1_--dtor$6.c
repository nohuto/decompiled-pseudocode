/*
 * XREFs of _CApplicationManager::TerminateApplication_::_1_::dtor$6 @ 0x180139D48
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::TerminateApplication_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 64));
  }
}

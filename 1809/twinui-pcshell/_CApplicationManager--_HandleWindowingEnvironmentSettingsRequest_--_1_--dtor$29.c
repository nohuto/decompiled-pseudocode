/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$29 @ 0x1800F90F4
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_29(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 32));
  }
}

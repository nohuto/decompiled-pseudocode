/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$28 @ 0x18011EB7D
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 408) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 408) &= ~0x20u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 32));
  }
}

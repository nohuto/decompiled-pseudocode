/*
 * XREFs of _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$7 @ 0x180115EBC
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::RefreshMonitorMappings_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 152));
  }
}

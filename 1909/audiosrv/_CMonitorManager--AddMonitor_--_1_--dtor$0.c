/*
 * XREFs of _CMonitorManager::AddMonitor_::_1_::dtor$0 @ 0x180107AEA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::AddMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef(*(Microsoft::WRL::WeakRef **)(a2 + 72));
}

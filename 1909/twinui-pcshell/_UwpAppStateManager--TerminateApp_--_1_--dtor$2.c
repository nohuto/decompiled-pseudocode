/*
 * XREFs of _UwpAppStateManager::TerminateApp_::_1_::dtor$2 @ 0x1800B7775
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UwpAppStateManager::TerminateApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 40);
}

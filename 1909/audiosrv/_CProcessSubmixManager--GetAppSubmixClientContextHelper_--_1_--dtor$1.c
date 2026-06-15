/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x1800FD50D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>((CAppSubmixClientContext **)(a2 + 64));
}

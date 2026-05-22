/*
 * XREFs of ?AddRef@WGIController@@WBI@EAAKXZ @ 0x180070090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall WGIController::AddRef(__int64 a1)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::AddRef((Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 24));
}

/*
 * XREFs of ?AddRef@WGIController@@WCA@EAAKXZ @ 0x180070160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall WGIController::AddRef(__int64 a1)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::AddRef((Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 32));
}

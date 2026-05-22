/*
 * XREFs of ?AddRef@WGIController@@WCI@EAAKXZ @ 0x18006FED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall WGIController::AddRef(__int64 a1)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::AddRef((Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 40));
}

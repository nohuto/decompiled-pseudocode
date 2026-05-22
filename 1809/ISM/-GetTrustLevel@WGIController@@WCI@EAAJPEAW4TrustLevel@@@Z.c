/*
 * XREFs of ?GetTrustLevel@WGIController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18006FF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 40),
           a2);
}

/*
 * XREFs of ?GetTrustLevel@WGIController@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180070060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 16),
           a2);
}

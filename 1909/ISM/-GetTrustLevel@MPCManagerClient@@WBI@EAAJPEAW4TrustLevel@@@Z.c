/*
 * XREFs of ?GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800385B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
           (Windows::Internal::Input::MPCManager::ServerConnectionArgs *)(a1 - 24),
           a2);
}

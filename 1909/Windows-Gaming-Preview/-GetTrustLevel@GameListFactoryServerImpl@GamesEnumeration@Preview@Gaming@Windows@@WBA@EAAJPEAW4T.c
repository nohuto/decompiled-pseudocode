/*
 * XREFs of ?GetTrustLevel@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800241E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)(a1 - 16),
           a2);
}

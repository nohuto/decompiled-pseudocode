/*
 * XREFs of ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180011520
 * Callers:
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18000F8E0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAKXZ @ 0x18000F910 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ @ 0x18000FA50 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ @ 0x18000FBD0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAKXZ @ 0x18000FBF0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18000FCC0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x18000FCD0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef(this);
}

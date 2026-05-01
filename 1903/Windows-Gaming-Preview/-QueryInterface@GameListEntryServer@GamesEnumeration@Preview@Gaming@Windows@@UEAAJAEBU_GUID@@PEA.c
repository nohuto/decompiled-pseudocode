/*
 * XREFs of ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800101E0
 * Callers:
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F7E0 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F920 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F980 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FA50 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FA70 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FB50 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FB70 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

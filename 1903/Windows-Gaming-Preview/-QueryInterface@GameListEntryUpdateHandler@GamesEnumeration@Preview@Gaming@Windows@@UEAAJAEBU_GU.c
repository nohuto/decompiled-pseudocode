/*
 * XREFs of ?QueryInterface@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024E30
 * Callers:
 *     ?QueryInterface@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024510 (-QueryInterface@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_G.c)
 *     ?QueryInterface@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800246B0 (-QueryInterface@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::QueryInterface(
           this,
           a2,
           a3);
}

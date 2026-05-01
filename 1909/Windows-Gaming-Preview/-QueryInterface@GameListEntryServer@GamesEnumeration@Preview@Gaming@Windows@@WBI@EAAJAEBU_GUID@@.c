/*
 * XREFs of ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::QueryInterface(
           (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
           a2,
           a3);
}

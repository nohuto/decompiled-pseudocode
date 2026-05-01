/*
 * XREFs of ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile *a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
           this,
           a2,
           0LL,
           a3);
}

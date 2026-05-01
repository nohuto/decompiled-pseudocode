/*
 * XREFs of ?Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180037270
 * Callers:
 *     ?Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180036160 (-Release@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?Release@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180036450 (-Release@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::Release(
        Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(this);
}

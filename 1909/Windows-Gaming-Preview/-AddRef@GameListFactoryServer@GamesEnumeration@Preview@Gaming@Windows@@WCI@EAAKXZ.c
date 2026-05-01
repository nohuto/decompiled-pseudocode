/*
 * XREFs of ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x1800240C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::AddRef(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::AddRef(a1 - 40);
}

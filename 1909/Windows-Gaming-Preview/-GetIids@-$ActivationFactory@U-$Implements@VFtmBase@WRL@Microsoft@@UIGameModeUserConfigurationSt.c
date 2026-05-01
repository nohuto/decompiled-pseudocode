/*
 * XREFs of ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18003ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetIids(
           (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *)(a1 - 40),
           a2,
           a3);
}

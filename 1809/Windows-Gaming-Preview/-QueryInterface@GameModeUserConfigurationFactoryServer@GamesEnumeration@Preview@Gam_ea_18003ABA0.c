/*
 * XREFs of ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003ABA0
 * Callers:
 *     ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AA70 (-QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AA80 (-QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gam_ea_18003AA80.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}

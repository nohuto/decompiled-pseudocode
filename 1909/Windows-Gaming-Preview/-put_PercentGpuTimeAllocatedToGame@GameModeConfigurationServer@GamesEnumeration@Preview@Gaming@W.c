/*
 * XREFs of ?put_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_PercentGpuTimeAllocatedToGame(
        __int64 a1,
        __int64 a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
           a1,
           a2,
           100LL,
           (__int64 *)(a1 + 112));
}

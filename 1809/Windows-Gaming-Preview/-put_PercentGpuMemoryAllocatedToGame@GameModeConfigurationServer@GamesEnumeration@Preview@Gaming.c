/*
 * XREFs of ?put_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_PercentGpuMemoryAllocatedToGame(
        __int64 a1,
        __int64 a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
           a1,
           a2,
           100LL,
           (__int64 *)(a1 + 120));
}

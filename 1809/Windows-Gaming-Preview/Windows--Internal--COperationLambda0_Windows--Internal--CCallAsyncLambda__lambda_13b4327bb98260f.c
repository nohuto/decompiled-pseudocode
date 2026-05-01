/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_13b4327bb98260f7a87a6660565127f3____Windows::Internal::CNoResult_::Run @ 0x180039BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038CA8 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_13b4327bb98260f7a87a6660565127f3____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(*(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(a1 + 8));
  return (unsigned int)a3;
}

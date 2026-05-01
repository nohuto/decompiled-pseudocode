/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x180039D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038E34 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(*(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(a1 + 8));
  return (unsigned int)a3;
}

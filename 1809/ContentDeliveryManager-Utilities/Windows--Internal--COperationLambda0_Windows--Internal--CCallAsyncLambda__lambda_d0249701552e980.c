/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d0249701552e980dd27d25ea59751cd6____Windows::Internal::CNoResult_::Run @ 0x180037070
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x18009DB58 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d0249701552e980dd27d25ea59751cd6____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
                           *(CreativeFramework::TargetedContentLayoutHelpers **)(a1 + 16),
                           a2);
  return (unsigned int)a3;
}

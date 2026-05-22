/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x18002B9C4
 * Callers:
 *     dllmain_crt_process_detach @ 0x18002B4F8 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_MustDoNoWake@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetAllConstantsForInputTypeToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAA_NXZ @ 0x18000E6F0 (-v_MustDoNoWake@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_MustDoNoWake();
  return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_MustDoNoWake();
}

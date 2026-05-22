/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x18002BC58
 * Callers:
 *     dllmain_crt_dispatch @ 0x18002B700 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?v_MustDoNoWake@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetAllConstantsForInputTypeToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAA_NXZ @ 0x18000E700 (-v_MustDoNoWake@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 */

char _scrt_dllmain_crt_thread_attach()
{
  if ( !Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_MustDoNoWake() )
    return 0;
  if ( !Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_MustDoNoWake() )
  {
    Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetAllConstantsForInputTypeToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_MustDoNoWake();
    return 0;
  }
  return 1;
}

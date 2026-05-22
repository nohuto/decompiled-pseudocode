/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x18012B658
 * Callers:
 *     dllmain_crt_dispatch @ 0x18012B110 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?v_ShouldSetNoWake@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?UpdateConstantForDeviceAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@MEAA_NXZ @ 0x1800BD6C0 (-v_ShouldSetNoWake@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncC.c)
 */

char _scrt_dllmain_crt_thread_attach()
{
  if ( !Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake() )
    return 0;
  if ( !Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake() )
  {
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake();
    return 0;
  }
  return 1;
}

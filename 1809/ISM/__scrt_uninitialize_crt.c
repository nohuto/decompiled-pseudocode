/*
 * XREFs of __scrt_uninitialize_crt @ 0x18012B95C
 * Callers:
 *     dllmain_crt_process_detach @ 0x18012B284 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_ShouldSetNoWake@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?UpdateConstantForDeviceAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@MEAA_NXZ @ 0x1800BD6C0 (-v_ShouldSetNoWake@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncC.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  if ( !byte_180192C71 || !a2 )
  {
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake();
    Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake();
  }
  return 1;
}

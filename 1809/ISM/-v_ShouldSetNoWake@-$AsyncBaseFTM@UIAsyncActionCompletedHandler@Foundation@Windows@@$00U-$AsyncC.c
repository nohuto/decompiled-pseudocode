/*
 * XREFs of ?v_ShouldSetNoWake@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?UpdateConstantForDeviceAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@MEAA_NXZ @ 0x1800BD6C0
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x18012B658 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x18012B688 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18012B744 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x18012B760 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x18012B95C (__scrt_uninitialize_crt.c)
 * Callees:
 *     <none>
 */

char Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const UpdateConstantForDeviceAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::v_ShouldSetNoWake()
{
  return 1;
}

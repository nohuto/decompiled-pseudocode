/*
 * XREFs of ??_G?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003AE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAA@XZ @ 0x18003A278 (--1-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@M_ea_18003A278.c)
 */

void *__fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

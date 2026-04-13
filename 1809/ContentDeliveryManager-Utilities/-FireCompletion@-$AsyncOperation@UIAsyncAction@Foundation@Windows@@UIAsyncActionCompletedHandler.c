/*
 * XREFs of ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180004E34 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 256)) == 2 )
    return (unsigned int)Windows::Internal::ComTaskPoolHandler::FireCompletion(
                           (Windows::Internal::ComTaskPoolHandler *)(a1 + 200),
                           (struct Windows::Internal::IAsyncFireCompletion *)((a1 + 200) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64)));
  return v1;
}

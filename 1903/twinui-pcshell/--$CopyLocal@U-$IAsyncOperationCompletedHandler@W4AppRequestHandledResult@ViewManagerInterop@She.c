/*
 * XREFs of ??$CopyLocal@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@2@@Z @ 0x18009B4C4
 * Callers:
 *     ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@3@@Z @ 0x180298010 (-GetOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>>::CopyLocal<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>>(
        Microsoft::WRL::WeakRef *a1,
        struct IInspectable **a2)
{
  if ( *(_QWORD *)a1 )
    return Microsoft::WRL::WeakRef::InternalResolve(a1, &GUID_10e84b15_acbe_5d0c_b7e4_204bf733bbe5, a2);
  *a2 = 0LL;
  return 2147942487LL;
}

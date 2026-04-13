/*
 * XREFs of ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18001CB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnClose(
        __int64 a1)
{
  HRESULT result; // eax
  HSTRING v3; // rcx

  result = _InterlockedIncrement((volatile signed __int32 *)(a1 + 260));
  if ( result == 1 )
  {
    v3 = *(HSTRING *)(a1 + 288);
    if ( v3 )
    {
      result = WindowsDeleteString(v3);
      *(_QWORD *)(a1 + 288) = 0LL;
    }
  }
  return result;
}

/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x1802BA6F0
 * Callers:
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1802B9C20 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInter.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *__fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *result; // rax
  __int64 (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD); // rbx
  HSTRING_HEADER *v4; // rax
  GUID v5; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+50h] [rbp-48h]
  HSTRING_HEADER v7; // [rsp+58h] [rbp-40h] BYREF

  v6 = -2LL;
  result = Microsoft::WRL::gCausality;
  if ( Microsoft::WRL::gCausality )
  {
    v3 = *(__int64 (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
    *(_QWORD *)&v5.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Internal.Shell.ViewManagerInterop"
                            ".AppRequestHandledResult>";
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, (const WCHAR **)&v5);
    v5 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    return (struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *)v3(
                                                                                      Microsoft::WRL::gCausality,
                                                                                      0LL,
                                                                                      2LL,
                                                                                      &v5,
                                                                                      a1,
                                                                                      v4[1].Reserved.Reserved1,
                                                                                      *(unsigned int *)(a1 + 56));
  }
  return result;
}

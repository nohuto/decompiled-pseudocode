/*
 * XREFs of ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x14004E9B0
 * Callers:
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x14004E640 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1400460B4 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationStart(
        __int64 a1)
{
  HSTRING_HEADER *v2; // rax
  GUID v3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v4; // [rsp+50h] [rbp-48h]
  HSTRING_HEADER v5; // [rsp+58h] [rbp-40h] BYREF

  v4 = -2LL;
  if ( Microsoft::WRL::gCausality )
  {
    *(_QWORD *)&v3.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Devices.ModuleCommandResult>";
    v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v5, (const WCHAR **)&v3);
    v3 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
      Microsoft::WRL::gCausality,
      0LL,
      2LL,
      &v3,
      a1,
      v2[1].Reserved.Reserved1,
      *(unsigned int *)(a1 + 56));
  }
}

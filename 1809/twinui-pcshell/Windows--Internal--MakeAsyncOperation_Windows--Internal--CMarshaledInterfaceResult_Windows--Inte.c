/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_c2d3da3fa8172927b0d5fcbc78eb5f47___ @ 0x1801A6B18
 * Callers:
 *     ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@6@@Z @ 0x1801A9720 (-GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@Composable.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@@01@@Z @ 0x1801A6A10 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@D.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_c2d3da3fa8172927b0d5fcbc78eb5f47___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  char *v7; // rax
  __int64 v8; // r9

  v7 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *(_QWORD *)v7 = off_1803D9DD8;
    *(_OWORD *)(v7 + 8) = *(_OWORD *)a4;
    *((_QWORD *)v7 + 3) = *(_QWORD *)(a4 + 16);
  }
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Internal.Data.Activities.GetCurrentActivityForViewOperationResults>",
           v8,
           (__int64)v7);
}

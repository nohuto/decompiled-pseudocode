/*
 * XREFs of ?get_Status@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x14004C810
 * Callers:
 *     ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x1400488C0 (-GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@23.c)
 * Callees:
 *     ?CheckValidStateForAsyncInfoCall@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAAJXZ @ 0x140047028 (-CheckValidStateForAsyncInfoCall@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleComman.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Status(
        __int64 a1,
        _DWORD *a2)
{
  signed __int32 v2; // r8d
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = -2;
  _InterlockedCompareExchange(&v4, v2, -2);
  *a2 = v4;
  return Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckValidStateForAsyncInfoCall(a1);
}

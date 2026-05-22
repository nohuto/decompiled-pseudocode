/*
 * XREFs of ?add_ConstantChanged@MPCConstantManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801220B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18011045C (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@I.c)
 *     ?EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ @ 0x18011C45C (-EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ.c)
 */

__int64 __fastcall MPCConstantManagerClient::add_ConstantChanged(
        struct MPCManagerClientConnection **a1,
        struct IUnknown *a2,
        struct IUnknown **a3)
{
  MPCConstantManagerClient::EnsureBamoCallbacks(a1);
  if ( a2 )
    return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCConstantManagerClient *,Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             (__int64)(a1 + 15),
             a2,
             a2->lpVtbl[1].QueryInterface,
             a3);
  else
    return 2147942487LL;
}

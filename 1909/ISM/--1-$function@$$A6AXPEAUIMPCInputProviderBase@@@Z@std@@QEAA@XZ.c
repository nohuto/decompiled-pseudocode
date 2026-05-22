/*
 * XREFs of ??1?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@QEAA@XZ @ 0x180057C70
 * Callers:
 *     _ViewHelper::FindView_::_1_::dtor$0 @ 0x180057D99 (_ViewHelper--FindView_--_1_--dtor$0.c)
 *     _ViewHelper::FindView_::_1_::dtor$3 @ 0x180057DA5 (_ViewHelper--FindView_--_1_--dtor$3.c)
 *     _ViewHelper::FindWindowW_::_1_::dtor$0 @ 0x18005810D (_ViewHelper--FindWindowW_--_1_--dtor$0.c)
 *     _ViewHierarchy::FindView_::_1_::dtor$0 @ 0x180059288 (_ViewHierarchy--FindView_--_1_--dtor$0.c)
 *     _CBaseInputObserverServer_12_::DeliverToApps_::_1_::dtor$0 @ 0x1800683A8 (_CBaseInputObserverServer_12_--DeliverToApps_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$0 @ 0x1800808BC (_MPCHolographicInputManager--ForEachActiveProvider_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$0 @ 0x1800BC621 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$1 @ 0x1800BC62D (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__&_std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)__&_bool_&__::_1_::dtor$2 @ 0x1800DF7C3 (_std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSour_ea_1800DF7C3.c)
 *     _std::function_void___cdecl(long)_::function_void___cdecl(long)__::_1_::dtor$0 @ 0x1800E0454 (_std--function_void___cdecl(long)_--function_void___cdecl(long)__--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$0 @ 0x1800E435B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--QueueWorkItem.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices_::_1_::dtor$0 @ 0x1800EC037 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--CreateSpatialInteractio.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$0 @ 0x1801229A8 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$1 @ 0x1801229B4 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$1.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$8 @ 0x1801229D8 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$8.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$3 @ 0x1801229E4 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$3.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$0 @ 0x180123228 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$0.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$1 @ 0x180123234 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$1.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$8 @ 0x180123258 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$8.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$3 @ 0x180123264 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$3.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$0 @ 0x180123928 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (IMPCInputProviderBase *)>::~function<void (IMPCInputProviderBase *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}

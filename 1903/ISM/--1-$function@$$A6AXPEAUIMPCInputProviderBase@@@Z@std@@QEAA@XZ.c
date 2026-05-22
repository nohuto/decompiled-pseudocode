/*
 * XREFs of ??1?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@QEAA@XZ @ 0x180057F10
 * Callers:
 *     _ViewHelper::FindView_::_1_::dtor$0 @ 0x180058039 (_ViewHelper--FindView_--_1_--dtor$0.c)
 *     _ViewHelper::FindView_::_1_::dtor$3 @ 0x180058045 (_ViewHelper--FindView_--_1_--dtor$3.c)
 *     _ViewHelper::FindWindowW_::_1_::dtor$0 @ 0x1800583AD (_ViewHelper--FindWindowW_--_1_--dtor$0.c)
 *     _ViewHierarchy::FindView_::_1_::dtor$0 @ 0x180059518 (_ViewHierarchy--FindView_--_1_--dtor$0.c)
 *     _CBaseInputObserverServer_12_::DeliverToApps_::_1_::dtor$0 @ 0x1800685E8 (_CBaseInputObserverServer_12_--DeliverToApps_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$0 @ 0x180080AFC (_MPCHolographicInputManager--ForEachActiveProvider_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$0 @ 0x1800BC771 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$0.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$1 @ 0x1800BC77D (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__&_std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&)__&_bool_&__::_1_::dtor$2 @ 0x1800DFA03 (_std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSour_ea_1800DFA03.c)
 *     _std::function_void___cdecl(long)_::function_void___cdecl(long)__::_1_::dtor$0 @ 0x1800E0690 (_std--function_void___cdecl(long)_--function_void___cdecl(long)__--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$0 @ 0x1800E458B (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--QueueWorkItem.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevices_::_1_::dtor$0 @ 0x1800EC267 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--CreateSpatialInteractio.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$0 @ 0x1801229B8 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$1 @ 0x1801229C4 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$1.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$8 @ 0x1801229E8 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$8.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$3 @ 0x1801229F4 (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$3.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$0 @ 0x180123238 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$0.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$1 @ 0x180123244 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$1.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$8 @ 0x180123268 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$8.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$3 @ 0x180123274 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$3.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$0 @ 0x180123938 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
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

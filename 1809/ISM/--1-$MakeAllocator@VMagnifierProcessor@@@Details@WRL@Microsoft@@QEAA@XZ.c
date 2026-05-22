/*
 * XREFs of ??1?$MakeAllocator@VMagnifierProcessor@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000F830
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::NodePropertyChangedHandler_Windows::Internal::SpatialInteractions::NodePropertyChangedHandler_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_____ptr64_SPATIAL_NODE_ID_const_&___ptr64_Windows::Internal::Holographic::ISpatialGraphDriverClient_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18012E547 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions-_ea_18012E547.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MessageProxyReconnectAdapter_MessageProxyReconnectAdapter__GUID_const_&___ptr64_unsigned_short_const_____ptr64_const_&___ptr64_CursorManager_____ptr64__::_1_::dtor$0 @ 0x18012E57B (_Microsoft--WRL--Details--MakeAndInitialize_MessageProxyReconnectAdapter_MessageProxyReconnectAd.c)
 *     _MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor$3 @ 0x18012FF06 (_MPCGestureHandlerManager--MapGestureHandlerToWorkspace_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___ptr64___int64_unsigned_int_&___ptr64_unsigned_char_&___ptr64_bool_&___ptr64_bool_&___ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa____::_1_::dtor$0 @ 0x180130A8D (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngin.c)
 *     _MPCManagerClient::Create_::_1_::dtor$5 @ 0x180130B9C (_MPCManagerClient--Create_--_1_--dtor$5.c)
 *     _SpatialRimDeviceCollection::Initialize_::_1_::dtor$1 @ 0x1801311EF (_SpatialRimDeviceCollection--Initialize_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::Holographic::SpatialGraphNodeReference_Windows::Internal::Holographic::ISpatialGraphNodeReference_std::shared_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__&___ptr64_Windows::Internal::Holographic::DynamicNodeInfo_const_&___ptr64_enum_SPATIAL_TRACKING_STATE_&___ptr64_Windows::Internal::Holographic::SpatialGraphSettings_&___ptr64__::_1_::dtor$0 @ 0x18013421C (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--Holographic--SpatialGraphNodeRefe.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__IInspectable__::_1_::dtor$0 @ 0x18013435C (_Microsoft--WRL--Details--MakeAndInitialize_Microsoft--WRL--Singleton_Windows--Internal--Hologra.c)
 *     _MPCProcessor::Create_::_1_::dtor$0 @ 0x18013508D (_MPCProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<MagnifierProcessor>::~MakeAllocator<MagnifierProcessor>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}

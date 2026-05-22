/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180093E40
 * Callers:
 *     _WGIRawInputProvider::StartRawGameControllerWatcher_::_1_::dtor$4 @ 0x18003D51E (_WGIRawInputProvider--StartRawGameControllerWatcher_--_1_--dtor$4.c)
 *     _MPCRawInputProvider::AttachDevice_::_1_::dtor$1 @ 0x18009400C (_MPCRawInputProvider--AttachDevice_--_1_--dtor$1.c)
 *     _MPCRawInputProvider::QueueInput_::_1_::dtor$0 @ 0x18009496D (_MPCRawInputProvider--QueueInput_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDevice_::_1_::dtor$0 @ 0x180094A20 (_MPCRawInputProvider--RemoveDevice_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::RemoveDeviceImpl_::_1_::dtor$0 @ 0x180094BA7 (_MPCRawInputProvider--RemoveDeviceImpl_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::AddHeadEventOccurred_::_1_::dtor$0 @ 0x1800976E1 (_MPCHeadUpdateListener--AddHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurred_::_1_::dtor$0 @ 0x180097AA4 (_MPCHeadUpdateListener--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x180097C5F (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollection::DisableHeadEventHandler_::_1_::dtor$0 @ 0x18009C6F7 (_SpatialRimDeviceCollection--DisableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x18009CA43 (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x18009E4EF (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent_::_1_::dtor$2 @ 0x18009E670 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadUpdateEvent_--_1_--dtor$2.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x18009F0FD (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$0 @ 0x1800A76B8 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnRawGameControllerRemoved_::_1_::dtor$0 @ 0x1800A77A6 (_WGIRawInputProvider--OnRawGameControllerRemoved_--_1_--dtor$0.c)
 *     _WGIRawInputProvider::OnRawGameControllerRemoved_::_1_::dtor$1 @ 0x1800A77B2 (_WGIRawInputProvider--OnRawGameControllerRemoved_--_1_--dtor$1.c)
 *     _WGIRawInputProvider::OnUserProfileChanged_impl_::_1_::dtor$0 @ 0x1800A7921 (_WGIRawInputProvider--OnUserProfileChanged_impl_--_1_--dtor$0.c)
 *     __lambda_94bf11a16993f060fe03c20fc4fc2394_::operator()_::_1_::dtor$0 @ 0x1800E0F45 (__lambda_94bf11a16993f060fe03c20fc4fc2394_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache_::_1_::dtor$0 @ 0x1800E121C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--AddDeviceToCa.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval_::_1_::dtor$2 @ 0x1800E1C1D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E1C1D.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode_::_1_::dtor$0 @ 0x1800E1F54 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--EnsureHmdNode.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::LockAndInvokeDisplayChanged_::_1_::dtor$0 @ 0x1800E29B9 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--LockAndInvoke.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged_::_1_::dtor$10 @ 0x1800E38B1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E38B1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem_::_1_::dtor$1 @ 0x1800E4367 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E4367.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$3 @ 0x1800E60DD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E60DD.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState_::_1_::dtor$4 @ 0x1800E60E9 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E60E9.c)
 *     _std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800E62E7 (_std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ptr_Windows.c)
 *     _std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call_::_1_::dtor$0 @ 0x1800E6453 (_std--_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std--shared_ptr_Windows.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler_::_1_::dtor$0 @ 0x180165058 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--CreateNodePropertyC.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler_::_1_::dtor$0 @ 0x180167B32 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--ReleaseNodeProperty.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback_::_1_::dtor$0 @ 0x1801683D7 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--SetHapticsFeedback_.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown_::_1_::dtor$0 @ 0x18016871F (_Windows--Internal--SpatialInteractions--HapticsEngine--Shutdown_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback_::_1_::dtor$0 @ 0x180168903 (_Windows--Internal--SpatialInteractions--HapticsEngine--StartFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback_::_1_::dtor$0 @ 0x180168B90 (_Windows--Internal--SpatialInteractions--HapticsEngine--StopFeedback_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback_::_1_::dtor$0 @ 0x180168C5E (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StopHapticsFeedback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(this);
}

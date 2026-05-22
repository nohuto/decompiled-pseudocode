/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E0D58
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::dtor$1 @ 0x1800E444A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E444A.c)
 *     __lambda_88fb4871a400503c69c7f747a4c77519_::operator()_::_1_::dtor$0 @ 0x1800EB325 (__lambda_88fb4871a400503c69c7f747a4c77519_--operator()_--_1_--dtor$0.c)
 *     __lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_::operator()_::_1_::dtor$1 @ 0x1800EB6C9 (__lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects_::_1_::dtor$1 @ 0x1800ED2F0 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--RemoveAllO_ea_1800ED2F0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$1 @ 0x1800ED5E4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800ED5E4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo_::_1_::dtor$0 @ 0x1800ED881 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDevice--SetDynamicNodeInfo_--_1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded_::_1_::dtor$4 @ 0x1800F5960 (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--OnHand_ea_1800F5960.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$3 @ 0x18014C038 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_18014C038.c)
 *     _Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback_::_1_::dtor$0 @ 0x180169158 (_Windows--Internal--SpatialInteractions--NodePropertyChangedHandler--UnregisterCallback_--_1_--d.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}

/*
 * XREFs of ??1?$shared_ptr@VSystemCursor@@@std@@QEAA@XZ @ 0x180063FEC
 * Callers:
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1801117F0 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     _SystemCursorService::CreateCursorShapeAnimation_::_1_::dtor$0 @ 0x1801312AD (_SystemCursorService--CreateCursorShapeAnimation_--_1_--dtor$0.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$3 @ 0x1801326DB (_SystemCursorController--SystemCursorController_--_1_--dtor$3.c)
 *     _SystemCursorController::SystemCursorController_::_1_::dtor$4 @ 0x1801326F1 (_SystemCursorController--SystemCursorController_--_1_--dtor$4.c)
 *     _ButtonProcessor::QueueWorkItem_::_1_::dtor$2 @ 0x180132761 (_ButtonProcessor--QueueWorkItem_--_1_--dtor$2.c)
 *     __lambda_46e712f1d4a8bfe7f662a31e53621789_::operator()_::_1_::dtor$1 @ 0x1801327D0 (__lambda_46e712f1d4a8bfe7f662a31e53621789_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$1 @ 0x1801328E1 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNodeReferenceWit.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$1 @ 0x180132964 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180132964.c)
 *     _SystemCursor::AddShape_::_1_::dtor$0 @ 0x180132A00 (_SystemCursor--AddShape_--_1_--dtor$0.c)
 *     __lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator()_::_1_::dtor$1 @ 0x180132B4F (__lambda_34c6fe1e55b6e4140dcfd37dea589bfc_--operator()_--_1_--dtor$1.c)
 *     _SystemCursorService::CreateCursorShapeAnimation_::_1_::dtor$3 @ 0x180132B96 (_SystemCursorService--CreateCursorShapeAnimation_--_1_--dtor$3.c)
 *     _SystemCursorService::CreateCustomCursorShapeAnimation_::_1_::dtor$2 @ 0x180132BBA (_SystemCursorService--CreateCustomCursorShapeAnimation_--_1_--dtor$2.c)
 *     _SystemCursorService::CreateCustomCursorShapeAnimation_::_1_::dtor$3 @ 0x180132BCC (_SystemCursorService--CreateCustomCursorShapeAnimation_--_1_--dtor$3.c)
 *     _std::_Ref_count_obj_SystemCursor_::_Ref_count_obj_SystemCursor__std::shared_ptr_SystemCursorService__unsigned___int64_&___ptr64__::_1_::dtor$1 @ 0x180132C2C (_std--_Ref_count_obj_SystemCursor_--_Ref_count_obj_SystemCursor__std--shared_ptr_SystemCursorSer.c)
 *     _std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__&___ptr64_std::function_void___cdecl(std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64)__&___ptr64_bool_&___ptr64__::_1_::dtor$3 @ 0x1801338EC (_std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSour_ea_1801338EC.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded_::_1_::dtor$2 @ 0x180133B5E (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--OnHand_ea_180133B5E.c)
 *     _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$0 @ 0x180134E4C (_MPCSixDofProcessor--UpdatePoint_--_1_--dtor$0.c)
 *     _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x180134ED1 (_MPCSixDofProcessor--UpdateTouchpadDownleveling_--_1_--dtor$1.c)
 *     _MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper_::_1_::dtor$0 @ 0x180135683 (_MPCSlateDeadzoneHelper--MPCSlateDeadzoneHelper_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$1 @ 0x180135FFF (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_180135FFF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}

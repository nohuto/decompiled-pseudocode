/*
 * XREFs of ?AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E135C
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3200 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     ?AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EB9DC (-AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::AcquireInterestInHeadEvent(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  *((_BYTE *)this + 109) = (**(int (__fastcall ***)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))a2)(a2) >= 0;
}

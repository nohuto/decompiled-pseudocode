/*
 * XREFs of PiDmGetObject @ 0x1405989C8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405980E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405986C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140598848 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140598D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140599A98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiUEventHandleRegistration @ 0x140655C04 (PiUEventHandleRegistration.c)
 *     PiDmGetObjectConstraintList @ 0x1406D2424 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DACF4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F19CC (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F223C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1406F269C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F2968 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F2AA4 (PiDmObjectGetCachedObjectReference.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D4C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140828FA4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140829178 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140829420 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmLookupObject @ 0x140598A58 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140598CD0 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v6; // esi
  struct _ERESOURCE *ObjectManagerForObjectType; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax

  v6 = 0;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v9 = PiDmLookupObject(ObjectManagerForObjectType, a2);
  *a3 = v9;
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  else
    v6 = -1073741772;
  ExReleaseResourceLite(ObjectManagerForObjectType);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}

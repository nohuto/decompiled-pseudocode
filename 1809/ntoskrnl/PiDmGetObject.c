/*
 * XREFs of PiDmGetObject @ 0x1405999C8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140598CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405990E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405996C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140599848 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140599D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 *     PiDmGetObjectConstraintList @ 0x1406D36A4 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DBF74 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F3D24 (PiDmObjectGetCachedObjectReference.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140829F2C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14082A184 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14082A600 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmLookupObject @ 0x140599A58 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140599CD0 (PiDmGetObjectManagerForObjectType.c)
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

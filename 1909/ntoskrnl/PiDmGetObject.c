/*
 * XREFs of PiDmGetObject @ 0x1405BEF20
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD82C (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD9C0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BEC1C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405BEDA0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BF250 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406E0354 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406ED4CC (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406F2860 (PiDmGetObjectConstraintList.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FC0A8 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1406FC508 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406FC668 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FC7A4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140862C84 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140862E98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140863148 (PiPnpRtlGatherPanelRemoveInfo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiDmLookupObject @ 0x1405BEFB0 (PiDmLookupObject.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405BF1B4 (PiDmGetObjectManagerForObjectType.c)
 */

__int64 __fastcall PiDmGetObject(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v5; // esi
  struct _ERESOURCE *ObjectManagerForObjectType; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax

  v5 = 0;
  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ObjectManagerForObjectType, 1u);
  v8 = PiDmLookupObject(ObjectManagerForObjectType, a2);
  *a3 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  else
    v5 = -1073741772;
  ExReleaseResourceLite(ObjectManagerForObjectType);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}

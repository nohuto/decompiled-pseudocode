/*
 * XREFs of PiDmObjectRelease @ 0x1405BF214
 * Callers:
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B5CA4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405B74A4 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BBA60 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405BD510 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD82C (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD9C0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE798 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BEC1C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405BEDA0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BF250 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406E0354 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406EA0E4 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406ED4CC (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406F2860 (PiDmGetObjectConstraintList.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x1406FBAA8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FC0A8 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406FC4D0 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406FC668 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140717174 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407171D8 (PiDmRemoveCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x1407575D0 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140757770 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140862BC0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140862C24 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140863604 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x1405BF360 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1406FC4D0 (PiDmCacheDataFree.c)
 */

void __fastcall PiDmObjectRelease(unsigned int *P)
{
  void *v2; // rcx
  char *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = (void *)*((_QWORD *)P + 2);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x5A706E50u);
    PiDmGetCacheKeys(P[7], &v6, &v5);
    if ( v5 )
    {
      v3 = (char *)(P + 28);
      v4 = v5;
      do
      {
        PiDmCacheDataFree(v3);
        v3 += 24;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0x5A706E50u);
  }
}

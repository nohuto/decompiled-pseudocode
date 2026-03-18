/*
 * XREFs of PiDmObjectRelease @ 0x140598D30
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405902D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405913C4 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x140595DE0 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x140596F5C (PiDmEnumObjectsWithCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140597CE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405980E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059824C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405986C4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140598848 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140598D6C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140599A98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C80B8 (PiUEventFreeClientRegistrationContext.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406CC0D0 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDmGetObjectConstraintList @ 0x1406D2424 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DACF4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F1B00 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x1406F1C50 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F223C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406F2664 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F2968 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406F2AA4 (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F96EC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9750 (PiDmRemoveCacheReferenceForObject.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     PiDmListInitEnumCallback @ 0x14072C770 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072C910 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D4C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140828F00 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140828F44 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x1408297C8 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x140598E7C (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1406F2664 (PiDmCacheDataFree.c)
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

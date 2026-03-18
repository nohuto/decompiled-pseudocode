/*
 * XREFs of PiDmObjectRelease @ 0x1405BED44
 * Callers:
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B58C4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405B70C4 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BB680 (PiPnpRtlObjectEventRelease.c)
 *     PiDmEnumObjectsWithCallback @ 0x1405BD130 (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD44C (PiPnpRtlObjectEventCreate.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE2C8 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405BE74C (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405BE8D0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1405BED80 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BEF40 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1406DF044 (PiDmObjectGetCachedObjectReference.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E8EA4 (PiUEventFreeClientRegistrationContext.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406EC20C (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1406F0DC0 (PiDmGetObjectConstraintList.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectCreate @ 0x1406F9CC8 (PiDmObjectCreate.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FA2C8 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406FA6F0 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406FA888 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140714EB4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x140756B40 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x140756CE0 (PiDmObjectManagerPopulate.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14086330C (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1408634C0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140863524 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiDmListRemoveObjectWorker @ 0x140863F04 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDmGetCacheKeys @ 0x1405BEE90 (PiDmGetCacheKeys.c)
 *     PiDmCacheDataFree @ 0x1406FA6F0 (PiDmCacheDataFree.c)
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

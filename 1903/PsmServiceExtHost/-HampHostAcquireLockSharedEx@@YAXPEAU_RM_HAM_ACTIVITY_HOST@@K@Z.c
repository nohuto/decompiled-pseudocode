/*
 * XREFs of ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800301FC
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CC2C (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A7BC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DE04 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18003B838 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18003BF04 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003C280 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E2B0 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F410 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180079110 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18007AE40 (-HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800303D8 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampHostAcquireLockSharedEx(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(a1, a2, 1LL);
  RtlAcquireSRWLockShared(a1);
}

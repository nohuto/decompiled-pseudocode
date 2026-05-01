/*
 * XREFs of CempLockTrackerMarkReleased @ 0x18001A910
 * Callers:
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180002E6C (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180007DB0 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CB50 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CC2C (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180017988 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180017E98 (-HampHostIdStoreReferenceId@@YAPEAXPEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001885C (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180018B1C (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180018B4C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180018D00 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A7BC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001DE04 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x180037DB4 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003A1F0 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003A814 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x18003A9A0 (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003B7D8 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18003B838 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18003BF04 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003C280 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E2B0 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003F234 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003F410 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180040820 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A64 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078BCC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180079110 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180079904 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18007AE40 (-HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA60 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerMarkReleased(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  _QWORD *Value; // rax

  v3 = a3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( ((1LL << v3) & *Value) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[v3 + 1]-- == 1LL )
      *Value &= ~(1LL << v3);
  }
}

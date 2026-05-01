/*
 * XREFs of _TlgCreateSid @ 0x180017F20
 * Callers:
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180002BEC (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     CrmSrvRegister @ 0x1800080F8 (CrmSrvRegister.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000A9EC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BA74 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x18000EB30 (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKG.c)
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800111E8 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800132C0 (-HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180015760 (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F48 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18002EF9C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     CrmSrvActivityAllocate @ 0x1800318D8 (CrmSrvActivityAllocate.c)
 *     CrmSrvActivityStart @ 0x180031A58 (CrmSrvActivityStart.c)
 *     CrmSrvActivityFree @ 0x180031EE0 (CrmSrvActivityFree.c)
 *     CrmLogSrvActivityStopStop @ 0x180032084 (CrmLogSrvActivityStopStop.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18003ABCC (CrmSrvActivityQueryWindowClosedReasons.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003B17C (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003B478 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18003C5C4 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmSrvUnregister @ 0x18003CBF4 (CrmSrvUnregister.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18003ECD8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003EE0C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800406A4 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180073F8C (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800741DC (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180074648 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800747F0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180075958 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18007606C (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSid(PEVENT_DATA_DESCRIPTOR pDesc, const SID *pSid)
{
  int SubAuthorityCount; // eax

  SubAuthorityCount = 15;
  if ( pSid->SubAuthorityCount <= 0xFu )
    SubAuthorityCount = pSid->SubAuthorityCount;
  pDesc->Reserved = 0;
  pDesc->Size = 4 * SubAuthorityCount + 8;
  pDesc->Ptr = (ULONGLONG)pSid;
}

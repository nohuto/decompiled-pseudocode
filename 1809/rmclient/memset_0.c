/*
 * XREFs of memset_0 @ 0x180009BC4
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180002E60 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     HamPopulateActivityProperties @ 0x180004120 (HamPopulateActivityProperties.c)
 *     CempGetTokenHostInfo @ 0x180004390 (CempGetTokenHostInfo.c)
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180004810 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     RmpClientAcquireResourceSet @ 0x180004DA0 (RmpClientAcquireResourceSet.c)
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005050 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x180006730 (RmpClientSubscriptionDeliverPayload.c)
 *     RmResourceSetPropertiesInitialize @ 0x1800069D0 (RmResourceSetPropertiesInitialize.c)
 *     HampConnectionInitialize @ 0x180007140 (HampConnectionInitialize.c)
 *     HamConnectForExtendedExecution @ 0x1800073B0 (HamConnectForExtendedExecution.c)
 *     CrmActivityAllocate @ 0x180008420 (CrmActivityAllocate.c)
 *     RmpClientConnectionInitialize @ 0x18000876C (RmpClientConnectionInitialize.c)
 *     HamIpcChannelInitialize @ 0x180008804 (HamIpcChannelInitialize.c)
 *     RmpClientWnfCreateSubscription @ 0x1800089F4 (RmpClientWnfCreateSubscription.c)
 *     RmGameModeInitializeResourceRequest @ 0x18000C490 (RmGameModeInitializeResourceRequest.c)
 *     RmResourceLimitsInitialize @ 0x18000E3D0 (RmResourceLimitsInitialize.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180010314 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampHostIdStoreKeyInitialize@@YAXPEBGPEAXKW4_HAM_HOSTID_STORE_CONTAINER_TYPE@@0PEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180010458 (-HampHostIdStoreKeyInitialize@@YAXPEBGPEAXKW4_HAM_HOSTID_STORE_CONTAINER_TYPE@@0PEAU_HAM_HOSTID_.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x180010990 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_180010990.c)
 *     ?Apply@ResourceSetClientProxy@@UEAAJK@Z @ 0x180010F40 (-Apply@ResourceSetClientProxy@@UEAAJK@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x180011540 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180011AE0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x180012120 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}

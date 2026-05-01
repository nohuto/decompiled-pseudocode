/*
 * XREFs of CempListEntryIsNull @ 0x18000C754
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001258 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B068 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B2A8 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x18000B5D4 (-RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BA74 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C41C (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C664 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E330 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180034B40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x18003766C (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180067DF0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180069D60 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180069E44 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18006A7B8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18007B1E8 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempListEntryIsNull(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*a1 || !a1[1] )
    return 1LL;
  return result;
}

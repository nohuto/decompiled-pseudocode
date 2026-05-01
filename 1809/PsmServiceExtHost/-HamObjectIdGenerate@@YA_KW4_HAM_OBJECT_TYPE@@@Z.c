/*
 * XREFs of ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180038D4C
 * Callers:
 *     ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180001584 (-HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_.c)
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180009870 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000ABCC (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18001ACB8 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180054F6C (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005C7E8 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005C8C4 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?HamSrvCreateSingleUseHostId@@YAXPEA_K@Z @ 0x180066990 (-HamSrvCreateSingleUseHostId@@YAXPEA_K@Z.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x18006D8DC (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HamObjectIdGenerate(int a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rcx

  v1 = a1;
  v2 = _InterlockedIncrement64(&HampNextHandleValues[a1]);
  if ( (v2 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  return v2 | (v1 << 57) | 0x1000000000000000LL;
}

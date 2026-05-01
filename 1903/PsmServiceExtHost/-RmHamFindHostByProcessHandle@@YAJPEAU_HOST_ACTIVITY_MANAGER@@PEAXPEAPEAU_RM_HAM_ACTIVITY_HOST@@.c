/*
 * XREFs of ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0
 * Callers:
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18000FA60 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18001028C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180011DEC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003E0DC (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x180074F1C (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180076258 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180076C64 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180078B08 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800189A0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempGetProcessHostInfo @ 0x180033EDC (CempGetProcessHostInfo.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmHamFindHostByProcessHandle(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _RM_OBJECT_HEADER *v5; // rsi
  int ProcessHostInfo; // ebx
  struct _RM_OBJECT_TABLE *v7; // rbx
  char *v8; // rdi
  unsigned __int64 v10; // [rsp+20h] [rbp-268h] BYREF
  struct _RM_OBJECT_HEADER *v11; // [rsp+28h] [rbp-260h] BYREF
  _BYTE v12[544]; // [rsp+30h] [rbp-258h] BYREF
  unsigned __int64 v13; // [rsp+250h] [rbp-38h]

  v5 = 0LL;
  ProcessHostInfo = CempGetProcessHostInfo(a2, v12);
  if ( ProcessHostInfo >= 0 )
  {
    v7 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1592);
    v8 = (char *)a1 - 1576;
    v10 = v13;
    RtlAcquireSRWLockShared(v8);
    ProcessHostInfo = RmpObjectTableFindObjectByHandleWithLock(v7, &v10, &v11);
    RtlReleaseSRWLockShared(v8);
    if ( ProcessHostInfo >= 0 )
    {
      v5 = v11;
      if ( (*((_BYTE *)v11 + 836) & 1) != 0 )
      {
        RmpAcquireGlobalLock();
        if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_OBJECT_HEADER *)((char *)v5 + 64)) )
        {
          RmpReleaseGlobalLock();
          *a3 = (struct _RM_OBJECT_HEADER *)((char *)v5 + 64);
          ProcessHostInfo = 0;
        }
        else
        {
          ProcessHostInfo = -1073741275;
          RmpReleaseGlobalLock();
        }
      }
      else
      {
        ProcessHostInfo = -1073740007;
      }
    }
    if ( v5 )
      RmpObjectRelease(v5);
  }
  return (unsigned int)ProcessHostInfo;
}

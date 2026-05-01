/*
 * XREFs of ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015E54
 * Callers:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800146C0 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015F50 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BA8 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180017A44 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017E98 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB80 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038D94 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180038E50 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        unsigned int a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  int v9; // edi
  int v10; // eax
  PVOID v11; // rbx
  struct _RM_PSM_APP_FAMILY *v12; // rcx
  struct _RM_ACTIVITY_HOST *v13; // rbx
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  struct _RM_PSM_APP_FAMILY *v16; // [rsp+38h] [rbp-8h] BYREF

  v16 = 0LL;
  P = 0LL;
  v9 = RmpPsmAppFamilyTableFindOrCreate(a1, a3, &v16);
  if ( v9 >= 0 )
  {
    v10 = RmpActivityHostAllocateAndInitialize(a1, a2, a3, a4, (struct _RM_ACTIVITY_HOST **)&P);
    v11 = P;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v12 = v16;
      v16 = 0LL;
      v9 = RmpPsmAppFamilyAddActivityHost(v12, (struct _RM_ACTIVITY_HOST *)P);
      if ( v9 >= 0 )
      {
        QueryUnbiasedInterruptTime((PULONGLONG)v11 + 175);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v11 + 2) <= 1 )
          __fastfail(0xEu);
        v13 = (struct _RM_ACTIVITY_HOST *)P;
        RmpActivityHostAddToTables((struct _RM_ACTIVITY_HOST *)P);
        *a5 = v13;
        v11 = 0LL;
        P = 0LL;
        v9 = 0;
      }
    }
    if ( v11 )
    {
      RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)v11);
      RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  if ( v16 )
    RmpPsmAppFamilyTableCheckDelete(a1, v16);
  return (unsigned int)v9;
}

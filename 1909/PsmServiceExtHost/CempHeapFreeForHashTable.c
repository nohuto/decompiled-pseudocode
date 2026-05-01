/*
 * XREFs of CempHeapFreeForHashTable @ 0x18003E460
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015B24 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180015DA4 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@_KPEAPEAV12@@Z @ 0x18001ED40 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180039D6C (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044530 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800445EC (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180044640 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800699C8 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CempHeapFreeForHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

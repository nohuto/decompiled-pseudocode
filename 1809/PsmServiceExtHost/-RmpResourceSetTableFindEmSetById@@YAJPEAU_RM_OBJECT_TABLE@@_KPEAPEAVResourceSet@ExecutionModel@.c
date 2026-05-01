/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000ADA4
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18000E15C (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18005AA24 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z @ 0x18000AE0C (-RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  int v4; // eax
  struct _RM_OBJECT_HEADER *v5; // rbx
  unsigned int v6; // edi
  struct ExecutionModel::ResourceSet *v7; // rcx
  struct _RM_OBJECT_HEADER *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = RmpResourceSetTableFindById(a1, a2, &v9);
  v5 = v9;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)v9 + 6);
    *a3 = v7;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = 0;
  }
  if ( v5 )
    RmpObjectRelease(v5);
  return v6;
}

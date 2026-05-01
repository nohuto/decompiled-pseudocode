/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A5C0
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A530 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800064BC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180006B8C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        __int64 a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // rsi
  char *v5; // rbx
  HANDLE *v6; // rdi
  struct _RM_OBJECT_HEADER *v7; // rcx

  v3 = (char *)this + 112;
  v5 = (char *)*((_QWORD *)this + 14);
  while ( v5 != v3 )
  {
    v6 = (HANDLE *)*((_QWORD *)v5 + 4);
    (*((void (__fastcall **)(HANDLE *))*v6 + 1))(v6);
    v5 = *(char **)v5;
    if ( a3 )
    {
      v7 = (struct _RM_OBJECT_HEADER *)v6[182];
      if ( a3 == v7 )
      {
        if ( v7 )
        {
          RmpObjectRelease(v7);
          v6[182] = 0LL;
        }
        if ( (*((unsigned __int8 (__fastcall **)(HANDLE *))*v6 + 7))(v6) )
          ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v6);
        else
          ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 1);
      }
    }
    (*((void (__fastcall **)(HANDLE *))*v6 + 2))(v6);
  }
}

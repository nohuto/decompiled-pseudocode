/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A530
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011318 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A5C0 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005B9D0 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  ExecutionModel::ResourceManager::RemoveExternalResources(
    *(ExecutionModel::ResourceManager **)(*((_QWORD *)a1 + 6) + 2688LL),
    a2,
    a1);
  *((_QWORD *)a1 + 163) = 0LL;
  *((_QWORD *)a1 + 164) = 0LL;
  *((_DWORD *)a1 + 330) = 0;
  RmpActivityHostResourceSetsChanged(a1, 2u);
  if ( (*((_BYTE *)a1 + 812) & 1) == 0 )
    RmpActivityHostComputeAndApplyEnforcementSettings(a1);
  v3 = (_QWORD *)((char *)a1 + 1216);
  v4 = *((_QWORD *)a1 + 152);
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = (_QWORD *)*((_QWORD *)a1 + 153), (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    *((_QWORD *)a1 + 153) = 0LL;
    RmpObjectRelease(a1);
  }
  if ( *((_QWORD *)a1 + 171) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 80LL));
  RmpActivityHostCheckQueueDelete(a1);
}

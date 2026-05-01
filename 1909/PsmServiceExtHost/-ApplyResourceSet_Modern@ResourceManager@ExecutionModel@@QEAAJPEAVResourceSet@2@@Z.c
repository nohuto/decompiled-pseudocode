/*
 * XREFs of ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000BDE4
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18000BD78 (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BE68 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000BF94 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C770 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000C814 (-RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@.c)
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000C8A0 (-RmpActivityHostRemoveResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGOR.c)
 */

int __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v2; // rdi
  int v5; // eax

  v2 = *((_QWORD *)a2 + 165);
  RmpActivityHostRemoveResourceSet(a2, 0LL);
  RmpActivityHostAddResourceSet(a2, 1LL);
  *((_BYTE *)a2 + 12) = 1;
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v2, 3u);
  if ( (*(_BYTE *)(v2 + 836) & 1) == 0 )
  {
    v5 = RmpActivityHostComputeAndApplyEnforcementSettings((PVOID)v2);
    if ( v5 < 0 )
      return v5 | 0x10000000;
  }
  ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this, (struct _RM_ACTIVITY_HOST *)v2);
  return 0;
}

/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x1800102E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010E4C (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011318 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180013270 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C05C (-HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v12; // r15
  int v13; // eax
  struct _RM_ACTIVITY_HOST *v14; // rdi
  wchar_t *v15; // [rsp+30h] [rbp-298h]
  void *v16; // [rsp+38h] [rbp-290h]
  struct _RM_ACTIVITY_HOST *v17; // [rsp+40h] [rbp-288h] BYREF
  wchar_t Destination[280]; // [rsp+50h] [rbp-278h] BYREF

  v16 = a3;
  v15 = a2;
  if ( a8 <= 1 && a7 )
  {
    v12 = a7;
    do
    {
      if ( a8 )
      {
        v17 = 0LL;
        RmpAcquireGlobalLock();
        v13 = RmpActivityHostFindByHostId(*(struct _RM_SERVICE_GLOBALS **)(a1 + 144), *a6, &v17);
        v14 = v17;
        if ( v13 >= 0 )
        {
          HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v17 + 64), 0);
          HampHostCompleteQuiesce((struct _RM_ACTIVITY_HOST *)((char *)v14 + 64));
          HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v14 + 64));
        }
        RmpReleaseGlobalLock();
        if ( v14 )
          RmpObjectRelease(v14);
      }
      else
      {
        RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, *a5, *a6);
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(a1 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
      }
      a2 = v15;
      a3 = v16;
      ++a6;
      ++a5;
      --v12;
    }
    while ( v12 );
  }
}

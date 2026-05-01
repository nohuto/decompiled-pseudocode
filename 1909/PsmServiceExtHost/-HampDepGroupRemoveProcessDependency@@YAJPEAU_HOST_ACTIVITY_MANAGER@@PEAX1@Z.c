/*
 * XREFs of ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180078B08
 * Callers:
 *     ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180075194 (-HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x1800787F4 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  bool v10; // zf
  struct _RM_HAM_ACTIVITY_HOST *v12; // [rsp+20h] [rbp-28h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, &v12);
  v7 = v12;
  v8 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v9 = RmHamFindHostByProcessHandle(a1, a3, &v13);
    v4 = v13;
    v8 = v9;
    if ( v9 >= 0 )
      v8 = HampDepGroupRemoveDependency(v7, v13, 0);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)v7 + 74))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)v4 + 74))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64));
    RmpReleaseGlobalLock();
  }
  return v8;
}

/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006BBD8
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006801C (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180003E9C (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180008150 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x18000898C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010A58 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003B1B0 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C834 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003CC18 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180069B28 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069C10 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a3)
{
  struct _RM_HAM_ACTIVITY_HOST **v3; // rbx
  int v7; // r15d
  __int64 v8; // rdx
  struct _HAM_APPLICATION *First; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi
  int v12; // ebx
  int v14; // ecx
  struct _RM_HAM_ACTIVITY_HOST **Next; // rax
  struct _RM_HAM_ACTIVITY_HOST **v16; // rax
  struct _RM_HAM_ACTIVITY_HOST **v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-10h]

  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  HampPkgAcquireLockShared(a1);
  v7 = (*((_DWORD *)a1 + 85) >> 4) & 7;
  HampPkgReleaseLockShared(a1, v8);
  First = HamRcNodeGetFirst(a1, 1);
  if ( First )
  {
    while ( 1 )
    {
      v10 = HampAppTryReferenceMixedHost(First);
      v11 = v10;
      if ( v10 )
      {
        v12 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v18, v10);
        if ( v12 >= 0 )
          v12 = 0;
        RmpAcquireGlobalLock();
        if ( (*((_QWORD *)v11 + 72))-- == 1LL )
          RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v11 - 64));
        RmpReleaseGlobalLock();
        if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741275 )
          break;
      }
      First = HamRcNodeGetSuccessor(a1, First);
      if ( !First )
      {
        v3 = v18;
        goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    v14 = v19;
    Next = 0LL;
    if ( (_DWORD)v19 )
    {
      Next = v3;
      LODWORD(v20) = 1;
    }
    if ( Next )
    {
      do
      {
        HampHostDebugQueueSuspend(*Next, a2);
        Next = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v18);
      }
      while ( Next );
      v14 = v19;
      v3 = v18;
    }
    v16 = 0LL;
    if ( v14 )
    {
      v16 = v3;
      LODWORD(v20) = 1;
    }
    while ( v16 )
    {
      HampHostDebugWaitForSuspendComplete(*v16);
      v16 = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v18);
    }
    *(_DWORD *)a3 = v7;
    v12 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v18);
  return (unsigned int)v12;
}

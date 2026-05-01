/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180079934
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800757E8 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180018B4C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037DFC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F394 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003F608 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F654 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077798 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077860 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180079904 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
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
  v7 = (*((_DWORD *)a1 + 86) >> 5) & 7;
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
        if ( (*((_QWORD *)v11 + 74))-- == 1LL )
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

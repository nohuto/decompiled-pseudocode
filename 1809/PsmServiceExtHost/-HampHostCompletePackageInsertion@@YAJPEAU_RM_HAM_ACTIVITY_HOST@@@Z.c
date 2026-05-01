/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010AC0
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C94 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800081AC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800088D0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000CB60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18000CC00 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180010608 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C14 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015E08 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003F8D0 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006B870 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rcx
  int v12; // ebx
  bool v14; // zf
  __int64 v15; // r8
  struct _HAM_RC_TREE_NODE *j; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v17; // rax
  struct _RM_HAM_ACTIVITY_HOST *v18; // rbp
  __int64 v19; // rdx

  v1 = *((_QWORD *)a1 + 94);
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 88);
  RmpAcquireGlobalLock();
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v5 && RmHamHostReferenceUnsafe(v5) )
    v6 = *(_QWORD *)(v1 + 568);
  else
    v6 = 0LL;
  RmpReleaseGlobalLock();
  v7 = *(_QWORD **)(v1 + 600);
  v8 = (_QWORD *)((char *)a1 + 784);
  if ( *v7 != v1 + 592 )
    __fastfail(3u);
  *v8 = v1 + 592;
  *((_QWORD *)a1 + 99) = v7;
  *v7 = v8;
  *(_QWORD *)(v1 + 600) = v8;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    if ( *(_QWORD *)(v1 + 568) )
    {
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      HampAppQueueTerminate(v1, v19, 4864LL);
      v12 = -1058275322;
      goto LABEL_16;
    }
    *(_QWORD *)(v1 + 568) = a1;
  }
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( *((_DWORD *)a1 + 140) != 2 )
  {
    if ( v6 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)a1 + 95) = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)v6);
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
    }
    goto LABEL_23;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v10, 0);
      *((_QWORD *)v10 + 95) = RmHamHostReference(a1);
      HampHostReleaseLockExclusiveEx(v10);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 79) & 0x400000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_QWORD *)(v4 + 328) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    v15 = 0LL;
    for ( j = (struct _HAM_RC_TREE_NODE *)v4; ; j = *(struct _HAM_RC_TREE_NODE **)(*((_QWORD *)v18 + 94) + 88LL) )
    {
      v17 = HampHostEnumerateHostsInNode(j, 3, v15);
      v18 = v17;
      if ( !v17 )
        break;
      if ( v17 != a1 && *((_DWORD *)v17 + 140) == 2 && !*((_QWORD *)v17 + 84) )
      {
        v12 = HampDepGroupAddPpleDependency(v17, a1);
        if ( v12 < 0 )
          goto LABEL_16;
      }
      v15 = (__int64)v18;
    }
    goto LABEL_23;
  }
  if ( *((_QWORD *)a1 + 84) )
  {
LABEL_23:
    v12 = 0;
    goto LABEL_16;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v11 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 328);
  if ( !v11 || !RmHamHostReferenceUnsafe(v11) )
  {
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  v3 = *(_QWORD *)(v4 + 328);
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
  RmpReleaseGlobalLock();
  v12 = HampDepGroupAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( v12 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    v14 = (*(_QWORD *)(v3 + 576))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v3 - 64));
    RmpReleaseGlobalLock();
  }
LABEL_16:
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v14 = (*(_QWORD *)(v6 + 576))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v12;
}

/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B07C
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E7DC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DEC4 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18000E99C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x180023D40 (CempLockTrackerMarkAcquired.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180029F70 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C928 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180038CA8 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006A800 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006A96C (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AE98 (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006B3B4 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180070FC0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v5; // r12
  __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rax
  struct _HAM_DEPENDENCY_LINK *FirstLink; // r14
  unsigned __int64 *v18; // r12
  struct _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  int v23; // r12d
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v28[3]; // [rsp+20h] [rbp-40h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v29; // [rsp+38h] [rbp-28h]
  struct _HAM_DEPENDENCY_GROUP **v30; // [rsp+40h] [rbp-20h]
  struct _RTL_BALANCED_NODE *v31[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = (__int64 *)*((_QWORD *)a1 + 83);
  v30 = a3;
  v29 = a1;
  v5 = a1;
  if ( _InterlockedIncrement64(v3 + 12) <= 1 )
    __fastfail(0xEu);
  v6 = (__int64 *)*((_QWORD *)a2 + 83);
  if ( _InterlockedIncrement64(v6 + 12) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  v7 = *v3;
  v8 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  v9 = *v6;
  if ( *v3 >= (unsigned __int64)*v6 )
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  HampDepGroupWaitEnterStateChange(v8);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  if ( v7 >= v9 )
    v10 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  HampDepGroupWaitEnterStateChange(v10);
  HampHostAcquireTwoLocksExclusive(v5, a2);
  if ( *((__int64 **)v5 + 83) == v3 && *((__int64 **)a2 + 83) == v6 )
  {
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    v28[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28;
    v28[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28);
    for ( i = v28[0]; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
      HampDepGroupRemoveHostForMerge(
        (struct _HAM_DEPENDENCY_GROUP *)v3,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 704));
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( j = v28[0]; j != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
      HampDepGroupAddHost(
        (struct _HAM_DEPENDENCY_GROUP *)v6,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 704));
    v15 = 0;
    v16 = v3[10];
    if ( (v16 & 1) != 0 )
    {
      if ( v16 == 1 )
        FirstLink = 0LL;
      else
        FirstLink = (struct _HAM_DEPENDENCY_LINK *)(v16 ^ ((unsigned __int64)(v3 + 9) | 1));
    }
    else
    {
      FirstLink = (struct _HAM_DEPENDENCY_LINK *)v3[10];
    }
    if ( FirstLink )
    {
      v18 = (unsigned __int64 *)(v6 + 9);
      do
      {
        CempLockTrackerMarkAcquired(v13, v12, 2u, 0);
        CempLockAcquireExclusive((char *)FirstLink + 48);
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        RtlRbRemoveNode(v3 + 9, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v19 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)FirstLink + 3);
        v31[1] = *((struct _RTL_BALANCED_NODE **)FirstLink + 4);
        v31[0] = v19;
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        v21 = v18[1];
        v22 = *v18;
        if ( (v21 & 1) != 0 )
        {
          if ( v22 )
            v22 ^= (unsigned __int64)v18;
          else
            v22 = 0LL;
        }
        LOBYTE(v20) = 0;
        v23 = v21 & 1;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v31, (struct _RTL_BALANCED_NODE *)v22) < 0 )
            {
              v24 = *(_QWORD *)v22;
              if ( v23 )
              {
                if ( !v24 )
                  goto LABEL_40;
                v24 ^= v22;
              }
              if ( !v24 )
              {
LABEL_40:
                LOBYTE(v20) = 0;
                break;
              }
            }
            else
            {
              v24 = *(_QWORD *)(v22 + 8);
              if ( v23 )
              {
                if ( !v24 )
                  goto LABEL_34;
                v24 ^= v22;
              }
              if ( !v24 )
              {
LABEL_34:
                LOBYTE(v20) = 1;
                break;
              }
            }
            v22 = v24;
          }
        }
        v18 = (unsigned __int64 *)(v6 + 9);
        RtlRbInsertNodeEx(v6 + 9, v22, v20, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        if ( _InterlockedIncrement64(v6 + 12) <= 1 )
          __fastfail(0xEu);
        *((_QWORD *)FirstLink + 5) = v6;
        CempLockTrackerMarkReleased(v26, v25, 2u);
        *((_DWORD *)FirstLink + 14) = 0;
        RtlReleaseSRWLockExclusive((char *)FirstLink + 48);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
      v5 = v29;
    }
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28);
    HampDepGroupDereferenceMembers(v28);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    *v30 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v15 = -1073741267;
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v15;
}

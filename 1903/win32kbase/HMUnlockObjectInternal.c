/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0026A50
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0023E60 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     ThreadUnlock1 @ 0x1C0025E10 (ThreadUnlock1.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C002EA2C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00901D0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0090204 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01056F4 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectInternal(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
  {
    GetDomainLockRef(12LL, v5, v6);
    if ( !*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      AddToDeferredUserCritThreadUnlockList();
    }
  }
  else
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  return 0LL;
}

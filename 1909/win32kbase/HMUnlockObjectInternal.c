/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0026F70
 * Callers:
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0024380 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008B990 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C008B9C4 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0102CC4 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectInternal(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
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

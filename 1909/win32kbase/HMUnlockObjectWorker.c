/*
 * XREFs of HMUnlockObjectWorker @ 0x1C002FFA0
 * Callers:
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     HMAssignmentUnlockWorker @ 0x1C002FF6C (HMAssignmentUnlockWorker.c)
 *     HMDereferenceObject @ 0x1C006259C (HMDereferenceObject.c)
 *     HMUnlockDestroyObject @ 0x1C00733C0 (HMUnlockDestroyObject.c)
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008B990 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C008B9C4 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0102CC4 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectWorker(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) != 1 )
    return a1;
  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
  {
    GetDomainLockRef(12LL, v5, v6);
    v7 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
    if ( !*((_QWORD *)v7 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      AddToDeferredUserCritThreadUnlockList(v7);
    }
  }
  else
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  return 0LL;
}

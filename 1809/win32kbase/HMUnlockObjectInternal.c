/*
 * XREFs of HMUnlockObjectInternal @ 0x1C002FDB0
 * Callers:
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1C002D920 (HMDestroyUnlockedObject.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00324A0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00EB854 (AddToDeferredUserCritSharedThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectInternal(__int64 a1)
{
  char *v2; // rdi
  char v3; // al
  char *v5; // rcx
  tagObjLock *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v3 = v2[25];
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v6);
    v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
    if ( !*((_QWORD *)v5 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      AddToDeferredUserCritSharedThreadUnlockList(v5);
    }
    tagObjLock::UnLock(v6);
  }
  else
  {
    HMDestroyUnlockedObject(v2);
  }
  return 0LL;
}

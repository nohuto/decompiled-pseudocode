/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00AE450
 * Callers:
 *     NtUserWaitMessage @ 0x1C00AE3E0 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01E4460 (xxxWaitMessageEx.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  __int64 v2; // rcx
  bool v3; // bl
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  char v12; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  ULONG64 v15; // rcx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+74h] [rbp+1Ch]
  unsigned __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v19 = a1;
  v20 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  v3 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v2);
  EtwTraceBeginCallback(89LL);
  v4 = KeUserModeCallback(89LL, &v19, 8LL, &v21, &v18);
  EtwTraceEndCallback(89LL);
  if ( v3 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v8) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  v12 = v17;
  if ( (v17 & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 384));
  }
  *(_BYTE *)(v10 + 1480) = v12;
  if ( v4 < 0 || v18 != 24 )
    return 0LL;
  v15 = v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  return *(_QWORD *)v15;
}

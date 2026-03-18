/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C004F270
 * Callers:
 *     NtUserWaitMessage @ 0x1C004F200 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  __int64 v2; // rcx
  bool v3; // bl
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  char v11; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  ULONG64 v14; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+74h] [rbp+1Ch]
  unsigned __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v18 = a1;
  v19 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16);
  v3 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v2);
  EtwTraceBeginCallback(89LL);
  v4 = KeUserModeCallback(89LL, &v18, 8LL, &v20, &v17);
  EtwTraceEndCallback(89LL);
  if ( v3 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5, v7) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v11 = v16;
  if ( (v16 & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v9 + 384));
  }
  *(_BYTE *)(v9 + 1480) = v11;
  if ( v4 < 0 || v17 != 24 )
    return 0LL;
  v14 = v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  return *(_QWORD *)v14;
}

/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C001F750
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  struct _KTHREAD *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // bl
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  char v36; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 result; // rax
  __int128 v42; // [rsp+40h] [rbp-D8h]
  __int64 v43; // [rsp+50h] [rbp-C8h]
  __int64 v44; // [rsp+60h] [rbp-B8h] BYREF
  volatile signed __int32 *v45; // [rsp+68h] [rbp-B0h]
  __int64 v46; // [rsp+70h] [rbp-A8h]
  __int64 v47; // [rsp+78h] [rbp-A0h]
  _QWORD v48[15]; // [rsp+A0h] [rbp-78h] BYREF
  int v49; // [rsp+120h] [rbp+8h] BYREF
  char v50; // [rsp+128h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+130h] [rbp+18h] BYREF

  v8 = a2;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v11 + 464);
  else
    v13 = 0LL;
  memset(v48, 0, 0x50uLL);
  v48[0] = v13;
  LODWORD(v48[1]) = v8;
  v48[2] = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)&v48[3] = *(_OWORD *)a4;
  *(_OWORD *)&v48[5] = *(_OWORD *)(a4 + 16);
  v48[7] = *(_QWORD *)(a4 + 32);
  v48[8] = a5;
  v48[9] = a6;
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v18 )
      v15 = *v18;
  }
  v44 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v44;
  v45 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 472);
  v42 = *(_OWORD *)(v19 + 64);
  v43 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v50);
  v26 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  EtwTraceBeginCallback(17LL);
  v27 = KeUserModeCallback(17LL, v48, 80LL, &v51, &v49);
  EtwTraceEndCallback(17LL);
  if ( v26 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  v36 = v50;
  if ( (v50 & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v31 + 384));
  }
  *(_BYTE *)(v31 + 1464) = v36;
  ThreadUnlock1(v33, v32, v34);
  v39 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v39 + 64) = v42;
  *(_QWORD *)(v39 + 80) = v43;
  if ( v27 < 0 || v49 != 24 )
    return 0LL;
  v40 = (__int64 *)v51;
  if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
    v40 = (__int64 *)MmUserProbeAddress;
  result = *v40;
  v47 = *v40;
  return result;
}

/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C00AE020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00AE3AC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rsi
  struct _KTHREAD *v18; // r15
  __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  char v36; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 result; // rax
  __int128 v42; // [rsp+40h] [rbp-E8h]
  __int64 v43; // [rsp+50h] [rbp-D8h]
  __int64 v44; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v45; // [rsp+68h] [rbp-C0h]
  __int64 v46; // [rsp+70h] [rbp-B8h]
  __int64 v47; // [rsp+80h] [rbp-A8h] BYREF
  int v48; // [rsp+88h] [rbp-A0h]
  int v49; // [rsp+8Ch] [rbp-9Ch]
  __int64 v50; // [rsp+90h] [rbp-98h]
  __int128 v51; // [rsp+98h] [rbp-90h]
  __int128 v52; // [rsp+A8h] [rbp-80h]
  __int64 v53; // [rsp+B8h] [rbp-70h]
  __int64 v54; // [rsp+C0h] [rbp-68h]
  __int64 v55; // [rsp+C8h] [rbp-60h]
  __int64 v56; // [rsp+D0h] [rbp-58h]
  bool v57; // [rsp+130h] [rbp+8h]
  char v58; // [rsp+138h] [rbp+10h] BYREF
  int v59; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v60; // [rsp+148h] [rbp+20h] BYREF

  v8 = a2;
  v49 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v17 = 0LL;
  v49 = 0;
  v47 = v17;
  v48 = v8;
  v50 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v51 = *a4;
  v52 = a4[1];
  v53 = *((_QWORD *)a4 + 4);
  v54 = a5;
  v55 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v20 )
      v19 = *v20;
  }
  v44 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v44;
  v45 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v11 + 472);
  v42 = *(_OWORD *)(v21 + 64);
  v43 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v58);
  v57 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v24);
  EtwTraceBeginCallback(17LL);
  v25 = KeUserModeCallback(17LL, &v47, 80LL, &v60, &v59);
  EtwTraceEndCallback(17LL);
  if ( v57 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v28, v29) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  v36 = v58;
  if ( (v58 & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v31 + 384));
  }
  *(_BYTE *)(v31 + 1480) = v36;
  ThreadUnlock1(v33, v32, v34);
  v39 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v39 + 64) = v42;
  *(_QWORD *)(v39 + 80) = v43;
  if ( v25 < 0 || v59 != 24 )
    return 0LL;
  v40 = (__int64 *)v60;
  if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
    v40 = (__int64 *)MmUserProbeAddress;
  result = *v40;
  v56 = *v40;
  return result;
}

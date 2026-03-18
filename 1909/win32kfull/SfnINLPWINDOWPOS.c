/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1C004EE40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004F1CC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINLPWINDOWPOS(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rsi
  struct _KTHREAD *v17; // r15
  __int64 v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KTHREAD *v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  char v34; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 result; // rax
  __int128 v40; // [rsp+40h] [rbp-E8h]
  __int64 v41; // [rsp+50h] [rbp-D8h]
  __int64 v42; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-C0h]
  __int64 v44; // [rsp+70h] [rbp-B8h]
  __int64 v45; // [rsp+80h] [rbp-A8h] BYREF
  int v46; // [rsp+88h] [rbp-A0h]
  int v47; // [rsp+8Ch] [rbp-9Ch]
  __int64 v48; // [rsp+90h] [rbp-98h]
  __int128 v49; // [rsp+98h] [rbp-90h]
  __int128 v50; // [rsp+A8h] [rbp-80h]
  __int64 v51; // [rsp+B8h] [rbp-70h]
  __int64 v52; // [rsp+C0h] [rbp-68h]
  __int64 v53; // [rsp+C8h] [rbp-60h]
  __int64 v54; // [rsp+D0h] [rbp-58h]
  bool v55; // [rsp+130h] [rbp+8h]
  char v56; // [rsp+138h] [rbp+10h] BYREF
  int v57; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v58; // [rsp+148h] [rbp+20h] BYREF

  v8 = a2;
  v47 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v16 = 0LL;
  v47 = 0;
  v45 = v16;
  v46 = v8;
  v48 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v49 = *a4;
  v50 = a4[1];
  v51 = *((_QWORD *)a4 + 4);
  v52 = a5;
  v53 = a6;
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v19 )
      v18 = *v19;
  }
  v42 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v42;
  v43 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v11 + 472);
  v40 = *(_OWORD *)(v20 + 64);
  v41 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v16;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v56);
  v55 = (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() != 0;
  UserSessionSwitchLeaveCrit(v23);
  EtwTraceBeginCallback(17LL);
  v24 = KeUserModeCallback(17LL, &v45, 80LL, &v58, &v57);
  EtwTraceEndCallback(17LL);
  if ( v55 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v33 )
      v29 = *v33;
  }
  v34 = v56;
  if ( (v56 & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v29 + 384));
  }
  *(_BYTE *)(v29 + 1480) = v34;
  ThreadUnlock1(v31, v30, v32);
  v37 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v37 + 64) = v40;
  *(_QWORD *)(v37 + 80) = v41;
  if ( v24 < 0 || v57 != 24 )
    return 0LL;
  v38 = (__int64 *)v58;
  if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
    v38 = (__int64 *)MmUserProbeAddress;
  result = *v38;
  v54 = *v38;
  return result;
}

/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00DA6F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdi
  struct _KTHREAD *v18; // r15
  __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rbx
  __int64 v25; // rdi
  __int64 *v26; // rax
  char v27; // bl
  char v28; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v31; // rcx
  bool v32; // di
  int v33; // r15d
  int v34; // edx
  __int64 v35; // rcx
  struct _KTHREAD *v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rax
  unsigned int v42; // eax
  tagDomLock *v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  ULONG64 v48; // rcx
  __int128 v49; // xmm3
  __int64 v50; // xmm0_8
  __int128 v52; // [rsp+40h] [rbp-E8h]
  __int64 v53; // [rsp+50h] [rbp-D8h]
  __int64 v54; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v55; // [rsp+68h] [rbp-C0h]
  __int64 v56; // [rsp+70h] [rbp-B8h]
  __int64 v57; // [rsp+80h] [rbp-A8h] BYREF
  int v58; // [rsp+88h] [rbp-A0h]
  int v59; // [rsp+8Ch] [rbp-9Ch]
  __int64 v60; // [rsp+90h] [rbp-98h]
  __int128 v61; // [rsp+98h] [rbp-90h]
  __int128 v62; // [rsp+A8h] [rbp-80h]
  __int64 v63; // [rsp+B8h] [rbp-70h]
  __int64 v64; // [rsp+C0h] [rbp-68h]
  __int64 v65; // [rsp+C8h] [rbp-60h]
  __int64 v66; // [rsp+D0h] [rbp-58h]
  int v67; // [rsp+130h] [rbp+8h] BYREF
  char v68; // [rsp+138h] [rbp+10h]
  unsigned __int64 v69; // [rsp+140h] [rbp+18h] BYREF

  v59 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v13 + 464);
  else
    v17 = 0LL;
  v59 = 0;
  v57 = v17;
  v58 = a2;
  v60 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v61 = *a4;
  v62 = a4[1];
  v63 = *((_QWORD *)a4 + 4);
  v64 = a5;
  v65 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v20 )
      v19 = *v20;
  }
  v54 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v54;
  v55 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v13 + 472);
  v52 = *(_OWORD *)(v21 + 64);
  v53 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation )
  {
    v23 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v24 = KeGetCurrentThread();
  v25 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, gdwInAtomicOperation) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v24);
    if ( v26 )
      v25 = *v26;
  }
  v68 = *(_BYTE *)(v25 + 1480);
  v27 = v68;
  *(_BYTE *)(v25 + 1480) = 0;
  v28 = v27 & 1;
  if ( v28 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v25 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v32 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v31);
  EtwTraceBeginCallback(22LL);
  v33 = KeUserModeCallback(22LL, &v57, 80LL, &v69, &v67);
  EtwTraceEndCallback(22LL);
  if ( v32 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v36 = KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v34) )
  {
    v41 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v41 )
      v37 = *v41;
  }
  if ( v28 )
  {
    v42 = DLT_THREADINFO::getDLT();
    v43 = (tagDomLock *)GetDomainLockRef(v42);
    tagDomLock::LockShared(v43);
    tagObjLock::LockExclusive((tagObjLock *)(v37 + 384));
  }
  *(_BYTE *)(v37 + 1480) = v68;
  ThreadUnlock1(v39, v38, v40);
  v44 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v44 + 64) = v52;
  *(_QWORD *)(v44 + 80) = v53;
  if ( v33 >= 0 && v67 == 24 )
  {
    v45 = (__int64 *)v69;
    if ( v69 + 8 < v69 || v69 + 8 > MmUserProbeAddress )
      v45 = (__int64 *)MmUserProbeAddress;
    v46 = *v45;
    v66 = *v45;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v46;
    v47 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v47 || (*(_DWORD *)(v47 + 84) & 1) == 0 || *(__int128 **)(v47 + 96) != a4 )
    {
      v48 = *(_QWORD *)(v69 + 16);
      if ( v48 + 40 < v48 || v48 + 40 > MmUserProbeAddress )
        v48 = MmUserProbeAddress;
      v49 = *(_OWORD *)(v48 + 16);
      v50 = *(_QWORD *)(v48 + 32);
      *a4 = *(_OWORD *)v48;
      a4[1] = v49;
      *((_QWORD *)a4 + 4) = v50;
      return v46;
    }
  }
  return 0LL;
}

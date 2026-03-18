/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00E9520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned int v10; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rbx
  __int64 v26; // rsi
  __int64 *v27; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // si
  int v35; // r15d
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rax
  unsigned int v42; // eax
  tagObjLock *v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int128 v50; // [rsp+40h] [rbp-C8h]
  __int64 v51; // [rsp+50h] [rbp-B8h]
  _QWORD v52[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int64 v56; // [rsp+A8h] [rbp-60h]
  char v57; // [rsp+110h] [rbp+8h]
  int v58; // [rsp+118h] [rbp+10h]
  int v59; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v60; // [rsp+128h] [rbp+20h] BYREF

  v58 = a2;
  v10 = a2;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v14 + 472);
  else
    v18 = 0LL;
  v52[0] = v18;
  v52[1] = v10;
  v52[2] = a3;
  v52[4] = a5;
  v52[5] = a6;
  v52[3] = *a4;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  v53 = *(_QWORD *)(v20 + 416);
  *(_QWORD *)(v20 + 416) = &v53;
  v54 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v14 + 480);
  v50 = *(_OWORD *)(v22 + 64);
  v51 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v18;
  v23 = 0LL;
  if ( a1 )
    v23 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 480) + 80LL) = v24;
  if ( gdwInAtomicOperation )
  {
    v24 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v25 = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, gdwInAtomicOperation) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(v25);
    if ( v27 )
      v26 = *v27;
  }
  v57 = *(_BYTE *)(v26 + 1456);
  *(_BYTE *)(v26 + 1456) = 0;
  if ( (v57 & 1) != 0 )
  {
    tagObjLock::UnLock((tagObjLock *)(v26 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v34 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  EtwTraceBeginCallback(39LL);
  v35 = KeUserModeCallback(39LL, v52, 48LL, &v60, &v59);
  EtwTraceEndCallback(39LL);
  if ( v34 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v38 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v36) )
  {
    v41 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v41 )
      v13 = *v41;
  }
  if ( (v57 & 1) != 0 )
  {
    v42 = DLT_THREADINFO::getDLT();
    v43 = (tagObjLock *)GetDomainLockRef(v42);
    tagObjLock::LockShared(v43);
    tagObjLock::LockExclusive((tagObjLock *)(v13 + 392));
  }
  *(_BYTE *)(v13 + 1456) = v57;
  ThreadUnlock1(v40, v39);
  v44 = *(_QWORD *)(v14 + 480);
  *(_OWORD *)(v44 + 64) = v50;
  *(_QWORD *)(v44 + 80) = v51;
  if ( v35 >= 0 && v59 == 24 )
  {
    v45 = (__int64 *)v60;
    if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
      v45 = (__int64 *)MmUserProbeAddress;
    v46 = *v45;
    v56 = *v45;
    if ( v58 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v46;
    v47 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v47 || (*(_DWORD *)(v47 + 84) & 1) == 0 || *(_QWORD **)(v47 + 96) != a4 )
    {
      v48 = *(_QWORD **)(v60 + 16);
      if ( v48 + 1 < v48 || (unsigned __int64)(v48 + 1) > MmUserProbeAddress )
        v48 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v48;
      return v46;
    }
  }
  return 0LL;
}

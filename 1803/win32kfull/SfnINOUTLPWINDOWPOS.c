/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00DAFA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  struct _KTHREAD *v16; // r12
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
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
  tagObjLock *DomainLockRef; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  bool v35; // di
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KTHREAD *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // rax
  unsigned int v45; // eax
  tagObjLock *v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  ULONG64 v51; // rcx
  __int128 v52; // xmm1
  __int64 v53; // xmm0_8
  __int128 v55; // [rsp+40h] [rbp-D8h]
  __int64 v56; // [rsp+50h] [rbp-C8h]
  __int64 v57; // [rsp+60h] [rbp-B8h] BYREF
  volatile signed __int32 *v58; // [rsp+68h] [rbp-B0h]
  __int64 v59; // [rsp+70h] [rbp-A8h]
  __int64 v60; // [rsp+78h] [rbp-A0h]
  _QWORD v61[15]; // [rsp+A0h] [rbp-78h] BYREF
  int v62; // [rsp+120h] [rbp+8h] BYREF
  char v63; // [rsp+128h] [rbp+10h]
  unsigned __int64 v64; // [rsp+130h] [rbp+18h] BYREF

  v10 = a2;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v15 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v13 + 464);
  else
    v15 = 0LL;
  memset(v61, 0, 0x50uLL);
  v61[0] = v15;
  LODWORD(v61[1]) = v10;
  v61[2] = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)&v61[3] = *(_OWORD *)a4;
  *(_OWORD *)&v61[5] = *(_OWORD *)(a4 + 16);
  v61[7] = *(_QWORD *)(a4 + 32);
  v61[8] = a5;
  v61[9] = a6;
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v17 = *v20;
  }
  v57 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v57;
  v58 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 472);
  v55 = *(_OWORD *)(v21 + 64);
  v56 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v15;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
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
  v63 = *(_BYTE *)(v25 + 1464);
  v27 = v63;
  *(_BYTE *)(v25 + 1464) = 0;
  v28 = v27 & 1;
  if ( v28 )
  {
    tagObjLock::UnLock((tagObjLock *)(v25 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v35 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v32, v31, v33, v34);
  EtwTraceBeginCallback(22LL);
  v36 = KeUserModeCallback(22LL, v61, 80LL, &v64, &v62);
  EtwTraceEndCallback(22LL);
  if ( v35 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v39 = KeGetCurrentThread();
  v40 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37) )
  {
    v44 = (__int64 *)PsGetThreadWin32Thread(v39);
    if ( v44 )
      v40 = *v44;
  }
  if ( v28 )
  {
    v45 = DLT_THREADINFO::getDLT();
    v46 = (tagObjLock *)GetDomainLockRef(v45);
    tagObjLock::LockShared(v46);
    tagObjLock::LockExclusive((tagObjLock *)(v40 + 384));
  }
  *(_BYTE *)(v40 + 1464) = v63;
  ThreadUnlock1(v42, v41, v43);
  v47 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v47 + 64) = v55;
  *(_QWORD *)(v47 + 80) = v56;
  if ( v36 >= 0 && v62 == 24 )
  {
    v48 = (__int64 *)v64;
    if ( v64 + 8 < v64 || v64 + 8 > MmUserProbeAddress )
      v48 = (__int64 *)MmUserProbeAddress;
    v49 = *v48;
    v60 = *v48;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v49;
    v50 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v50 || (*(_DWORD *)(v50 + 84) & 1) == 0 || *(_QWORD *)(v50 + 96) != a4 )
    {
      v51 = *(_QWORD *)(v64 + 16);
      if ( v51 + 40 < v51 || v51 + 40 > MmUserProbeAddress )
        v51 = MmUserProbeAddress;
      v52 = *(_OWORD *)(v51 + 16);
      v53 = *(_QWORD *)(v51 + 32);
      *(_OWORD *)a4 = *(_OWORD *)v51;
      *(_OWORD *)(a4 + 16) = v52;
      *(_QWORD *)(a4 + 32) = v53;
      return v49;
    }
  }
  return 0LL;
}

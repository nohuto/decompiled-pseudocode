/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00F6E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // r14
  int v15; // edx
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
  tagDomLock *DomainLockRef; // rax
  __int64 v30; // rcx
  bool v31; // si
  int v32; // r15d
  int v33; // edx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *v39; // rax
  unsigned int v40; // eax
  tagDomLock *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int128 v48; // [rsp+40h] [rbp-D8h]
  __int64 v49; // [rsp+50h] [rbp-C8h]
  __int64 v50; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v51; // [rsp+68h] [rbp-B0h]
  __int64 v52; // [rsp+70h] [rbp-A8h]
  __int64 v53; // [rsp+78h] [rbp-A0h] BYREF
  int v54; // [rsp+80h] [rbp-98h]
  int v55; // [rsp+84h] [rbp-94h]
  __int64 v56; // [rsp+88h] [rbp-90h]
  __int64 v57; // [rsp+90h] [rbp-88h]
  __int64 v58; // [rsp+98h] [rbp-80h]
  __int64 v59; // [rsp+A0h] [rbp-78h]
  __int64 v60; // [rsp+A8h] [rbp-70h]
  __int64 v61; // [rsp+B0h] [rbp-68h]
  char v62; // [rsp+120h] [rbp+8h]
  int v64; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v65; // [rsp+138h] [rbp+20h] BYREF

  v12 = 0LL;
  v55 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v14 + 464);
  else
    v18 = 0LL;
  v55 = 0;
  v53 = v18;
  v54 = a2;
  v56 = a3;
  v58 = a5;
  v59 = a6;
  v57 = *a4;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  v50 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v50;
  v51 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v14 + 472);
  v48 = *(_OWORD *)(v22 + 64);
  v49 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v18;
  v23 = 0LL;
  if ( a1 )
    v23 = *a1;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v24;
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
  v62 = *(_BYTE *)(v26 + 1480);
  *(_BYTE *)(v26 + 1480) = 0;
  if ( (v62 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v26 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v31 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v30);
  EtwTraceBeginCallback(39LL);
  v32 = KeUserModeCallback(39LL, &v53, 48LL, &v65, &v64);
  EtwTraceEndCallback(39LL);
  if ( v31 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v35 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v39 )
      v12 = *v39;
  }
  if ( (v62 & 1) != 0 )
  {
    v40 = DLT_THREADINFO::getDLT();
    v41 = (tagDomLock *)GetDomainLockRef(v40);
    tagDomLock::LockShared(v41);
    tagObjLock::LockExclusive((tagObjLock *)(v12 + 384));
  }
  *(_BYTE *)(v12 + 1480) = v62;
  ThreadUnlock1(v37, v36, v38);
  v42 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v42 + 64) = v48;
  *(_QWORD *)(v42 + 80) = v49;
  if ( v32 >= 0 && v64 == 24 )
  {
    v43 = (__int64 *)v65;
    if ( v65 + 8 < v65 || v65 + 8 > MmUserProbeAddress )
      v43 = (__int64 *)MmUserProbeAddress;
    v44 = *v43;
    v60 = *v43;
    if ( a2 != 124 || a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v44;
    v45 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v45 || (*(_DWORD *)(v45 + 84) & 1) == 0 || *(__int64 **)(v45 + 96) != a4 )
    {
      v46 = *(__int64 **)(v65 + 16);
      if ( v46 + 1 < v46 || (unsigned __int64)(v46 + 1) > MmUserProbeAddress )
        v46 = (__int64 *)MmUserProbeAddress;
      v61 = *v46;
      *a4 = v61;
      return v44;
    }
  }
  return 0LL;
}

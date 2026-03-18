/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C0124D50
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C0216FFC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r15
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rbx
  __int64 v23; // rdi
  __int64 *v24; // rax
  char v25; // bl
  char v26; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33; // di
  int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  unsigned int v43; // eax
  tagObjLock *v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 result; // rax
  __int64 v48; // [rsp+30h] [rbp-C8h] BYREF
  volatile signed __int32 *v49; // [rsp+38h] [rbp-C0h]
  __int64 v50; // [rsp+40h] [rbp-B8h]
  __int128 v51; // [rsp+48h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A0h]
  __int64 v53; // [rsp+60h] [rbp-98h]
  _OWORD v54[8]; // [rsp+70h] [rbp-88h] BYREF
  int v55; // [rsp+100h] [rbp+8h] BYREF
  char v56; // [rsp+108h] [rbp+10h]
  unsigned __int64 v57; // [rsp+110h] [rbp+18h] BYREF

  v8 = a2;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
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
  memset(v54, 0, 0x60uLL);
  *(_QWORD *)&v54[0] = v13;
  DWORD2(v54[0]) = v8;
  *(_QWORD *)&v54[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  DWORD2(v54[1]) = a4 != 0;
  if ( a4 )
  {
    v54[3] = *(_OWORD *)a4;
    v54[4] = *(_OWORD *)(a4 + 16);
    v54[5] = *(_OWORD *)(a4 + 32);
  }
  v54[2] = __PAIR128__(a6, a5);
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v18 )
      v17 = *v18;
  }
  v48 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v48;
  v49 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v19 = *(_QWORD *)(v11 + 472);
  v51 = *(_OWORD *)(v19 + 64);
  v52 = *(_QWORD *)(v19 + 80);
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
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, gdwInAtomicOperation) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v24 )
      v23 = *v24;
  }
  v56 = *(_BYTE *)(v23 + 1464);
  v25 = v56;
  *(_BYTE *)(v23 + 1464) = 0;
  v26 = v25 & 1;
  if ( v26 )
  {
    tagObjLock::UnLock((tagObjLock *)(v23 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v33 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  EtwTraceBeginCallback(4LL);
  v34 = KeUserModeCallback(4LL, v54, 96LL, &v57, &v55);
  EtwTraceEndCallback(4LL);
  if ( v33 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v37 = KeGetCurrentThread();
  v38 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v35) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v42 )
      v38 = *v42;
  }
  if ( v26 )
  {
    v43 = DLT_THREADINFO::getDLT();
    v44 = (tagObjLock *)GetDomainLockRef(v43);
    tagObjLock::LockShared(v44);
    tagObjLock::LockExclusive((tagObjLock *)(v38 + 384));
  }
  *(_BYTE *)(v38 + 1464) = v56;
  ThreadUnlock1(v40, v39, v41);
  v45 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v45 + 64) = v51;
  *(_QWORD *)(v45 + 80) = v52;
  if ( v34 < 0 || v55 != 24 )
    return 0LL;
  v46 = (__int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > MmUserProbeAddress )
    v46 = (__int64 *)MmUserProbeAddress;
  result = *v46;
  v53 = *v46;
  return result;
}

/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C01448C0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     _W32ExceptionHandler @ 0x1C0259354 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // r12
  __int64 v18; // rsi
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rbx
  __int64 v24; // rsi
  __int64 *v25; // rax
  char v26; // bl
  char v27; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v30; // rcx
  bool v31; // si
  int v32; // r14d
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
  __int64 result; // rax
  __int64 v45; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v46; // [rsp+38h] [rbp-D0h]
  __int64 v47; // [rsp+40h] [rbp-C8h]
  __int128 v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h]
  _OWORD v51[9]; // [rsp+70h] [rbp-98h] BYREF
  int v52; // [rsp+110h] [rbp+8h] BYREF
  char v53; // [rsp+118h] [rbp+10h]
  unsigned __int64 v54; // [rsp+120h] [rbp+18h] BYREF

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v12 + 464);
  else
    v14 = 0LL;
  memset(v51, 0, 0x60uLL);
  *(_QWORD *)&v51[0] = v14;
  DWORD2(v51[0]) = a2;
  *(_QWORD *)&v51[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  DWORD2(v51[1]) = a4 != 0;
  if ( a4 )
  {
    v51[3] = *(_OWORD *)a4;
    v51[4] = *(_OWORD *)(a4 + 16);
    v51[5] = *(_OWORD *)(a4 + 32);
  }
  v51[2] = __PAIR128__(a6, a5);
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v19 )
      v18 = *v19;
  }
  v45 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v45;
  v46 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v12 + 472);
  v48 = *(_OWORD *)(v20 + 64);
  v49 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v14;
  v21 = 0LL;
  if ( a1 )
    v21 = *a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v23 = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v22, gdwInAtomicOperation) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v25 )
      v24 = *v25;
  }
  v53 = *(_BYTE *)(v24 + 1480);
  v26 = v53;
  *(_BYTE *)(v24 + 1480) = 0;
  v27 = v26 & 1;
  if ( v27 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v24 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v31 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v30);
  EtwTraceBeginCallback(4LL);
  v32 = KeUserModeCallback(4LL, v51, 96LL, &v54, &v52);
  EtwTraceEndCallback(4LL);
  if ( v31 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v35 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v39 )
      v11 = *v39;
  }
  if ( v27 )
  {
    v40 = DLT_THREADINFO::getDLT();
    v41 = (tagDomLock *)GetDomainLockRef(v40);
    tagDomLock::LockShared(v41);
    tagObjLock::LockExclusive((tagObjLock *)(v11 + 384));
  }
  *(_BYTE *)(v11 + 1480) = v53;
  ThreadUnlock1(v37, v36, v38);
  v42 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v42 + 64) = v48;
  *(_QWORD *)(v42 + 80) = v49;
  if ( v32 < 0 || v52 != 24 )
    return 0LL;
  v43 = (__int64 *)v54;
  if ( v54 + 8 < v54 || v54 + 8 > MmUserProbeAddress )
    v43 = (__int64 *)MmUserProbeAddress;
  result = *v43;
  v50 = result;
  return result;
}

/*
 * XREFs of ClientGetMessageMPH @ 0x1C009AD4C
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C009B140 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C009BB20 (NtUserPeekMessage.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _OWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  char v10; // bl
  char v11; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v14; // rcx
  bool v15; // di
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rax
  unsigned int v24; // eax
  tagDomLock *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v33; // [rsp+48h] [rbp-30h] BYREF
  int v34; // [rsp+50h] [rbp-28h]
  int v35; // [rsp+54h] [rbp-24h]
  int v36; // [rsp+58h] [rbp-20h]
  int v37; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v38; // [rsp+88h] [rbp+10h] BYREF

  v6 = a1;
  v33 = a2;
  v34 = a3;
  v35 = a4;
  v36 = a5;
  v37 = a6;
  if ( gdwInAtomicOperation )
  {
    a1 = (_OWORD *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, gdwInAtomicOperation, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  LOBYTE(a5) = *(_BYTE *)(v8 + 1480);
  v10 = a5;
  *(_BYTE *)(v8 + 1480) = 0;
  v11 = v10 & 1;
  if ( v11 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v8 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v15 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v14);
  EtwTraceBeginCallback(73LL);
  v16 = KeUserModeCallback(73LL, &v33, 24LL, &v38, &a6);
  EtwTraceEndCallback(73LL);
  if ( v15 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19, v20) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v23 )
      v22 = *v23;
  }
  if ( v11 )
  {
    v24 = DLT_THREADINFO::getDLT();
    v25 = (tagDomLock *)GetDomainLockRef(v24);
    tagDomLock::LockShared(v25);
    tagObjLock::LockExclusive((tagObjLock *)(v22 + 384));
  }
  *(_BYTE *)(v22 + 1480) = a5;
  if ( v16 < 0 || a6 != 24 )
    return 0LL;
  v26 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v28 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v28 )
  {
    if ( (*(_DWORD *)(v28 + 84) & 1) != 0 && *(_OWORD **)(v28 + 96) == v6 )
      return 0LL;
  }
  v29 = *(_OWORD **)(v38 + 16);
  if ( v29 + 3 < v29 || (unsigned __int64)(v29 + 3) > MmUserProbeAddress )
    v29 = (_OWORD *)MmUserProbeAddress;
  v30 = v29[1];
  v31 = v29[2];
  *v6 = *v29;
  v6[1] = v30;
  v6[2] = v31;
  return (unsigned int)v27;
}

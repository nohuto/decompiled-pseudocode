/*
 * XREFs of ClientGetMessageMPH @ 0x1C003BB1C
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C003BF10 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C003C8F0 (NtUserPeekMessage.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
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
  struct _KTHREAD *v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rax
  unsigned int v23; // eax
  tagDomLock *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v32; // [rsp+48h] [rbp-30h] BYREF
  int v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+54h] [rbp-24h]
  int v35; // [rsp+58h] [rbp-20h]
  int v36; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v37; // [rsp+88h] [rbp+10h] BYREF

  v6 = a1;
  v32 = a2;
  v33 = a3;
  v34 = a4;
  v35 = a5;
  v36 = a6;
  if ( gdwInAtomicOperation )
  {
    a1 = (_OWORD *)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, gdwInAtomicOperation, a3) )
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
  v16 = KeUserModeCallback(73LL, &v32, 24LL, &v37, &a6);
  EtwTraceEndCallback(73LL);
  if ( v15 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v20 = KeGetCurrentThread();
  v21 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v22 )
      v21 = *v22;
  }
  if ( v11 )
  {
    v23 = DLT_THREADINFO::getDLT();
    v24 = (tagDomLock *)GetDomainLockRef(v23);
    tagDomLock::LockShared(v24);
    tagObjLock::LockExclusive((tagObjLock *)(v21 + 384));
  }
  *(_BYTE *)(v21 + 1480) = a5;
  if ( v16 < 0 || a6 != 24 )
    return 0LL;
  v25 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v27 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 84) & 1) != 0 && *(_OWORD **)(v27 + 96) == v6 )
      return 0LL;
  }
  v28 = *(_OWORD **)(v37 + 16);
  if ( v28 + 3 < v28 || (unsigned __int64)(v28 + 3) > MmUserProbeAddress )
    v28 = (_OWORD *)MmUserProbeAddress;
  v29 = v28[1];
  v30 = v28[2];
  *v6 = *v28;
  v6[1] = v29;
  v6[2] = v30;
  return (unsigned int)v26;
}

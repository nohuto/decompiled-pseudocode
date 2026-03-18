/*
 * XREFs of SfnDWORD @ 0x1C002B420
 * Callers:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0103898 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C015C250 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnDWORD(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rsi
  struct _KTHREAD *v18; // r12
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rbx
  __int64 v26; // rsi
  __int64 *v27; // rax
  char v28; // bl
  char v29; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v32; // rcx
  bool v33; // si
  int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _KTHREAD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  unsigned int v43; // eax
  tagDomLock *v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 result; // rax
  __int128 v48; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+80h] [rbp-88h]
  int v55; // [rsp+84h] [rbp-84h]
  __int64 v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  __int64 v60; // [rsp+A8h] [rbp-60h]
  int v61; // [rsp+110h] [rbp+8h] BYREF
  char v62; // [rsp+118h] [rbp+10h]
  unsigned __int64 v63; // [rsp+120h] [rbp+18h] BYREF

  v8 = a2;
  v10 = 0LL;
  v55 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v12 + 464);
  else
    v17 = 0LL;
  v55 = 0;
  v53 = v17;
  v54 = v8;
  v56 = a3;
  v57 = a4;
  v58 = a5;
  v59 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v21 )
      v19 = *v21;
  }
  v50 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v50;
  v51 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v12 + 472);
  v48 = *(_OWORD *)(v22 + 64);
  v49 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v17;
  v23 = 0LL;
  if ( a1 )
    v23 = *a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation )
  {
    v24 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v25 = KeGetCurrentThread();
  v26 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, gdwInAtomicOperation, v20) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(v25);
    if ( v27 )
      v26 = *v27;
  }
  v62 = *(_BYTE *)(v26 + 1480);
  v28 = v62;
  *(_BYTE *)(v26 + 1480) = 0;
  v29 = v28 & 1;
  if ( v29 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v26 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v33 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v32);
  EtwTraceBeginCallback(2LL);
  v34 = KeUserModeCallback(2LL, &v53, 48LL, &v63, &v61);
  EtwTraceEndCallback(2LL);
  if ( v33 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v38 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v35, v37) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v42 )
      v10 = *v42;
  }
  if ( v29 )
  {
    v43 = DLT_THREADINFO::getDLT();
    v44 = (tagDomLock *)GetDomainLockRef(v43);
    tagDomLock::LockShared(v44);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 384));
  }
  *(_BYTE *)(v10 + 1480) = v62;
  ThreadUnlock1(v40, v39, v41);
  v45 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v45 + 64) = v48;
  *(_QWORD *)(v45 + 80) = v49;
  if ( v34 < 0 || v61 != 24 )
    return 0LL;
  v46 = (__int64 *)v63;
  if ( v63 + 8 < v63 || v63 + 8 > MmUserProbeAddress )
    v46 = (__int64 *)MmUserProbeAddress;
  result = *v46;
  v60 = result;
  return result;
}

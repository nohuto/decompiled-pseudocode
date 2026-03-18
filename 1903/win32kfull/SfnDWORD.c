/*
 * XREFs of SfnDWORD @ 0x1C0024FB0
 * Callers:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A0070 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C01287E8 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C015B2A0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
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
  __int64 v16; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rbx
  __int64 v28; // rsi
  __int64 *v29; // rax
  char v30; // bl
  char v31; // bl
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v34; // rcx
  bool v35; // si
  int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KTHREAD *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 *v45; // rax
  unsigned int v46; // eax
  tagDomLock *v47; // rax
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 result; // rax
  __int128 v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 v53; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v54; // [rsp+68h] [rbp-A0h]
  __int64 v55; // [rsp+70h] [rbp-98h]
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  int v57; // [rsp+80h] [rbp-88h]
  int v58; // [rsp+84h] [rbp-84h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-68h]
  __int64 v63; // [rsp+A8h] [rbp-60h]
  int v64; // [rsp+110h] [rbp+8h] BYREF
  char v65; // [rsp+118h] [rbp+10h]
  unsigned __int64 v66; // [rsp+120h] [rbp+18h] BYREF

  v8 = a2;
  v10 = 0LL;
  v58 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = a1[5] - *(_QWORD *)(v12 + 464);
  else
    v18 = 0LL;
  v58 = 0;
  v56 = v18;
  v57 = v8;
  v59 = a3;
  v60 = a4;
  v61 = a5;
  v62 = a6;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15, v16) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v23 )
      v20 = *v23;
  }
  v53 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v53;
  v54 = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = *(_QWORD *)(v12 + 472);
  v51 = *(_OWORD *)(v24 + 64);
  v52 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v18;
  v25 = 0LL;
  if ( a1 )
    v25 = *a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v25;
  if ( a1 )
    v26 = *(_QWORD *)(a1[5] + 224LL);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v26;
  if ( gdwInAtomicOperation )
  {
    v26 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v26, gdwInAtomicOperation, v21, v22) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v29 )
      v28 = *v29;
  }
  v65 = *(_BYTE *)(v28 + 1480);
  v30 = v65;
  *(_BYTE *)(v28 + 1480) = 0;
  v31 = v30 & 1;
  if ( v31 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v28 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v35 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v34);
  EtwTraceBeginCallback(2LL);
  v36 = KeUserModeCallback(2LL, &v56, 48LL, &v66, &v64);
  EtwTraceEndCallback(2LL);
  if ( v35 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v41 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37, v39, v40) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v45 )
      v10 = *v45;
  }
  if ( v31 )
  {
    v46 = DLT_THREADINFO::getDLT();
    v47 = (tagDomLock *)GetDomainLockRef(v46);
    tagDomLock::LockShared(v47);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 384));
  }
  *(_BYTE *)(v10 + 1480) = v65;
  ThreadUnlock1(v43, v42, v44);
  v48 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v48 + 64) = v51;
  *(_QWORD *)(v48 + 80) = v52;
  if ( v36 < 0 || v64 != 24 )
    return 0LL;
  v49 = (__int64 *)v66;
  if ( v66 + 8 < v66 || v66 + 8 > MmUserProbeAddress )
    v49 = (__int64 *)MmUserProbeAddress;
  result = *v49;
  v63 = result;
  return result;
}

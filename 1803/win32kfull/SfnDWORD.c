/*
 * XREFs of SfnDWORD @ 0x1C0043660
 * Callers:
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00431F0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00FC468 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0133AF0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnDWORD(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rsi
  struct _KTHREAD *v17; // r12
  __int64 v18; // r15
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
  __int64 v41; // r8
  __int64 *v42; // rax
  unsigned int v43; // eax
  tagObjLock *v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 result; // rax
  __int128 v48; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  _QWORD v50[7]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+110h] [rbp+8h] BYREF
  char v56; // [rsp+118h] [rbp+10h]
  unsigned __int64 v57; // [rsp+120h] [rbp+18h] BYREF

  v8 = a2;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
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
    v16 = *((_QWORD *)a1 + 5) - *(_QWORD *)(v12 + 464);
  else
    v16 = 0LL;
  v50[0] = v16;
  v50[1] = v8;
  v50[2] = a3;
  v50[3] = a4;
  v50[4] = a5;
  v50[5] = a6;
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v19 )
      v18 = *v19;
  }
  v51 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v51;
  v52 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v20 = *(_QWORD *)(v12 + 472);
  v48 = *(_OWORD *)(v20 + 64);
  v49 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v16;
  v21 = 0LL;
  if ( a1 )
    v21 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
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
  v56 = *(_BYTE *)(v24 + 1464);
  v26 = v56;
  *(_BYTE *)(v24 + 1464) = 0;
  v27 = v26 & 1;
  if ( v27 )
  {
    tagObjLock::UnLock((tagObjLock *)(v24 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v34 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  EtwTraceBeginCallback(2LL);
  v35 = KeUserModeCallback(2LL, v50, 48LL, &v57, &v55);
  EtwTraceEndCallback(2LL);
  if ( v34 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v38 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v37, v36) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v42 )
      v11 = *v42;
  }
  if ( v27 )
  {
    v43 = DLT_THREADINFO::getDLT();
    v44 = (tagObjLock *)GetDomainLockRef(v43);
    tagObjLock::LockShared(v44);
    tagObjLock::LockExclusive((tagObjLock *)(v11 + 384));
  }
  *(_BYTE *)(v11 + 1464) = v56;
  ThreadUnlock1(v40, v39, v41);
  v45 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v45 + 64) = v48;
  *(_QWORD *)(v45 + 80) = v49;
  if ( v35 < 0 || v55 != 24 )
    return 0LL;
  v46 = (__int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > MmUserProbeAddress )
    v46 = (__int64 *)MmUserProbeAddress;
  result = *v46;
  v54 = result;
  return result;
}

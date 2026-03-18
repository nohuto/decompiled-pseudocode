/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C001B828 (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     xxxFocusSetInputContext @ 0x1C0132D68 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  char v5; // bl
  int v7; // r12d
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  ULONG_PTR v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // [rsp+28h] [rbp-49h] BYREF
  __int64 v40; // [rsp+30h] [rbp-41h]
  __int64 v41; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR v42; // [rsp+40h] [rbp-31h]
  __int64 v43; // [rsp+48h] [rbp-29h]
  __int64 v44; // [rsp+50h] [rbp-21h] BYREF
  __int64 v45; // [rsp+58h] [rbp-19h]
  __int64 v46; // [rsp+60h] [rbp-11h]
  _QWORD v47[3]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v48[9]; // [rsp+80h] [rbp+Fh] BYREF
  char v50; // [rsp+E8h] [rbp+77h]

  v50 = a3;
  v3 = a2;
  v44 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v5 = a3;
  v46 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v7 = 0;
  v43 = 0LL;
  memset(v48, 0, 24);
  memset(v47, 0, sizeof(v47));
  result = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(result + 128) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v48, a3);
  v9 = *(_DWORD *)(a1 + 480);
  if ( (v9 & 0x200) == 0 )
  {
    v7 = 1;
    *(_DWORD *)(a1 + 480) = v9 | 0x200;
  }
  v10 = *(_QWORD *)(a1 + 424);
  v11 = *(_QWORD *)(v10 + 112);
  if ( v11 )
  {
    v44 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v44;
    v45 = v11;
    HMLockObject(v11);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 112LL));
    ThreadUnlock1(v32, v31, v33);
    SetWakeBit(a1, 2u);
    v10 = *(_QWORD *)(a1 + 424);
  }
  v12 = *(_QWORD *)(v10 + 128);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    LockW32Thread(v13, v47, a3);
    v41 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v41;
    v42 = v12;
    HMLockObject(v12);
    if ( (v50 & 1) == 0 && !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v12, 0LL, 0LL) )
    {
      ThreadUnlock1(v15, v14, v16);
      result = PopAndFreeW32ThreadLock((__int64)v47, v34, v35);
      goto LABEL_28;
    }
    xxxSendMessage(v12);
    v17 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v17 + 128) == v12 )
    {
      v40 = *(_QWORD *)(v17 + 128);
      v39 = v17 + 136;
      HMAssignmentLock(&v39);
      CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>((__int64)&v39);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 128LL);
    }
    SetOrClrWF(0, v12, 0x40u, 1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x25u, *(_QWORD *)v12);
    ThreadUnlock1(v19, v18, v20);
    v23 = *(_DWORD *)(v13 + 480) & 1;
    v24 = v13;
    if ( v23 )
      v24 = 0LL;
    v39 = v24;
    PopAndFreeW32ThreadLock((__int64)v47, v21, v22);
    v4 = 0LL;
    v25 = v23 == 0;
    v26 = 0LL;
    v5 = v50;
    if ( v25 )
      v26 = v13;
    v3 = a2;
  }
  else
  {
    v12 = -1LL;
    v39 = a1;
    v26 = a1;
  }
  if ( v26 )
  {
    v40 = v3;
    xxxSendActivateAppMessage((const struct tagAAS *)&v39);
  }
  result = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(result + 128) != v12 )
    goto LABEL_21;
  v41 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v41;
  v42 = v12;
  HMLockObject(v12);
  if ( (v5 & 1) != 0 || anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v12, 0LL, 0LL) )
  {
    xxxSendMessage(v12);
    ThreadUnlock1(v37, v36, v38);
    result = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(result + 128) == v12 )
    {
      v40 = *(_QWORD *)(result + 128);
      v39 = result + 136;
      HMAssignmentLock(&v39);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 128LL);
      result = *(_QWORD *)(a1 + 424);
    }
LABEL_21:
    if ( !*(_QWORD *)(result + 120) )
      goto LABEL_28;
    result = HMAssignmentUnlock(result + 120);
    v27 = (__int64 *)result;
    if ( !result )
      goto LABEL_28;
    v41 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v41;
    v42 = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent((__int64)v27, 8);
    xxxSendMessage((ULONG_PTR)v27);
    v30 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v27, 0, 0LL);
  }
  result = ThreadUnlock1(v30, v28, v29);
LABEL_28:
  if ( v7 )
    *(_DWORD *)(a1 + 480) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock((__int64)v48, v4, a3);
  return result;
}

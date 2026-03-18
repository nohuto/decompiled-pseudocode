/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxFocusSetInputContext @ 0x1C0014208 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C001B100 (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r13d
  char v4; // bl
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // [rsp+28h] [rbp-49h] BYREF
  __int64 v36; // [rsp+30h] [rbp-41h]
  __int64 v37; // [rsp+38h] [rbp-39h] BYREF
  __int64 v38; // [rsp+40h] [rbp-31h]
  __int64 v39; // [rsp+48h] [rbp-29h]
  __int64 v40; // [rsp+50h] [rbp-21h] BYREF
  __int64 v41; // [rsp+58h] [rbp-19h]
  __int64 v42; // [rsp+60h] [rbp-11h]
  _QWORD v43[3]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v44[9]; // [rsp+80h] [rbp+Fh] BYREF

  v3 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v4 = a3;
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v6 = 0;
  v39 = 0LL;
  memset(v44, 0, 24);
  memset(v43, 0, sizeof(v43));
  result = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(result + 128) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v44);
  v8 = *(_DWORD *)(a1 + 480);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 480) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(a1 + 424);
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    v40 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v40;
    v41 = v10;
    HMLockObject(v10);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 112LL), 31LL, 0LL, 0LL);
    ThreadUnlock1(v30, v29, v31);
    SetWakeBit(a1, 2LL);
    v9 = *(_QWORD *)(a1 + 424);
  }
  v11 = *(_QWORD *)(v9 + 128);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, v43);
    v37 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v37;
    v38 = v11;
    HMLockObject(v11);
    v13 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) << 16;
    if ( (a3 & 1) == 0 && !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11) )
    {
      ThreadUnlock1(v15, v14, v16);
      result = PopAndFreeW32ThreadLock(v43);
      goto LABEL_28;
    }
    xxxSendMessage(v11, 6LL, v13, 0LL);
    v17 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v17 + 128) == v11 )
    {
      v36 = *(_QWORD *)(v17 + 128);
      v35 = v17 + 136;
      HMAssignmentLock(&v35);
      CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(&v35);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 128LL);
    }
    SetOrClrWF(0LL, v11, 64LL, 1LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 37LL, *(_QWORD *)v11);
    ThreadUnlock1(v19, v18, v20);
    v21 = *(_DWORD *)(v12 + 480) & 1;
    v22 = v12;
    if ( v21 )
      v22 = 0LL;
    v35 = v22;
    PopAndFreeW32ThreadLock(v43);
    v23 = v21 == 0;
    v24 = 0LL;
    v4 = a3;
    if ( v23 )
      v24 = v12;
    v3 = a2;
  }
  else
  {
    v11 = -1LL;
    v35 = a1;
    v24 = a1;
  }
  if ( v24 )
  {
    v36 = v3;
    xxxSendActivateAppMessage((const struct tagAAS *)&v35);
  }
  result = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(result + 128) != v11 )
    goto LABEL_21;
  v37 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v37;
  v38 = v11;
  HMLockObject(v11);
  if ( (v4 & 1) != 0 || (unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11) )
  {
    xxxSendMessage(v11, 6LL, 0LL, 0LL);
    ThreadUnlock1(v33, v32, v34);
    result = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(result + 128) == v11 )
    {
      v36 = *(_QWORD *)(result + 128);
      v35 = result + 136;
      HMAssignmentLock(&v35);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 128LL);
      result = *(_QWORD *)(a1 + 424);
    }
LABEL_21:
    if ( !*(_QWORD *)(result + 120) )
      goto LABEL_28;
    result = HMAssignmentUnlock(result + 120);
    v25 = result;
    if ( !result )
      goto LABEL_28;
    v37 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v37;
    v38 = result;
    HMLockObject(result);
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent(v25, 8LL);
    xxxSendMessage(v25, 8LL, 0LL, 0LL);
    v28 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v25, 0LL, 0LL);
  }
  result = ThreadUnlock1(v28, v26, v27);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 480) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(v44);
  return result;
}

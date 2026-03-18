/*
 * XREFs of xxxDeactivate @ 0x1C0057EE8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C005EEB8 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  int v4; // r14d
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONG_PTR v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  ULONG_PTR v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // [rsp+28h] [rbp-99h] BYREF
  int v37; // [rsp+30h] [rbp-91h]
  int v38; // [rsp+34h] [rbp-8Dh]
  __int64 v39; // [rsp+38h] [rbp-89h] BYREF
  ULONG_PTR v40; // [rsp+40h] [rbp-81h]
  __int128 v41; // [rsp+58h] [rbp-69h]
  __int128 v42; // [rsp+68h] [rbp-59h]
  __int128 v43; // [rsp+78h] [rbp-49h] BYREF
  __int128 v44; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v45[3]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v46[24]; // [rsp+B0h] [rbp-11h] BYREF
  _QWORD v47[3]; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v48[24]; // [rsp+E0h] [rbp+1Fh] BYREF

  v4 = a2;
  v6 = 0;
  result = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(result + 120) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v48);
  v8 = *(_DWORD *)(a1 + 480);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 480) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(a1 + 424);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    v45[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v45;
    v45[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 104LL));
    ThreadUnlock1(v31, v30, v32);
    SetWakeBit(a1, 2u);
    v9 = *(_QWORD *)(a1 + 424);
  }
  v11 = *(_QWORD *)(v9 + 120);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, v46);
    v39 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v39;
    v40 = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( (a3 & 1) == 0 && !xxxSendMessage(v11) )
    {
      ThreadUnlock1(v14, v13, v15);
      result = PopAndFreeW32ThreadLock(v46);
      goto LABEL_28;
    }
    xxxSendMessage(v11);
    v16 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v16 + 120) == v11 )
    {
      *((_QWORD *)&v41 + 1) = *(_QWORD *)(v16 + 120);
      *(_QWORD *)&v41 = v16 + 128;
      v43 = v41;
      HMAssignmentLock(&v43);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 120LL);
    }
    SetOrClrWF(0LL, v11, 64LL, 1LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 37LL, *(_QWORD *)v11);
    ThreadUnlock1(v18, v17, v19);
    if ( (*(_BYTE *)(v12 + 480) & 1) != 0 )
      v12 = 0LL;
    v36 = v12;
    PopAndFreeW32ThreadLock(v46);
    v20 = v12;
    v4 = a2;
  }
  else
  {
    v11 = -1LL;
    v36 = a1;
    v20 = a1;
  }
  if ( v20 )
  {
    v38 &= 0xFFFFFFFC;
    v21 = *(_QWORD *)(a1 + 448);
    v37 = v4;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) + 88LL);
    v47[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v47;
    v47[1] = v22;
    if ( v22 )
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL) + 88LL),
      xxxActivateApp,
      &v36,
      2LL);
    ThreadUnlock1(v24, v23, v25);
  }
  result = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(result + 120) != v11 )
    goto LABEL_21;
  v39 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v39;
  v40 = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (a3 & 1) != 0 || xxxSendMessage(v11) )
  {
    xxxSendMessage(v11);
    ThreadUnlock1(v34, v33, v35);
    result = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(result + 120) == v11 )
    {
      *((_QWORD *)&v42 + 1) = *(_QWORD *)(result + 120);
      *(_QWORD *)&v42 = result + 128;
      v44 = v42;
      HMAssignmentLock(&v44);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 424) + 120LL);
      result = *(_QWORD *)(a1 + 424);
    }
LABEL_21:
    if ( !*(_QWORD *)(result + 112) )
      goto LABEL_28;
    result = HMAssignmentUnlock(result + 112);
    v26 = result;
    if ( !result )
      goto LABEL_28;
    v39 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v39;
    v40 = result;
    _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent(result, 8LL);
    xxxSendMessage(v26);
    v29 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v26, 0LL, 0LL);
  }
  result = ThreadUnlock1(v29, v27, v28);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 480) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(v48);
  return result;
}

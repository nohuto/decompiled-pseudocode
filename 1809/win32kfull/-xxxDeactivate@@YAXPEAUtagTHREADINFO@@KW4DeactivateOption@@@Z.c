/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxFocusSetInputContext @ 0x1C00CE6AC (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebx
  int v6; // r15d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  ULONG_PTR v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+28h] [rbp-79h] BYREF
  int v32; // [rsp+30h] [rbp-71h]
  int v33; // [rsp+34h] [rbp-6Dh]
  __int128 v34; // [rsp+38h] [rbp-69h]
  __int64 v35; // [rsp+48h] [rbp-59h] BYREF
  ULONG_PTR v36; // [rsp+50h] [rbp-51h]
  __int128 v37; // [rsp+68h] [rbp-39h] BYREF
  __int128 v38; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v39[3]; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v40[3]; // [rsp+A0h] [rbp-1h] BYREF
  _QWORD v41[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v42; // [rsp+110h] [rbp+6Fh]

  v42 = a2;
  v4 = a2;
  v6 = 0;
  result = *(_QWORD *)(a1 + 432);
  if ( !*(_QWORD *)(result + 120) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v41);
  v8 = *(_DWORD *)(a1 + 488);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 488) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(a1 + 432);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    v39[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v39;
    v39[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL));
    ThreadUnlock1(v27, v26);
    SetWakeBit(a1, 2u);
    v9 = *(_QWORD *)(a1 + 432);
  }
  v11 = *(_QWORD *)(v9 + 120);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, v40);
    v35 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v35;
    v36 = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( (a3 & 1) == 0 && !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL) )
    {
      ThreadUnlock1(v14, v13);
      result = PopAndFreeW32ThreadLock((__int64)v40, v28);
      goto LABEL_27;
    }
    xxxSendMessage(v11);
    v15 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v15 + 120) == v11 )
    {
      *((_QWORD *)&v34 + 1) = *(_QWORD *)(v15 + 120);
      *(_QWORD *)&v34 = v15 + 128;
      v37 = v34;
      HMAssignmentLock(&v37);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
    }
    SetOrClrWF(0, v11, 0x40u, 1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 37LL, *(_QWORD *)v11);
    ThreadUnlock1(v17, v16);
    v19 = *(_DWORD *)(v12 + 488) & 1;
    v20 = v12;
    if ( v19 )
      v20 = 0LL;
    v31 = v20;
    PopAndFreeW32ThreadLock((__int64)v40, v18);
    v21 = v19 == 0;
    v22 = 0LL;
    v4 = v42;
    if ( v21 )
      v22 = v12;
  }
  else
  {
    v11 = -1LL;
    v31 = a1;
    v22 = a1;
  }
  if ( v22 )
  {
    v33 &= 0xFFFFFFFC;
    v32 = v4;
    xxxSendActivateAppMessage((const struct tagAAS *)&v31);
  }
  result = *(_QWORD *)(a1 + 432);
  if ( *(_QWORD *)(result + 120) != v11 )
    goto LABEL_20;
  v35 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v35;
  v36 = v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (a3 & 1) != 0 || anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL) )
  {
    xxxSendMessage(v11);
    ThreadUnlock1(v30, v29);
    result = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(result + 120) == v11 )
    {
      *((_QWORD *)&v34 + 1) = *(_QWORD *)(result + 120);
      *(_QWORD *)&v34 = result + 128;
      v38 = v34;
      HMAssignmentLock(&v38);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 432) + 120LL);
      result = *(_QWORD *)(a1 + 432);
    }
LABEL_20:
    if ( !*(_QWORD *)(result + 112) )
      goto LABEL_27;
    result = HMAssignmentUnlock(result + 112);
    v23 = result;
    if ( !result )
      goto LABEL_27;
    v35 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v35;
    v36 = result;
    _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(result, 8LL);
    xxxSendMessage(v23);
    v25 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v23, 0LL, 0LL);
  }
  result = ThreadUnlock1(v25, v24);
LABEL_27:
  if ( v6 )
    *(_DWORD *)(a1 + 488) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock((__int64)v41, a2);
  return result;
}

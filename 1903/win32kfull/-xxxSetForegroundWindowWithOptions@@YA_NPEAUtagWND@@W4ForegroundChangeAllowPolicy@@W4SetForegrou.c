/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0009F40 (xxxSwitchToThisWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C01308F0 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01353F0 (NtUserSetForegroundWindowForApplication.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023DAE4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     IsImmersiveBandOrShellManaged @ 0x1C00115A0 (IsImmersiveBandOrShellManaged.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0018B84 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     WPP_RECORDER_SF_s @ 0x1C0019388 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     _GhostWindowFromHungWindow @ 0x1C0094354 (_GhostWindowFromHungWindow.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D0C3C (WPP_RECORDER_SF_qqq.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C013D894 (DSW_GetTopLevelCreatorWindow.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  bool v4; // r14
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rsi
  bool v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r9d
  const char *v15; // rax
  const char *v16; // rax
  bool v17; // al
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 ThreadWin32Thread; // rax
  char v29; // [rsp+48h] [rbp-39h]
  int v30; // [rsp+4Ch] [rbp-35h]
  __int64 v31; // [rsp+50h] [rbp-31h]
  int CanSetForegroundWindow; // [rsp+58h] [rbp-29h]
  __int64 v33; // [rsp+60h] [rbp-21h]
  __int64 v34; // [rsp+68h] [rbp-19h] BYREF
  __int64 v35; // [rsp+70h] [rbp-11h]
  __int64 v36; // [rsp+78h] [rbp-9h]
  __int64 v37; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v38; // [rsp+88h] [rbp+7h]
  __int64 v39; // [rsp+90h] [rbp+Fh]
  bool v40; // [rsp+E8h] [rbp+67h]
  char v42; // [rsp+F8h] [rbp+77h]

  v42 = a3;
  v4 = 0;
  v40 = 0;
  v5 = 1;
  v6 = a1;
  v29 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  v8 = v7 == gpqForeground;
  v30 = a3 & 0x1000;
  v9 = gptiCurrent;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = GhostWindowFromHungWindow();
  if ( v33 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v6 = v33;
    v34 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
    v35 = v33;
    HMLockObject(v33);
  }
  if ( v7 == gpqForeground )
  {
    v13 = *(_QWORD *)(gptiCurrent + 424LL);
    v31 = v13;
    v40 = gpqForeground == v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v13, v10, 2, 39, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = "Synchronously";
        if ( gpqForeground != v31 )
          v16 = "Async";
        WPP_RECORDER_SF_s(
          v31,
          (unsigned int)"Async",
          2,
          40,
          (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
          (__int64)v16);
      }
    }
    goto LABEL_20;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v6, (_WORD *)a2, v11, v12);
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = "Removed";
      if ( v30 )
        v15 = "Preserved";
      WPP_RECORDER_SF_s(
        (unsigned int)"Preserved",
        v10,
        2,
        41,
        (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
        (__int64)v15);
    }
    if ( !v30 )
      anonymous_namespace_::RemoveForegroundActivate(v13, v10, v11, v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v13, v10, 2, 42, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    if ( (unsigned int)xxxSetForegroundWindow2((struct tagWND *)v6, gptiCurrent, v42 & 0x7F) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      v10 = grpdeskRitInput;
      if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
      {
        v11 = *(_QWORD *)(v6 + 40);
        if ( *(char *)(v11 + 19) >= 0
          && !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
          && *(_DWORD *)(v11 + 236) != 15
          && (unsigned int)IsImmersiveBandOrShellManaged(v6, v10) )
        {
          NonChildAncestor = GetNonChildAncestor(v6);
          TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *TopLevelCreatorWindow);
        }
      }
    }
LABEL_20:
    v17 = v40;
    goto LABEL_21;
  }
  v29 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v6 )
      v21 = *(_QWORD *)(v6 + 16);
    else
      LOBYTE(v21) = 0;
    WPP_RECORDER_SF_qqq(
      v13,
      v10,
      2,
      43,
      (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
      gptiCurrent,
      v6,
      v21);
    v9 = gptiCurrent;
  }
  if ( (a4 & 1) != 0 )
  {
    v22 = GetNonChildAncestor(v6);
    v23 = (__int64 *)DSW_GetTopLevelCreatorWindow(v22);
    if ( !(unsigned int)IsTrayWindow(v23) )
      v23 = (__int64 *)v6;
    if ( *(_DWORD *)(v23[5] + 236) != 15 )
    {
      if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)v23, v10) )
      {
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *v23);
      }
      else
      {
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        v24 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v37 = *(_QWORD *)(v24 + 408);
        *(_QWORD *)(v24 + 408) = &v37;
        v38 = v23;
        HMLockObject(v23);
        UPDWORDPointer(8196LL);
        xxxFlashWindow((ULONG_PTR)v23);
        ThreadUnlock1(v26, v25, v27);
      }
    }
  }
  if ( CanSetForegroundWindow == 1 )
    goto LABEL_20;
  v8 = 1;
  v13 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
  if ( *(_QWORD *)(v9 + 424) == v13 )
  {
LABEL_32:
    LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0xC0;
    if ( (_BYTE)v13 != 64 && (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v6) )
      goto LABEL_24;
    v4 = 0;
    goto LABEL_25;
  }
  v17 = 0;
LABEL_21:
  if ( !v8 )
    goto LABEL_25;
  if ( v17 )
    goto LABEL_32;
  v13 = *(_QWORD *)(v6 + 16);
  v10 = *(_QWORD *)(v13 + 424);
  if ( v6 == *(_QWORD *)(v10 + 128) )
  {
LABEL_24:
    v4 = 1;
    goto LABEL_25;
  }
  v4 = (unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v13, 0, 0LL, *(_QWORD *)v6, 0LL) != 0;
LABEL_25:
  if ( v33 )
    ThreadUnlock1(v13, v10, v11);
  if ( !v29 || !v4 )
    return 0;
  return v5;
}

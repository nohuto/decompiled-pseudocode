/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0009F30 (xxxSwitchToThisWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C010B440 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C0137850 (NtUserSetForegroundWindowForApplication.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023D4C4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     _GhostWindowFromHungWindow @ 0x1C0035084 (_GhostWindowFromHungWindow.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     WPP_RECORDER_SF_s @ 0x1C01342A8 (WPP_RECORDER_SF_s.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0134BF0 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C0137768 (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0137820 (DSW_GetTopLevelCreatorWindow.c)
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
  int v13; // r15d
  __int64 v14; // rcx
  const char *v15; // rax
  const char *v16; // rax
  bool v17; // al
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 ThreadWin32Thread; // rax
  char v32; // [rsp+48h] [rbp-39h]
  int v33; // [rsp+4Ch] [rbp-35h]
  __int64 v34; // [rsp+50h] [rbp-31h]
  int CanSetForegroundWindow; // [rsp+58h] [rbp-29h]
  __int64 v36; // [rsp+60h] [rbp-21h]
  __int64 v37; // [rsp+68h] [rbp-19h] BYREF
  __int64 v38; // [rsp+70h] [rbp-11h]
  __int64 v39; // [rsp+78h] [rbp-9h]
  __int64 v40; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v41; // [rsp+88h] [rbp+7h]
  __int64 v42; // [rsp+90h] [rbp+Fh]
  bool v43; // [rsp+E8h] [rbp+67h]
  char v45; // [rsp+F8h] [rbp+77h]

  v45 = a3;
  v4 = 0;
  v43 = 0;
  v5 = 1;
  v6 = a1;
  v32 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  v8 = v7 == gpqForeground;
  v33 = a3 & 0x1000;
  v9 = gptiCurrent;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v36 = GhostWindowFromHungWindow(a1);
  if ( v36 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
    v6 = v36;
    v37 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v37;
    v38 = v36;
    HMLockObject(v36);
  }
  if ( v7 == gpqForeground )
  {
    v14 = *(_QWORD *)(gptiCurrent + 424LL);
    v34 = v14;
    v43 = gpqForeground == v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v14, v10, 2, 39, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = "Synchronously";
        if ( gpqForeground != v34 )
          v16 = "Async";
        WPP_RECORDER_SF_s(
          v34,
          (unsigned int)"Async",
          2,
          40,
          (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
          (__int64)v16);
      }
    }
    goto LABEL_20;
  }
  v13 = 2;
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v6, (_WORD *)a2, v11, v12);
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = "Removed";
      if ( v33 )
        v15 = "Preserved";
      WPP_RECORDER_SF_s(
        (unsigned int)"Preserved",
        v10,
        2,
        41,
        (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
        (__int64)v15);
    }
    if ( !v33 )
      anonymous_namespace_::RemoveForegroundActivate();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v14, v10, 2, 42, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
    }
    if ( (unsigned int)xxxSetForegroundWindow2(v6, gptiCurrent, v45 & 0x7F) )
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
          && !IAMThreadAccessGranted(gptiCurrent)
          && *(_DWORD *)(v11 + 236) != 15
          && (unsigned int)IsImmersiveBandOrShellManaged(v6) )
        {
          NonChildAncestor = GetNonChildAncestor(v6);
          TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *TopLevelCreatorWindow);
        }
      }
    }
LABEL_20:
    v17 = v43;
    goto LABEL_21;
  }
  v32 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v6 )
      v21 = *(_QWORD *)(v6 + 16);
    else
      v21 = 0LL;
    WPP_RECORDER_SF_qqq(
      v14,
      v10,
      2u,
      0x2Bu,
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
    {
      v23 = (__int64 *)v6;
      v13 = 3;
    }
    if ( *(_DWORD *)(v23[5] + 236) != 15 )
    {
      if ( (unsigned int)IsImmersiveBandOrShellManaged(v23) )
      {
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x22u, *v23);
      }
      else
      {
        v40 = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25);
        v40 = *(_QWORD *)(v26 + 408);
        *(_QWORD *)(v26 + 408) = &v40;
        v41 = v23;
        HMLockObject(v23);
        v27 = (_DWORD *)UPDWORDPointer(8196LL);
        xxxFlashWindow((unsigned __int64 *)v23, v13 | ((unsigned __int16)*v27 << 16) | 0xC, 0);
        ThreadUnlock1(v29, v28, v30);
      }
    }
  }
  if ( CanSetForegroundWindow == 1 )
    goto LABEL_20;
  v8 = 1;
  v14 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
  if ( *(_QWORD *)(v9 + 424) == v14 )
  {
LABEL_32:
    LOBYTE(v14) = *(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0xC0;
    if ( (_BYTE)v14 != 64 && anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v6, 0, 128) )
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
  v14 = *(_QWORD *)(v6 + 16);
  v10 = *(_QWORD *)(v14 + 424);
  if ( v6 == *(_QWORD *)(v10 + 128) )
  {
LABEL_24:
    v4 = 1;
    goto LABEL_25;
  }
  v4 = (unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v14, v10, 6u, 0LL, 0, 0LL, *(_QWORD *)v6, 0LL) != 0;
LABEL_25:
  if ( v36 )
    ThreadUnlock1(v14, v10, v11);
  if ( !v32 || !v4 )
    return 0;
  return v5;
}

/*
 * XREFs of xxxShowWindowEx @ 0x1C006B634
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserShowWindow @ 0x1C006D4B0 (NtUserShowWindow.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     xxxShowScrollBar @ 0x1C0112974 (xxxShowScrollBar.c)
 *     xxxShowWindow @ 0x1C011E440 (xxxShowWindow.c)
 *     xxxProcessShowWindowEvent @ 0x1C0135430 (xxxProcessShowWindowEvent.c)
 *     xxxSetInternalWindowPos @ 0x1C01E2320 (xxxSetInternalWindowPos.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxbFullscreenSwitch @ 0x1C01F7184 (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C001BAC0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00B81EC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxSendSizeMessage @ 0x1C00BC968 (xxxSendSizeMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     _FChildVisible @ 0x1C0102B1C (_FChildVisible.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0117ADC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C02221F4 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0225B1C (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

__int64 __fastcall xxxShowWindowEx(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, unsigned int a3)
{
  _BYTE *v5; // rdx
  int v6; // esi
  int v8; // r8d
  char v9; // cl
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // r10
  char v13; // dl
  int v14; // r13d
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // esi
  struct tagWND *v20; // rdx
  int v22; // esi
  bool v23; // r8
  __int64 v24; // rax
  char v25; // cl
  unsigned int v26; // r8d
  __int64 v27; // r9
  unsigned __int16 v28; // dx
  __int64 v29; // r8
  int v30; // edx
  bool v31; // al
  int v32; // edi
  int v33; // edi
  struct tagRECT *v34; // [rsp+28h] [rbp-41h]
  int v35; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-15h] BYREF
  _BYTE v37[8]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v38; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp+7h] BYREF

  v5 = *(_BYTE **)(BugCheckParameter2 + 40);
  v6 = 3;
  v8 = 0;
  v9 = v5[31];
  v10 = v9 & 0x10 | v5[25] & 8;
  v11 = gptiCurrent;
  *(_QWORD *)&v38 = gptiCurrent;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v12 + 808) & 1) != 0
    && (v9 & 0xC0) != 0x40
    && (v5[30] & 0xC0) == 0xC0
    && !*(_QWORD *)(BugCheckParameter2 + 96) )
  {
    v8 = 1;
    if ( a2 == 1 || a2 == 5 )
      a2 = 10;
  }
  if ( a2 == 10 )
  {
    if ( (*(_DWORD *)(v12 + 808) & 1) != 0 )
    {
      a2 = *(_BYTE *)(v12 + 812);
      v8 = 1;
      if ( a2 != 10 )
        goto LABEL_60;
    }
    a2 = 1;
  }
  if ( v8 )
  {
LABEL_60:
    *(_DWORD *)(v12 + 808) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent((struct tagWND *const)BugCheckParameter2);
    v5 = *(_BYTE **)(BugCheckParameter2 + 40);
  }
  v13 = v5[23] & 7;
  if ( v13 && *(_QWORD *)(BugCheckParameter2 + 24) == grpdeskRitInput && ((a2 - 1) & 0xF5) == 0 && a2 != 11 )
  {
    a2 = 2;
    if ( v13 == 4 )
    {
      SetOrClrWF(0, BugCheckParameter2, 0x707u, 1);
      SetOrClrWF(1, BugCheckParameter2, 0x701u, 1);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == BugCheckParameter2 )
      xxxMakeWindowForegroundWithState(0LL, 0LL);
  }
  v14 = 0;
  if ( IsWindowSubjectToShellWindowBehavior((struct tagWND *)BugCheckParameter2, 1LL) )
  {
    v14 = 1;
    if ( a2 > 7u )
    {
      if ( a2 > 9u )
        goto LABEL_6;
    }
    else if ( a2 == 7 || !a2 || a2 != 1 && (a2 <= 2u || a2 > 5u) )
    {
      goto LABEL_6;
    }
    v31 = CallShell::xxxShowWindowPolicyHandler(
            (CallShell *)BugCheckParameter2,
            (struct tagWND *)a2,
            (unsigned int)&v36,
            (enum SHELL_SPECIFIED_SHOW_COMMAND *)&v35,
            (struct WINDOW_GROUP_ID *)&v39,
            v34);
    v14 = v31;
    if ( !v31 )
    {
LABEL_87:
      v11 = v38;
      goto LABEL_6;
    }
    if ( (_WORD)v36 )
    {
      switch ( (unsigned __int16)v36 )
      {
        case 1u:
          goto LABEL_91;
        case 2u:
          a2 = (unsigned __int8)(a2 - 7) <= 1u ? 17 : 3;
          goto LABEL_98;
        case 3u:
          if ( !xxxEndSetWindowArrangement(
                  (struct tagWND *)BugCheckParameter2,
                  &v39,
                  0LL,
                  (unsigned __int8)(a2 - 7) <= 1u) )
          {
            v14 = 0;
            goto LABEL_98;
          }
          goto LABEL_91;
      }
      if ( (unsigned __int16)v36 != 4 )
      {
        v14 = 0;
LABEL_86:
        *(_DWORD *)(BugCheckParameter2 + 308) &= ~4u;
        goto LABEL_87;
      }
      if ( v35
        && !*(_DWORD *)(BugCheckParameter2 + 292)
        && (int)WindowGroupingWindowManagement::SetWindowGroup(&v35, BugCheckParameter2, 1LL, 0LL) >= 0 )
      {
LABEL_91:
        a2 = -1;
      }
    }
    else if ( v35 && !*(_DWORD *)(BugCheckParameter2 + 292) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v37);
      WindowGroupingWindowManagement::SetWindowGroup(&v35, BugCheckParameter2, 0LL, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v37);
    }
LABEL_98:
    if ( v14 && (v36 & 0x10000) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 308) |= 4u;
      goto LABEL_87;
    }
    goto LABEL_86;
  }
LABEL_6:
  if ( a2 == 0xFF )
    return v10;
  v16 = 128;
  if ( v14 && (unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(BugCheckParameter2 + 24), 16) )
  {
    a3 |= v16;
    v6 = 2097155;
  }
  v17 = a2;
  v18 = v6;
  if ( a2 == 8 )
  {
    v19 = v6 | 0x50;
    goto LABEL_18;
  }
  if ( a2 > 8u )
  {
    switch ( a2 )
    {
      case 9u:
        goto LABEL_43;
      case 0xBu:
        xxxMinimizeHungWindow((struct tagWND *)BugCheckParameter2);
        return v10;
      case 0x11u:
        v33 = a3 | 0xC0;
        break;
      case 0x12u:
        v32 = a3 | 0xC0;
        goto LABEL_112;
      case 0x13u:
        v33 = a3 | 0x1C0;
        break;
      case 0x14u:
        v32 = a3 | 0x1C0;
LABEL_112:
        v26 = v32;
        LODWORD(v17) = 9;
        goto LABEL_54;
      default:
        goto LABEL_110;
    }
    v26 = v33;
    LODWORD(v17) = 3;
    goto LABEL_54;
  }
  if ( !a2 )
  {
    if ( !v10 )
      return v10;
    v22 = 148;
    if ( BugCheckParameter2 == *(_QWORD *)(*(_QWORD *)(v11 + 432) + 120LL) )
      v22 = v16;
    v19 = v18 | v22;
    goto LABEL_18;
  }
  if ( a2 == 1 )
    goto LABEL_43;
  if ( a2 <= 1u )
    goto LABEL_110;
  if ( a2 <= 3u )
  {
LABEL_53:
    v26 = a3;
    goto LABEL_54;
  }
  if ( a2 == 4 )
  {
LABEL_43:
    v24 = *(_QWORD *)(BugCheckParameter2 + 40);
    v25 = *(_BYTE *)(v24 + 233) & 3;
    if ( (*(_BYTE *)(v24 + 31) & 0x21) == 0 && !v25 )
    {
      if ( v10 )
        return v10;
      v19 = v6 | 0x40;
      if ( a2 == 4 )
        v19 |= 0x14u;
      goto LABEL_18;
    }
    v26 = a3 | (v25 != 0 ? 4 : 0);
LABEL_54:
    xxxShowWindowViaMinMax((struct tagWND *)BugCheckParameter2, v17, v26);
    return v10;
  }
  if ( a2 != 5 )
  {
    if ( a2 <= 7u )
      goto LABEL_53;
LABEL_110:
    UserSetLastError(1449LL);
    return v10;
  }
  if ( v10 )
    return v10;
  v19 = v6 | 0x40;
LABEL_18:
  if ( (a2 != 0) != v10 )
  {
    xxxSendMessage(BugCheckParameter2);
    if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 21LL) & 1) == 0 )
      xxxSendMessage(BugCheckParameter2);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 112) + 8LL) + 9LL) & 8) == 0 || ((a2 - 1) & 0xFB) != 0 )
      goto LABEL_23;
    xxxActivateWindow((struct tagWND *)BugCheckParameter2);
  }
  v19 |= 0x14u;
LABEL_23:
  if ( (unsigned int)FChildVisible(BugCheckParameter2, v17, v15) )
  {
    xxxSetWindowPos((struct tagWND *)BugCheckParameter2, 0, 0, v19);
    if ( (v19 & 0x200000) != 0 )
    {
      LOBYTE(v20) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)BugCheckParameter2, v20, v23);
    }
  }
  else
  {
    SetVisible((struct tagWND *)BugCheckParameter2);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 16LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, BugCheckParameter2, 0x10u, 1);
    xxxSendSizeMessage(BugCheckParameter2);
    v27 = *(_QWORD *)(BugCheckParameter2 + 80);
    v38 = *(_OWORD *)(*(_QWORD *)(v27 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(&v38, &v38, BugCheckParameter2, v27);
    if ( *(_QWORD *)(BugCheckParameter2 + 80) == GetDesktopWindow(BugCheckParameter2) )
      v30 = *(unsigned __int16 *)(v29 + 104) | (v28 << 16);
    else
      v30 = (unsigned __int16)(*(_WORD *)(v29 + 104) - v38) | ((unsigned __int16)(v28 - WORD2(v38)) << 16);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 3u, 0LL, v30, 0, 0, 0LL, 1, 0);
  }
  if ( !a2 )
  {
    if ( *(_QWORD *)(v11 + 432) == gpqForeground && BugCheckParameter2 == *(_QWORD *)(gpqForeground + 120LL) )
      xxxActivateWindowWithOptions(BugCheckParameter2, 2LL, 61LL, 1LL);
    else
      xxxMoveFocusAway((const struct tagWND *)BugCheckParameter2, (__int64)v20);
  }
  return v10;
}

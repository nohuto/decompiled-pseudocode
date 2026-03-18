/*
 * XREFs of xxxShowWindowEx @ 0x1C0075774
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     xxxShowWindow @ 0x1C0073948 (xxxShowWindow.c)
 *     NtUserShowWindow @ 0x1C0075690 (NtUserShowWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowScrollBar @ 0x1C00FAB0C (xxxShowScrollBar.c)
 *     xxxProcessShowWindowEvent @ 0x1C0111D1C (xxxProcessShowWindowEvent.c)
 *     xxxSetInternalWindowPos @ 0x1C01BF838 (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C01D27FC (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0065C9C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     xxxCheckFocus @ 0x1C0071E7C (xxxCheckFocus.c)
 *     _FChildVisible @ 0x1C0075BA0 (_FChildVisible.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00BC9A4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxSendSizeMessage @ 0x1C00E98E8 (xxxSendSizeMessage.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01A5444 (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD0B8 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, int a3)
{
  int v3; // r13d
  _BYTE *v5; // rdx
  int v8; // r14d
  __int64 v9; // r8
  char v10; // cl
  unsigned int v11; // edi
  __int64 v12; // r12
  __int64 v13; // r10
  char v14; // dl
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // cl
  int v25; // r8d
  __int64 v26; // r9
  unsigned __int16 v27; // dx
  __int64 v28; // r8
  int v29; // edx
  int v30; // eax
  int v31; // eax
  char v32; // si
  char v33; // si
  int v34; // [rsp+50h] [rbp-19h] BYREF
  int v35; // [rsp+54h] [rbp-15h] BYREF
  _BYTE v36[8]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v37; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v8 = 3;
  v9 = 0LL;
  v10 = v5[31];
  v11 = v10 & 0x10 | v5[25] & 8;
  v12 = gptiCurrent;
  *(_QWORD *)&v37 = gptiCurrent;
  v13 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(v13 + 800) & 1) != 0 && (v10 & 0xC0) != 0x40 && (v5[30] & 0xC0) == 0xC0 && !*((_QWORD *)a1 + 12) )
  {
    v9 = 1LL;
    if ( a2 == 1 || a2 == 5 )
      a2 = 10;
  }
  if ( a2 == 10 )
  {
    if ( (*(_DWORD *)(v13 + 800) & 1) != 0 )
    {
      a2 = *(_BYTE *)(v13 + 804);
      v9 = 1LL;
      if ( a2 != 10 )
        goto LABEL_62;
    }
    a2 = 1;
  }
  if ( (_DWORD)v9 )
  {
LABEL_62:
    *(_DWORD *)(v13 + 800) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  }
  v14 = v5[23] & 7;
  if ( v14 && *((_QWORD *)a1 + 3) == grpdeskRitInput && ((a2 - 1) & 0xF5) == 0 && a2 != 11 )
  {
    a2 = 2;
    if ( v14 == 4 )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1793LL, 1LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 1LL, v9) )
  {
    v3 = 1;
    if ( a2 > 7u )
    {
      if ( a2 < 8u || a2 > 9u )
        goto LABEL_6;
    }
    else if ( a2 == 7 || !a2 || a2 != 1 && (a2 <= 2u || a2 > 5u) )
    {
      goto LABEL_6;
    }
    v3 = xxxCallIAMShowWindowPolicyHandler((_DWORD)a1, a2, (unsigned int)&v35, (unsigned int)&v34, (__int64)&v38);
    if ( v3 )
    {
      switch ( v35 )
      {
        case 0:
          if ( v34 && !*((_DWORD *)a1 + 70) )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
            WindowGroupingWindowManagement::SetWindowGroup(&v34, a1, 0LL, 0LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
          }
          goto LABEL_98;
        case 1:
          a2 = -1;
          goto LABEL_98;
        case 2:
          a2 = (unsigned __int8)(a2 - 7) <= 1u ? 17 : 3;
          goto LABEL_98;
        case 3:
          v31 = xxxEndSetWindowArrangement(a1, &v38);
          v12 = v37;
          if ( !v31 )
          {
            v3 = 0;
            goto LABEL_6;
          }
          break;
        case 4:
          if ( !v34 || *((_DWORD *)a1 + 70) )
            goto LABEL_98;
          v30 = WindowGroupingWindowManagement::SetWindowGroup(&v34, a1, 1LL, 0LL);
          v12 = v37;
          if ( v30 < 0 )
            goto LABEL_6;
          break;
        default:
          v3 = 0;
          goto LABEL_98;
      }
      a2 = -1;
      goto LABEL_6;
    }
LABEL_98:
    v12 = v37;
  }
LABEL_6:
  if ( a2 == 0xFF )
    return v11;
  v16 = 128;
  if ( v3 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16) )
  {
    a3 |= v16;
    v8 = 2097155;
  }
  v17 = a2;
  if ( a2 == 8 )
  {
    v18 = v8 | 0x50;
    goto LABEL_18;
  }
  if ( a2 > 8u )
  {
    switch ( a2 )
    {
      case 9u:
        goto LABEL_36;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v11;
      case 0x11u:
        v33 = a3 | 0xC0;
        break;
      case 0x12u:
        v32 = a3 | 0xC0;
        goto LABEL_110;
      case 0x13u:
        v33 = a3 | 0xC0;
        break;
      case 0x14u:
        v32 = a3 | 0xC0;
LABEL_110:
        LOBYTE(v25) = v32;
        v17 = 9LL;
        goto LABEL_52;
      default:
        goto LABEL_108;
    }
    LOBYTE(v25) = v33;
    v17 = 3LL;
    goto LABEL_52;
  }
  if ( !a2 )
  {
    if ( !v11 )
      return v11;
    v17 = v16 | (unsigned int)v8;
    v18 = v17 | 0x14;
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(v12 + 424) + 120LL) )
      v18 = v17;
    goto LABEL_18;
  }
  if ( a2 == 1 )
    goto LABEL_36;
  if ( a2 <= 1u )
    goto LABEL_108;
  if ( a2 <= 3u )
  {
LABEL_51:
    LOBYTE(v25) = a3;
    goto LABEL_52;
  }
  if ( a2 == 4 )
  {
LABEL_36:
    v23 = *((_QWORD *)a1 + 5);
    v24 = *(_BYTE *)(v23 + 233) & 3;
    if ( (*(_BYTE *)(v23 + 31) & 0x21) == 0 && !v24 )
    {
      if ( v11 )
        return v11;
      v18 = v8 | 0x40;
      if ( a2 == 4 )
        v18 |= 0x14u;
      goto LABEL_18;
    }
    v25 = a3 | (v24 != 0 ? 4 : 0);
LABEL_52:
    xxxShowWindowViaMinMax(a1, v17, v25);
    return v11;
  }
  if ( a2 != 5 )
  {
    if ( a2 <= 7u )
      goto LABEL_51;
LABEL_108:
    UserSetLastError(1449LL, a2);
    return v11;
  }
  if ( v11 )
    return v11;
  v18 = v8 | 0x40;
LABEL_18:
  if ( (a2 != 0) != v11 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
      xxxSendMessage((ULONG_PTR)a1);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 9LL) & 8) == 0 || ((a2 - 1) & 0xFB) != 0 )
      goto LABEL_23;
    xxxActivateWindow(a1, 1, v15);
  }
  v18 |= 0x14u;
LABEL_23:
  if ( (unsigned int)FChildVisible(a1, v17, v15) )
  {
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v18);
    if ( (v18 & 0x200000) != 0 )
      xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
  }
  else
  {
    SetVisible(a1);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 16LL, 1LL);
    xxxSendSizeMessage((ULONG_PTR)a1);
    v26 = *((_QWORD *)a1 + 10);
    v37 = *(_OWORD *)(*(_QWORD *)(v26 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(&v37, &v37, a1, v26);
    if ( *((_QWORD *)a1 + 10) == GetDesktopWindow((__int64)a1) )
      v29 = *(unsigned __int16 *)(v28 + 104) | (v27 << 16);
    else
      v29 = (unsigned __int16)(*(_WORD *)(v28 + 104) - v37) | ((unsigned __int16)(v27 - WORD2(v37)) << 16);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((__int64 *)a1, 3u, 0LL, v29, 0, 0, 0LL, 1, 0);
  }
  if ( !a2 )
  {
    v22 = *(_QWORD *)(v12 + 424);
    if ( a1 == *(struct tagWND **)(v22 + 120) && v22 == gpqForeground )
      xxxActivateWindow(a1, 3, v20);
    else
      xxxCheckFocus((__int64)a1, v19, v20);
  }
  return v11;
}

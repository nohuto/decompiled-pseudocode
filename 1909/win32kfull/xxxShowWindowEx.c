/*
 * XREFs of xxxShowWindowEx @ 0x1C002372C
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxShowWindow @ 0x1C00225BC (xxxShowWindow.c)
 *     NtUserShowWindow @ 0x1C00235C0 (NtUserShowWindow.c)
 *     xxxShowScrollBar @ 0x1C00F6D14 (xxxShowScrollBar.c)
 *     xxxProcessShowWindowEvent @ 0x1C011A840 (xxxProcessShowWindowEvent.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C020D218 (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendSizeMessage @ 0x1C0011098 (xxxSendSizeMessage.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0013264 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0023B6C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     _FChildVisible @ 0x1C0024018 (_FChildVisible.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C003AF40 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E9454 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0135A44 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, int a3)
{
  _BYTE *v5; // rdx
  int v6; // esi
  int v8; // r8d
  unsigned int v9; // ebp
  __int64 v10; // r10
  char v11; // dl
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 ShellShowWindowAction; // r14
  int v15; // r10d
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r9
  int v19; // esi
  int v20; // eax
  __int64 v21; // rdi
  int v23; // esi
  struct tagWND *v24; // rdx
  bool v25; // r8
  __int64 v26; // rax
  char v27; // cl
  int v28; // r8d
  __int64 v29; // r9
  char v30; // di
  char v31; // di
  int v32; // [rsp+50h] [rbp-58h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h] BYREF

  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 3;
  v8 = 0;
  v32 = 0;
  v9 = v5[31] & 0x10 | v5[25] & 8;
  v10 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(v10 + 800) & 1) != 0 && (v5[31] & 0xC0) != 0x40 && (v5[30] & 0xC0) == 0xC0 && !*((_QWORD *)a1 + 15) )
  {
    v8 = 1;
    if ( a2 == 1 || a2 == 5 )
      a2 = 10;
  }
  if ( a2 == 10 )
  {
    if ( (*(_DWORD *)(v10 + 800) & 1) != 0 )
    {
      a2 = *(_BYTE *)(v10 + 804);
      v8 = 1;
      if ( a2 != 10 )
        goto LABEL_60;
    }
    a2 = 1;
  }
  if ( v8 )
  {
LABEL_60:
    *(_DWORD *)(v10 + 800) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  }
  v11 = v5[23] & 7;
  if ( v11 && *((_QWORD *)a1 + 3) == grpdeskRitInput && ((a2 - 1) & 0xF5) == 0 && a2 != 11 )
  {
    a2 = 2;
    if ( v11 == 4 )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1793LL, 1LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 128LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  ShellShowWindowAction = xxxGetShellShowWindowAction(a1, a2, &v32);
  if ( ShellShowWindowAction != 0xFF )
  {
    v15 = 128;
    if ( v32 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16LL, v12, v13) )
    {
      a3 |= v15;
      v6 = 2097155;
    }
    v16 = ShellShowWindowAction;
    v17 = v6;
    v18 = 9LL;
    if ( ShellShowWindowAction == 8 )
    {
      v19 = v6 | 0x50;
      goto LABEL_17;
    }
    if ( ShellShowWindowAction <= 8u )
    {
      if ( !ShellShowWindowAction )
      {
        if ( !v9 )
          return v9;
        v23 = 148;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
          v23 = v15;
        v19 = v17 | v23;
        goto LABEL_17;
      }
      if ( ShellShowWindowAction != 1 )
      {
        if ( ShellShowWindowAction <= 1u )
          goto LABEL_80;
        if ( ShellShowWindowAction <= 3u )
        {
LABEL_58:
          LOBYTE(v28) = a3;
          goto LABEL_59;
        }
        if ( ShellShowWindowAction != 4 )
        {
          if ( ShellShowWindowAction == 5 )
          {
            if ( v9 )
              return v9;
            v19 = v6 | 0x40;
LABEL_17:
            if ( ShellShowWindowAction )
            {
              v20 = 1;
              v21 = 1LL;
            }
            else
            {
              v20 = 0;
              v21 = 0LL;
            }
            if ( v20 != v9 )
            {
              xxxSendMessage(a1, 24LL, v21, 0LL);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
                xxxSendMessage(a1, 9LL, v21, 0LL);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) == 0
                || ((ShellShowWindowAction - 1) & 0xFB) != 0 )
              {
                goto LABEL_24;
              }
              xxxActivateWindow(a1);
            }
            v19 |= 0x14u;
LABEL_24:
            if ( (unsigned int)FChildVisible(a1, v16, v12, v18) )
            {
              xxxSetWindowPos(a1, 0, 0, v19);
              if ( (v19 & 0x200000) != 0 )
              {
                LOBYTE(v24) = 1;
                NotifyShell::TrackedWindowPosChanged(a1, v24, v25);
              }
            }
            else
            {
              SetVisible(a1);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
            {
              SetOrClrWF(0LL, a1, 16LL, 1LL);
              xxxSendSizeMessage((ULONG_PTR)a1);
              v29 = *((_QWORD *)a1 + 13);
              v33 = *(_OWORD *)(*(_QWORD *)(v29 + 40) + 104LL);
              TransformRectBetweenCoordinateSpaces(&v33, &v33, a1, v29);
              GetDesktopWindow(a1);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
            }
            if ( !ShellShowWindowAction )
            {
              if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 128LL) )
                xxxActivateWindowWithOptions(a1, 2LL, 61LL, 1LL);
              else
                xxxMoveFocusAway(a1);
            }
            return v9;
          }
          if ( ShellShowWindowAction <= 7u )
            goto LABEL_58;
LABEL_80:
          UserSetLastError(1449LL);
          return v9;
        }
      }
LABEL_40:
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_BYTE *)(v26 + 233) & 3;
      if ( (*(_BYTE *)(v26 + 31) & 0x21) == 0 && !v27 )
      {
        if ( v9 )
          return v9;
        v19 = v6 | 0x40;
        if ( ShellShowWindowAction == 4 )
          v19 |= 0x14u;
        goto LABEL_17;
      }
      v28 = a3 | (v27 != 0 ? 4 : 0);
LABEL_59:
      xxxShowWindowViaMinMax(a1, v16, v28);
      return v9;
    }
    switch ( ShellShowWindowAction )
    {
      case 9u:
        goto LABEL_40;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v9;
      case 0x11u:
        v31 = a3 | 0xC0;
        break;
      case 0x12u:
        v30 = a3 | 0xC0;
        goto LABEL_82;
      case 0x13u:
        v31 = a3 | 0xC0;
        break;
      case 0x14u:
        v30 = a3 | 0xC0;
LABEL_82:
        LOBYTE(v28) = v30;
        v16 = 9LL;
        goto LABEL_59;
      default:
        goto LABEL_80;
    }
    LOBYTE(v28) = v31;
    v16 = 3LL;
    goto LABEL_59;
  }
  return v9;
}

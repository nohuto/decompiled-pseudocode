/*
 * XREFs of xxxShowWindowEx @ 0x1C002E00C
 * Callers:
 *     xxxShowWindow @ 0x1C002CA38 (xxxShowWindow.c)
 *     NtUserShowWindow @ 0x1C002DEA0 (NtUserShowWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxShowScrollBar @ 0x1C011D284 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     xxxProcessShowWindowEvent @ 0x1C0140330 (xxxProcessShowWindowEvent.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F8664 (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C020D4C8 (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C002E44C (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     _FChildVisible @ 0x1C002E8F8 (_FChildVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0084194 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSendSizeMessage @ 0x1C0091C40 (xxxSendSizeMessage.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C009A170 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C010F0D4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01184B0 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, unsigned int a3)
{
  _BYTE *v5; // rdx
  int v6; // esi
  int v8; // r8d
  unsigned int v9; // ebp
  __int64 v10; // r10
  char v11; // dl
  __int64 v12; // r8
  unsigned __int8 ShellShowWindowAction; // r14
  int v14; // r10d
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r9
  int v18; // esi
  int v19; // eax
  __int64 v20; // rdi
  int v22; // esi
  struct tagWND *v23; // rdx
  bool v24; // r8
  __int64 v25; // rax
  char v26; // cl
  unsigned int v27; // r8d
  __int64 v28; // r9
  int v29; // edi
  int v30; // edi
  int v31; // [rsp+50h] [rbp-58h] BYREF
  __int128 v32; // [rsp+58h] [rbp-50h] BYREF

  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 3;
  v8 = 0;
  v31 = 0;
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
  ShellShowWindowAction = xxxGetShellShowWindowAction(a1, a2, &v31);
  if ( ShellShowWindowAction != 0xFF )
  {
    v14 = 128;
    if ( v31 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16LL) )
    {
      a3 |= v14;
      v6 = 2097155;
    }
    v15 = ShellShowWindowAction;
    v16 = v6;
    v17 = 9LL;
    if ( ShellShowWindowAction == 8 )
    {
      v18 = v6 | 0x50;
      goto LABEL_17;
    }
    if ( ShellShowWindowAction <= 8u )
    {
      if ( !ShellShowWindowAction )
      {
        if ( !v9 )
          return v9;
        v22 = 148;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
          v22 = v14;
        v18 = v16 | v22;
        goto LABEL_17;
      }
      if ( ShellShowWindowAction != 1 )
      {
        if ( ShellShowWindowAction <= 1u )
          goto LABEL_80;
        if ( ShellShowWindowAction <= 3u )
        {
LABEL_58:
          v27 = a3;
          goto LABEL_59;
        }
        if ( ShellShowWindowAction != 4 )
        {
          if ( ShellShowWindowAction == 5 )
          {
            if ( v9 )
              return v9;
            v18 = v6 | 0x40;
LABEL_17:
            if ( ShellShowWindowAction )
            {
              v19 = 1;
              v20 = 1LL;
            }
            else
            {
              v19 = 0;
              v20 = 0LL;
            }
            if ( v19 != v9 )
            {
              xxxSendMessage(a1, 24LL, v20, 0LL);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
                xxxSendMessage(a1, 9LL, v20, 0LL);
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
            v18 |= 0x14u;
LABEL_24:
            if ( (unsigned int)FChildVisible(a1, v15, v12, v17) )
            {
              xxxSetWindowPos(a1, 0, 0, v18);
              if ( (v18 & 0x200000) != 0 )
              {
                LOBYTE(v23) = 1;
                NotifyShell::TrackedWindowPosChanged(a1, v23, v24);
              }
            }
            else
            {
              SetVisible(a1, ShellShowWindowAction != 0);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
            {
              SetOrClrWF(0LL, a1, 16LL, 1LL);
              xxxSendSizeMessage((ULONG_PTR)a1);
              v28 = *((_QWORD *)a1 + 13);
              v32 = *(_OWORD *)(*(_QWORD *)(v28 + 40) + 104LL);
              TransformRectBetweenCoordinateSpaces(&v32, &v32, a1, v28);
              GetDesktopWindow(a1);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
            }
            if ( !ShellShowWindowAction )
            {
              if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 128LL) )
                xxxActivateWindowWithOptions((__int64)a1, 2LL, 61LL, 1);
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
      v25 = *((_QWORD *)a1 + 5);
      v26 = *(_BYTE *)(v25 + 233) & 3;
      if ( (*(_BYTE *)(v25 + 31) & 0x21) == 0 && !v26 )
      {
        if ( v9 )
          return v9;
        v18 = v6 | 0x40;
        if ( ShellShowWindowAction == 4 )
          v18 |= 0x14u;
        goto LABEL_17;
      }
      v27 = a3 | (v26 != 0 ? 4 : 0);
LABEL_59:
      xxxShowWindowViaMinMax(a1, v15, v27);
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
        v30 = a3 | 0xC0;
        break;
      case 0x12u:
        v29 = a3 | 0xC0;
        goto LABEL_82;
      case 0x13u:
        v30 = a3 | 0x1C0;
        break;
      case 0x14u:
        v29 = a3 | 0x1C0;
LABEL_82:
        v27 = v29;
        LODWORD(v15) = 9;
        goto LABEL_59;
      default:
        goto LABEL_80;
    }
    v27 = v30;
    LODWORD(v15) = 3;
    goto LABEL_59;
  }
  return v9;
}

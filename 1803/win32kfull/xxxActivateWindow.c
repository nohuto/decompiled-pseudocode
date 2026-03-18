/*
 * XREFs of xxxActivateWindow @ 0x1C006D170
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C006B6AC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxSetActiveWindow @ 0x1C0100E20 (xxxSetActiveWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC (-GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActiva.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C006B654 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     FBadWindow @ 0x1C006BF08 (FBadWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00FB434 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, int a2, __int64 a3)
{
  struct tagWND *v4; // rbx
  char v5; // r13
  unsigned int v6; // r15d
  BOOL v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 WindowForActivation; // rax
  struct tagWND *ImmersiveRealmFallbackWindow; // rax
  __int64 v17; // r15
  char v18; // si
  struct tagWND *v19; // r12
  struct tagWND *TopWindow; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // ecx
  struct tagWND **v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v5 = 2;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
  }
  else
  {
    a2 = 5;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      if ( a2 == 3 )
        goto LABEL_10;
      if ( a2 != 4 )
      {
        if ( a2 != 5 )
        {
          if ( a2 != 6 )
            return 0LL;
          v5 = 3;
          goto LABEL_4;
        }
        goto LABEL_11;
      }
      v5 = 3;
    }
    if ( !(unsigned int)FBadWindow((__int64)a1) )
      goto LABEL_44;
LABEL_10:
    if ( (((*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0
      && !(unsigned int)FBadWindow(*((_QWORD *)v4 + 12)) )
    {
      v4 = (struct tagWND *)*((_QWORD *)v4 + 12);
      goto LABEL_44;
    }
LABEL_11:
    WindowForActivation = WindowGroupingWindowManagement::GetWindowForActivation((__int64)v4);
    if ( WindowForActivation )
    {
      v4 = (struct tagWND *)WindowForActivation;
      v8 = 1LL;
      goto LABEL_4;
    }
    ImmersiveRealmFallbackWindow = GetImmersiveRealmFallbackWindow(v4);
    if ( ImmersiveRealmFallbackWindow )
    {
      v4 = ImmersiveRealmFallbackWindow;
    }
    else
    {
      if ( !gpqForegroundPrev
        || (unsigned int)FBadWindow(*(_QWORD *)(gpqForegroundPrev + 128LL))
        || (v27 = *(_QWORD *)(gpqForegroundPrev + 128LL), v28 = *(_QWORD *)(v27 + 40),
                                                          (*(_BYTE *)(v28 + 20) & 0x20) != 0)
        || (*(_BYTE *)(v28 + 31) & 0x20) != 0
        || (unsigned int)SkipWindowOnMonitor(v27) )
      {
        v17 = (__int64)v4;
        v18 = 6;
        if ( a2 != 3 )
          v4 = 0LL;
        v19 = v4;
        while ( 1 )
        {
          TopWindow = NextTopWindow(gptiCurrent, v17, v19, v18);
          v4 = TopWindow;
          if ( TopWindow )
            break;
          if ( (v18 & 2) == 0 )
            return 0LL;
          v18 &= ~2u;
        }
        v25 = (struct tagWND **)((char *)TopWindow + 184);
        v26 = FBadWindow(*((_QWORD *)TopWindow + 23));
        v6 = 0;
        v8 = 0LL;
        if ( !v26 )
          v4 = *v25;
        goto LABEL_4;
      }
      v4 = *(struct tagWND **)(gpqForegroundPrev + 128LL);
    }
LABEL_44:
    v8 = 0LL;
  }
LABEL_4:
  if ( !v4 )
    return 0LL;
  v29[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v29;
  v29[1] = v4;
  _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*((_QWORD *)v4 + 2) + 424LL) == v9 )
  {
    if ( !FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 424LL), v4) )
    {
      v10 = xxxActivateThisWindow(v4, 0, v5, 0);
      ThreadUnlock1(v12, v11, v13);
      return v10;
    }
    v7 = *(_DWORD *)(gptiCurrent + 888LL) == 0;
    goto LABEL_26;
  }
  if ( (_DWORD)v8 )
  {
    *(_DWORD *)(gptiCurrent + 1200LL) |= 0x40u;
LABEL_26:
    v22 = *(_QWORD *)(gptiCurrent + 448LL);
    if ( v22 && v4 == *(struct tagWND **)(v22 + 296) && a2 == 3 )
      *(_DWORD *)(gptiCurrent + 1200LL) |= 0x40u;
    if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40) == 0 )
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
    v23 = xxxSetForegroundWindow(v4);
    v24 = *(_DWORD *)(gptiCurrent + 480LL);
    v6 = v23;
    if ( v7 )
      v21 = v24 | 0x20u;
    else
      v21 = v24 & 0xFFFFFFDF;
    *(_DWORD *)(gptiCurrent + 480LL) = v21;
    goto LABEL_33;
  }
  v21 = gpqForeground;
  if ( gpqForeground == v9 || !gpqForeground )
  {
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 888LL) || (v7 = 0, a2 == 1) )
      v7 = 1;
    goto LABEL_26;
  }
LABEL_33:
  ThreadUnlock1(v21, v8, a3);
  return v6;
}

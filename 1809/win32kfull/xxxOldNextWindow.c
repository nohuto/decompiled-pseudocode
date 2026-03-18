/*
 * XREFs of xxxOldNextWindow @ 0x1C01DFA50
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01C42A0 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01DEE70 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v14; // edi
  _DWORD *Window; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v28; // rcx
  ULONG_PTR v29; // r14
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r11d
  __int16 v36; // ax
  unsigned __int64 v37; // rax
  __int16 v38; // ax
  struct tagWND *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rdx
  BOOL v48; // edi
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rdx
  _QWORD v57[3]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v58[7]; // [rsp+A8h] [rbp-68h] BYREF
  _QWORD v59[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v60; // [rsp+F0h] [rbp-20h] BYREF
  ULONG_PTR v61; // [rsp+F8h] [rbp-18h]
  __int64 v62; // [rsp+108h] [rbp-8h] BYREF
  struct tagWND *v63; // [rsp+110h] [rbp+0h]
  __int64 v64[3]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v65[3]; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v66[4]; // [rsp+150h] [rbp+40h] BYREF
  struct tagSwitchWndInfo *v67; // [rsp+1A8h] [rbp+98h] BYREF

  v1 = a1;
  memset(v58, 0, 0x30uLL);
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 432LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v57[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v57;
  v57[1] = v4;
  _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  xxxCapture(gptiCurrent, (__int64 *)v4, 4);
  v58[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u, v5, v6, v7);
    inited = (__int64)InitSwitchWndInfo(&v67, (struct tagWND *)v4, KeyState < 0);
    if ( v67 )
    {
      *((_DWORD *)v67 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v65[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v65;
      v65[1] = inited;
      if ( inited )
        _InterlockedAdd((volatile signed __int32 *)(inited + 8), 1u);
      PushW32ThreadLock((__int64)&v67, v66, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v11)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12),
            v14 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v14 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v64, 0LL);
      v64[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 (wchar_t *)0x8003,
                 32771LL,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 (__int64)v64,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v14,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v64, v16);
      if ( gspwndAltTab )
        PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
      v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v59[1] = Window;
      *(_QWORD *)(v18 + 16) = v66[0];
      v59[0] = &gspwndAltTab;
      HMAssignmentLock(v59);
      v19 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v60 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v60;
        v61 = v19;
        _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
        v23 = safe_cast_fnid_to_PSWITCHWND(v19);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = v67;
        xxxShowSwitchWindow((struct tagWND *)v23, v22);
        ThreadUnlock1(v25, v24);
      }
      else
      {
        RemoveSwitchWindowInfo(&v67);
      }
      inited = ThreadUnlock1(v21, v20);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v26 = GetKeyState(0x10u, v5, v6, v7);
    NextQueueWindow = GetNextQueueWindow(v4, v26 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = (__int64)NextQueueWindow;
    v28 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v29 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v60 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v60;
    v61 = v29;
    _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
    v30 = 0LL;
    while ( 1 )
    {
      v67 = Getpswi((struct tagWND *)v29);
      if ( !v67 )
        goto LABEL_31;
      v36 = GetKeyState(v35, v31, v33, v34);
      v37 = xxxMoveSwitchWndHilite((struct tagWND *)v29, v67, v36 < 0);
      if ( v30 )
      {
        if ( v30 == v37 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v32, v31);
LABEL_37:
          v28 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v28, (__int64)v57);
          goto LABEL_39;
        }
      }
      else
      {
        v30 = v37;
      }
      LOBYTE(v31) = 1;
      inited = HMValidateHandleNoSecure(v37, v31);
      if ( inited )
        goto LABEL_31;
    }
  }
  v38 = GetKeyState(0x10u, v5, v6, v7);
  v39 = GetNextQueueWindow(v4, v38 < 0, 0);
  inited = (__int64)v39;
  if ( v39 && v39 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      v62 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v62;
      v63 = v39;
      _InterlockedAdd((volatile signed __int32 *)v39 + 2, 1u);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v41, v40);
    }
    if ( inited )
      goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_39:
            if ( v4 )
              v42 = *(_QWORD *)v4;
            else
              v42 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((__int64)v58, 0LL, 0, 0, 2, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v43) = 1;
            v4 = HMValidateHandleNoSecure(v42, v43);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v57);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v58, 6) )
              break;
            xxxInternalGetMessage((__int64)v58, 0LL, v58[1], v58[1], 1, 0);
          }
          if ( LODWORD(v58[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v58[2]) == 9 || LOWORD(v58[2]) == 27 )
              goto LABEL_64;
            if ( LOWORD(v58[2]) != 16 )
              goto LABEL_79;
          }
          if ( LODWORD(v58[1]) > 0x202 )
          {
            if ( LODWORD(v58[1]) >= 0x204
              && (LODWORD(v58[1]) <= 0x205
               || LODWORD(v58[1]) > 0x206
               && (LODWORD(v58[1]) <= 0x208
                || LODWORD(v58[1]) > 0x20A && (LODWORD(v58[1]) <= 0x20C || LODWORD(v58[1]) == 786))) )
            {
              goto LABEL_79;
            }
            goto LABEL_106;
          }
          if ( LODWORD(v58[1]) >= 0x201 || LODWORD(v58[1]) == 75 )
            goto LABEL_79;
          if ( LODWORD(v58[1]) <= 0xFF )
            goto LABEL_106;
          if ( LODWORD(v58[1]) <= 0x101 )
            break;
          if ( LODWORD(v58[1]) == 260 )
          {
LABEL_64:
            LOWORD(v1) = v58[2];
            if ( LOWORD(v58[2]) != 9 && LOWORD(v58[2]) != 16 && LOWORD(v58[2]) != 27 )
              goto LABEL_81;
            if ( v4 )
              v45 = *(_QWORD *)v4;
            else
              v45 = 0LL;
            xxxInternalGetMessage((__int64)v58, 0LL, 0x104u, 0x104u, 1, 0);
            LOBYTE(v46) = 1;
            v4 = HMValidateHandleNoSecure(v45, v46);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v57);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v58[1]) > 0x104 && (LODWORD(v58[1]) <= 0x106 || LODWORD(v58[1]) == 512) )
              break;
LABEL_106:
            if ( v4 )
              v54 = *(_QWORD *)v4;
            else
              v54 = 0LL;
            xxxInternalGetMessage((__int64)v58, 0LL, v58[1], v58[1], 1, 0);
            xxxTranslateMessage((__int64)v58, 0LL);
            xxxDispatchMessage((__int64)v58, v55);
            LOBYTE(v56) = 1;
            v4 = HMValidateHandleNoSecure(v54, v56);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
              v28 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v44 = *(_QWORD *)v4;
        else
          v44 = 0LL;
        xxxInternalGetMessage((__int64)v58, 0LL, v58[1], v58[1], 1, 0);
        LOBYTE(v47) = 1;
        v4 = HMValidateHandleNoSecure(v44, v47);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v57);
        }
        if ( ((LODWORD(v58[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v58[1]) == 256 )
          goto LABEL_79;
      }
      if ( LOWORD(v58[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_80;
    }
  }
  while ( LOWORD(v58[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_79:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v57);
LABEL_80:
    v3 = 0;
    goto LABEL_81;
  }
  v3 = 1;
LABEL_81:
  xxxReleaseCapture();
  v48 = gspwndAltTab != 0;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v49 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v49 )
      {
        if ( v49 != v4 )
        {
          v62 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v62;
          v63 = (struct tagWND *)v49;
          _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
          xxxSetWindowPos((struct tagWND *)v49, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v51, v50);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v3 )
    {
      if ( v48 )
        PostMessage((struct tagWND *)v4, 0x112u, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v53, v52);
}

/*
 * XREFs of xxxOldNextWindow @ 0x1C01BCDF8
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01A28BC (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01AC5FC (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01BC2A0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 v8; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // edi
  _DWORD *Window; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int16 v29; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // r14
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r11d
  __int16 v38; // ax
  unsigned __int64 v39; // rax
  __int16 v40; // ax
  struct tagWND *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  BOOL v47; // edi
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  _QWORD v62[3]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v63[7]; // [rsp+A8h] [rbp-68h] BYREF
  _QWORD v64[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-20h] BYREF
  ULONG_PTR v66; // [rsp+F8h] [rbp-18h]
  __int64 v67; // [rsp+108h] [rbp-8h] BYREF
  struct tagWND *v68; // [rsp+110h] [rbp+0h]
  _QWORD v69[3]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v70[3]; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v71[4]; // [rsp+150h] [rbp+40h] BYREF
  struct tagSwitchWndInfo *v72; // [rsp+1A8h] [rbp+98h] BYREF

  v1 = a1;
  memset(v63, 0, 0x30uLL);
  result = gptiCurrent;
  v3 = 0;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 424LL);
  v4 = *(_QWORD *)(result + 120);
  if ( !v4 )
    return result;
  v62[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v62;
  v62[1] = v4;
  _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  xxxCapture(gptiCurrent, (__int64 *)v4, 4);
  v63[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    KeyState = GetKeyState(0x10u, v5);
    inited = (__int64)InitSwitchWndInfo(&v72, (struct tagWND *)v4, KeyState < 0, v8);
    if ( v72 )
    {
      *((_DWORD *)v72 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
      v70[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v70;
      v70[1] = inited;
      if ( inited )
        _InterlockedAdd((volatile signed __int32 *)(inited + 8), 1u);
      PushW32ThreadLock((__int64)&v72, v71, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v10)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
            v13 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v13 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v69, 0LL);
      v69[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 32771LL,
                 32771LL,
                 0LL,
                 0x88800000,
                 0,
                 0,
                 10,
                 10,
                 0LL,
                 (__int64)v69,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v13,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v69, v15);
      if ( gspwndAltTab )
        PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
      v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
      v64[1] = Window;
      *(_QWORD *)(v17 + 16) = v71[0];
      v64[0] = &gspwndAltTab;
      HMAssignmentLock(v64);
      v18 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v65 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v65;
        v66 = v18;
        _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        v23 = safe_cast_fnid_to_PSWITCHWND(v18);
        if ( v23 )
          *(_QWORD *)(v23 + 8) = v72;
        xxxShowSwitchWindow((struct tagWND *)v23, v22, v24, v25);
        ThreadUnlock1(v27, v26, v28);
      }
      else
      {
        RemoveSwitchWindowInfo(&v72);
      }
      inited = ThreadUnlock1(v20, v19, v21);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v29 = GetKeyState(0x10u, v5);
    NextQueueWindow = GetNextQueueWindow(v4, v29 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v3 = 1;
    v4 = (__int64)NextQueueWindow;
    v31 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v32 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v65 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v65;
    v66 = v32;
    _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
    v33 = 0LL;
    while ( 1 )
    {
      v72 = Getpswi((struct tagWND *)v32);
      if ( !v72 )
        goto LABEL_31;
      v38 = GetKeyState(v37, v34);
      v39 = xxxMoveSwitchWndHilite((struct tagWND *)v32, v72, v38 < 0);
      if ( v33 )
      {
        if ( v33 == v39 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v35, v34, v36);
LABEL_37:
          v31 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v31, (__int64)v62);
          goto LABEL_39;
        }
      }
      else
      {
        v33 = v39;
      }
      LOBYTE(v34) = 1;
      inited = HMValidateHandleNoSecure(v39, v34);
      if ( inited )
        goto LABEL_31;
    }
  }
  v40 = GetKeyState(0x10u, v5);
  v41 = GetNextQueueWindow(v4, v40 < 0, 0);
  inited = (__int64)v41;
  if ( v41 && v41 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      v67 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v67;
      v68 = v41;
      _InterlockedAdd((volatile signed __int32 *)v41 + 2, 1u);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v43, v42, v44);
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
              v45 = *(_QWORD *)v4;
            else
              v45 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((int)v63, 0, 0, 0, 2, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v46) = 1;
            v4 = HMValidateHandleNoSecure(v45, v46);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v62);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v63, 6) )
              break;
            xxxInternalGetMessage((int)v63, 0, v63[1], v63[1], 1, 0);
          }
          if ( LODWORD(v63[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v63[2]) == 9 || LOWORD(v63[2]) == 27 )
              goto LABEL_78;
            if ( LOWORD(v63[2]) != 16 )
              goto LABEL_53;
          }
          if ( LODWORD(v63[1]) > 0x202 )
          {
            if ( LODWORD(v63[1]) >= 0x204
              && (LODWORD(v63[1]) <= 0x205
               || LODWORD(v63[1]) > 0x206
               && (LODWORD(v63[1]) <= 0x208
                || LODWORD(v63[1]) > 0x20A && (LODWORD(v63[1]) <= 0x20C || LODWORD(v63[1]) == 786))) )
            {
              goto LABEL_53;
            }
            goto LABEL_107;
          }
          if ( LODWORD(v63[1]) >= 0x201 || LODWORD(v63[1]) == 75 )
            goto LABEL_53;
          if ( LODWORD(v63[1]) <= 0xFF )
            goto LABEL_107;
          if ( LODWORD(v63[1]) <= 0x101 )
            break;
          if ( LODWORD(v63[1]) == 260 )
          {
LABEL_78:
            LOWORD(v1) = v63[2];
            if ( LOWORD(v63[2]) != 9 && LOWORD(v63[2]) != 16 && LOWORD(v63[2]) != 27 )
              goto LABEL_55;
            if ( v4 )
              v56 = *(_QWORD *)v4;
            else
              v56 = 0LL;
            xxxInternalGetMessage((int)v63, 0, 260, 260, 1, 0);
            LOBYTE(v57) = 1;
            v4 = HMValidateHandleNoSecure(v56, v57);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              ThreadLockExchange(v4, (__int64)v62);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v63[1]) > 0x104 && (LODWORD(v63[1]) <= 0x106 || LODWORD(v63[1]) == 512) )
              break;
LABEL_107:
            if ( v4 )
              v59 = *(_QWORD *)v4;
            else
              v59 = 0LL;
            xxxInternalGetMessage((int)v63, 0, v63[1], v63[1], 1, 0);
            xxxTranslateMessage((__int64)v63, 0LL);
            xxxDispatchMessage((__int64)v63, v60);
            LOBYTE(v61) = 1;
            v4 = HMValidateHandleNoSecure(v59, v61);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
              v31 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v55 = *(_QWORD *)v4;
        else
          v55 = 0LL;
        xxxInternalGetMessage((int)v63, 0, v63[1], v63[1], 1, 0);
        LOBYTE(v58) = 1;
        v4 = HMValidateHandleNoSecure(v55, v58);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
          ThreadLockExchange(v4, (__int64)v62);
        }
        if ( ((LODWORD(v63[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v63[1]) == 256 )
          goto LABEL_53;
      }
      if ( LOWORD(v63[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_54;
    }
  }
  while ( LOWORD(v63[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_53:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    ThreadLockExchange(v4, (__int64)v62);
LABEL_54:
    v3 = 0;
    goto LABEL_55;
  }
  v3 = 1;
LABEL_55:
  xxxReleaseCapture();
  v47 = gspwndAltTab != 0;
  if ( v3 == 1 )
  {
    if ( gpqForeground )
    {
      v48 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v48 )
      {
        if ( v48 != v4 )
        {
          v67 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v67;
          v68 = (struct tagWND *)v48;
          _InterlockedAdd((volatile signed __int32 *)(v48 + 8), 1u);
          xxxSetWindowPos((struct tagWND *)v48, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v50, v49, v51);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindow((struct tagWND *)v4, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v3 )
    {
      if ( v47 )
        PostMessage((struct tagWND *)v4, 0x112u, 0xF120uLL, 0LL);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v53, v52, v54);
}

/*
 * XREFs of xxxOldNextWindow @ 0x1C01F5898
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     xxxCancelCoolSwitch @ 0x1C010ABE4 (xxxCancelCoolSwitch.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D7428 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3BBC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F41DC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4BE0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxOldNextWindow(unsigned int a1)
{
  __int64 v1; // r14
  int v2; // r15d
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 inited; // rdi
  __int16 KeyState; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v17; // di
  __int64 Window; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int16 v34; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v36; // rcx
  struct tagWND *v37; // r14
  ULONG_PTR v38; // rcx
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int16 v44; // ax
  unsigned __int64 v45; // rax
  __int16 v46; // ax
  struct tagWND *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r8
  BOOL v60; // r14d
  struct tagWND *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned __int64 v68; // rbx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // [rsp+90h] [rbp-80h] BYREF
  __int64 v73; // [rsp+98h] [rbp-78h]
  __int64 v74; // [rsp+A0h] [rbp-70h]
  __int64 v75; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-60h]
  __int64 v77; // [rsp+B8h] [rbp-58h]
  __int64 v78; // [rsp+C0h] [rbp-50h] BYREF
  struct tagWND *v79; // [rsp+C8h] [rbp-48h]
  __int64 v80; // [rsp+D0h] [rbp-40h]
  __int64 v81[6]; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v82; // [rsp+108h] [rbp-8h] BYREF
  __int64 v83; // [rsp+110h] [rbp+0h]
  __int64 v84; // [rsp+118h] [rbp+8h]
  _QWORD v85[4]; // [rsp+120h] [rbp+10h] BYREF
  __int128 v86; // [rsp+140h] [rbp+30h]
  __int64 v87[4]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v88; // [rsp+170h] [rbp+60h] BYREF
  struct tagSwitchWndInfo *v89; // [rsp+1B8h] [rbp+A8h] BYREF

  v1 = a1;
  memset(v81, 0, sizeof(v81));
  v2 = 0;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  result = gptiCurrent;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 424LL);
  v4 = *(_QWORD *)(result + 128);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 128);
  v72 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v72;
  v73 = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, (struct tagWND *)v4, 4);
  v81[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    memset(v85, 0, 24);
    KeyState = GetKeyState(0x10u, v6, v7, v8);
    inited = (__int64)InitSwitchWndInfo(&v89, (struct tagWND *)v4, KeyState < 0);
    if ( v89 )
    {
      v82 = 0LL;
      v83 = 0LL;
      v84 = 0LL;
      *((_DWORD *)v89 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
      v82 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v82;
      v83 = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((__int64)&v89, v85, (__int64)RemoveSwitchWindowInfo);
      if ( !PsGetCurrentProcessWin32Process(v13, v12)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14),
            v17 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v17 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v87, 0LL);
      v87[2] = 0LL;
      Window = xxxCreateWindowEx(
                 385,
                 32771LL,
                 32771LL,
                 0LL,
                 -2004877312,
                 0,
                 0,
                 0xAu,
                 0xAu,
                 0LL,
                 (__int64 **)v87,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v17,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v87, v19, v20);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16, 0, 0);
      v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22);
      *((_QWORD *)&v86 + 1) = Window;
      *(_QWORD *)(v23 + 16) = v85[0];
      *(_QWORD *)&v86 = &gspwndAltTab;
      v88 = v86;
      HMAssignmentLock(&v88);
      v24 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v28 = gspwndAltTab;
        v75 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v75;
        v76 = v24;
        HMLockObject(v28);
        v30 = safe_cast_fnid_to_PSWITCHWND(v24);
        if ( v30 )
          *(_QWORD *)(v30 + 8) = v89;
        xxxShowSwitchWindow((struct tagWND *)v30, v29);
        ThreadUnlock1(v32, v31, v33);
      }
      else
      {
        RemoveSwitchWindowInfo(&v89);
      }
      inited = ThreadUnlock1(v26, v25, v27);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v34 = GetKeyState(0x10u, v6, v7, v8);
    NextQueueWindow = GetNextQueueWindow(v4, v34 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v2 = 1;
    v4 = (__int64)NextQueueWindow;
    v36 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v37 = (struct tagWND *)gspwndAltTab;
  if ( gspwndAltTab )
  {
    v38 = gspwndAltTab;
    v75 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v75;
    v76 = (__int64)v37;
    HMLockObject(v38);
    v39 = 0LL;
    while ( 1 )
    {
      v89 = Getpswi(v37);
      if ( !v89 )
        goto LABEL_31;
      v44 = GetKeyState(0x10u, v40, v42, v43);
      v45 = xxxMoveSwitchWndHilite(v37, v89, v44 < 0);
      if ( v39 )
      {
        if ( v39 == v45 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v41, v40, v42);
LABEL_37:
          v36 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v36, (__int64)&v72);
          goto LABEL_39;
        }
      }
      else
      {
        v39 = v45;
      }
      LOBYTE(v40) = 1;
      inited = HMValidateHandleNoSecure(v45, v40, v42);
      if ( inited )
        goto LABEL_31;
    }
  }
  v46 = GetKeyState(0x10u, v6, v7, v8);
  v47 = GetNextQueueWindow(v4, v46 < 0, 0);
  inited = (__int64)v47;
  if ( v47 && v47 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      v78 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v78;
      v79 = v47;
      HMLockObject(v47);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v49, v48, v50);
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
              v51 = *(_QWORD *)v4;
            else
              v51 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((int)v81, 0, 0, 0, 2, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v52) = 1;
            v4 = HMValidateHandleNoSecure(v51, v52, v53);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              ThreadLockExchange(v4, (__int64)&v72);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v81, 6) )
              break;
            xxxInternalGetMessage((int)v81, 0, v81[1], v81[1], 1, 0);
          }
          if ( LODWORD(v81[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v81[2]) == 9 || LOWORD(v81[2]) == 27 )
              goto LABEL_64;
            if ( LOWORD(v81[2]) != 16 )
              goto LABEL_79;
          }
          if ( LODWORD(v81[1]) > 0x202 )
          {
            if ( LODWORD(v81[1]) >= 0x204
              && (LODWORD(v81[1]) <= 0x205
               || LODWORD(v81[1]) > 0x206
               && (LODWORD(v81[1]) <= 0x208
                || LODWORD(v81[1]) > 0x20A && (LODWORD(v81[1]) <= 0x20C || LODWORD(v81[1]) == 786))) )
            {
              goto LABEL_79;
            }
            goto LABEL_106;
          }
          if ( LODWORD(v81[1]) >= 0x201 || LODWORD(v81[1]) == 75 )
            goto LABEL_79;
          if ( LODWORD(v81[1]) <= 0xFF )
            goto LABEL_106;
          if ( LODWORD(v81[1]) <= 0x101 )
            break;
          if ( LODWORD(v81[1]) == 260 )
          {
LABEL_64:
            LOWORD(v1) = v81[2];
            if ( LOWORD(v81[2]) != 9 && LOWORD(v81[2]) != 16 && LOWORD(v81[2]) != 27 )
              goto LABEL_81;
            if ( v4 )
              v55 = *(_QWORD *)v4;
            else
              v55 = 0LL;
            xxxInternalGetMessage((int)v81, 0, 260, 260, 1, 0);
            LOBYTE(v56) = 1;
            v4 = HMValidateHandleNoSecure(v55, v56, v57);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              ThreadLockExchange(v4, (__int64)&v72);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v81[1]) > 0x104 && (LODWORD(v81[1]) <= 0x106 || LODWORD(v81[1]) == 512) )
              break;
LABEL_106:
            if ( v4 )
              v68 = *(_QWORD *)v4;
            else
              v68 = 0LL;
            xxxInternalGetMessage((int)v81, 0, v81[1], v81[1], 1, 0);
            xxxTranslateMessage((__int64)v81, 0LL, v69);
            xxxDispatchMessage((__int64)v81);
            LOBYTE(v70) = 1;
            v4 = HMValidateHandleNoSecure(v68, v70, v71);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              v36 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v54 = *(_QWORD *)v4;
        else
          v54 = 0LL;
        xxxInternalGetMessage((int)v81, 0, v81[1], v81[1], 1, 0);
        LOBYTE(v58) = 1;
        v4 = HMValidateHandleNoSecure(v54, v58, v59);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
          ThreadLockExchange(v4, (__int64)&v72);
        }
        if ( ((LODWORD(v81[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v81[1]) == 256 )
          goto LABEL_79;
      }
      if ( LOWORD(v81[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_80;
    }
  }
  while ( LOWORD(v81[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_79:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    ThreadLockExchange(v4, (__int64)&v72);
LABEL_80:
    v2 = 0;
    goto LABEL_81;
  }
  v2 = 1;
LABEL_81:
  xxxReleaseCapture();
  v60 = gspwndAltTab != 0;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v61 = *(struct tagWND **)(gpqForeground + 128LL);
      if ( v61 )
      {
        if ( v61 != (struct tagWND *)v4 )
        {
          v78 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v78;
          v79 = v61;
          HMLockObject(v61);
          xxxSetWindowPos(v61, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v63, v62, v64);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions(v4, 2u, 0, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v60 )
        PostMessage(v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v66, v65, v67);
}

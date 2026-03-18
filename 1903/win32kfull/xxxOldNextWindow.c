/*
 * XREFs of xxxOldNextWindow @ 0x1C01F5A18
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D75A8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     xxxWaitMessageEx @ 0x1C01E4460 (xxxWaitMessageEx.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3D3C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4BD0 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4D60 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v18; // di
  __int64 Window; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ULONG_PTR v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int16 v37; // ax
  struct tagWND *NextQueueWindow; // rax
  __int64 v39; // rcx
  struct tagWND *v40; // r14
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int16 v47; // ax
  unsigned __int64 v48; // rax
  __int64 v49; // r9
  __int16 v50; // ax
  struct tagWND *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  BOOL v67; // r14d
  struct tagWND *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // [rsp+90h] [rbp-80h] BYREF
  __int64 v83; // [rsp+98h] [rbp-78h]
  __int64 v84; // [rsp+A0h] [rbp-70h]
  __int64 v85; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-60h]
  __int64 v87; // [rsp+B8h] [rbp-58h]
  __int64 v88; // [rsp+C0h] [rbp-50h] BYREF
  struct tagWND *v89; // [rsp+C8h] [rbp-48h]
  __int64 v90; // [rsp+D0h] [rbp-40h]
  __int64 v91[6]; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+108h] [rbp-8h] BYREF
  __int64 v93; // [rsp+110h] [rbp+0h]
  __int64 v94; // [rsp+118h] [rbp+8h]
  _QWORD v95[4]; // [rsp+120h] [rbp+10h] BYREF
  __int128 v96; // [rsp+140h] [rbp+30h]
  __int64 v97[4]; // [rsp+150h] [rbp+40h] BYREF
  __int128 v98; // [rsp+170h] [rbp+60h] BYREF
  struct tagSwitchWndInfo *v99; // [rsp+1B8h] [rbp+A8h] BYREF

  v1 = a1;
  memset(v91, 0, sizeof(v91));
  v2 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  result = gptiCurrent;
  if ( gspwndAltTab )
    return result;
  result = *(_QWORD *)(gptiCurrent + 424LL);
  v4 = *(_QWORD *)(result + 128);
  if ( !v4 )
    return result;
  v5 = *(_QWORD *)(result + 128);
  v82 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v82;
  v83 = v4;
  HMLockObject(v5);
  xxxCapture(gptiCurrent, (struct tagWND *)v4, 4);
  v91[2] = v1;
  inited = 0LL;
  if ( (_WORD)v1 == 9 )
  {
    memset(v95, 0, 24);
    KeyState = GetKeyState(0x10u, v6, v7, v8);
    inited = (__int64)InitSwitchWndInfo(&v99, (struct tagWND *)v4, KeyState < 0);
    if ( v99 )
    {
      v92 = 0LL;
      v93 = 0LL;
      v94 = 0LL;
      *((_DWORD *)v99 + 27) = 1;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
      v92 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v92;
      v93 = inited;
      if ( inited )
        HMLockObject(inited);
      PushW32ThreadLock((__int64)&v99, v95, (__int64)RemoveSwitchWindowInfo, v12);
      if ( !PsGetCurrentProcessWin32Process(v14, v13)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16, v15),
            v18 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v18 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v97, 0LL);
      v97[2] = 0LL;
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
                 (__int64 **)v97,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v18,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v97, v20, v21, v22);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16, 0, 0);
      v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
      *((_QWORD *)&v96 + 1) = Window;
      *(_QWORD *)(v26 + 16) = v95[0];
      *(_QWORD *)&v96 = &gspwndAltTab;
      v98 = v96;
      HMAssignmentLock(&v98);
      v27 = gspwndAltTab;
      if ( gspwndAltTab )
      {
        v31 = gspwndAltTab;
        v85 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v85;
        v86 = v27;
        HMLockObject(v31);
        v33 = safe_cast_fnid_to_PSWITCHWND(v27);
        if ( v33 )
          *(_QWORD *)(v33 + 8) = v99;
        xxxShowSwitchWindow((struct tagWND *)v33, v32);
        ThreadUnlock1(v35, v34, v36);
      }
      else
      {
        RemoveSwitchWindowInfo(&v99);
      }
      inited = ThreadUnlock1(v29, v28, v30);
    }
    if ( inited )
      goto LABEL_37;
  }
LABEL_19:
  if ( (_WORD)v1 == 27 )
  {
    v37 = GetKeyState(0x10u, v6, v7, v8);
    NextQueueWindow = GetNextQueueWindow(v4, v37 < 0, 1);
    inited = (__int64)NextQueueWindow;
    if ( !NextQueueWindow )
      goto LABEL_39;
    v2 = 1;
    v4 = (__int64)NextQueueWindow;
    v39 = (__int64)NextQueueWindow;
    goto LABEL_38;
  }
  v40 = (struct tagWND *)gspwndAltTab;
  if ( gspwndAltTab )
  {
    v41 = gspwndAltTab;
    v85 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v85;
    v86 = (__int64)v40;
    HMLockObject(v41);
    v42 = 0LL;
    while ( 1 )
    {
      v99 = Getpswi(v40);
      if ( !v99 )
        goto LABEL_31;
      v47 = GetKeyState(0x10u, v43, v45, v46);
      v48 = xxxMoveSwitchWndHilite(v40, v99, v47 < 0);
      if ( v42 )
      {
        if ( v42 == v48 )
        {
          inited = 0LL;
LABEL_31:
          ThreadUnlock1(v44, v43, v45);
LABEL_37:
          v39 = inited;
          v4 = inited;
LABEL_38:
          ThreadLockExchange(v39, (__int64)&v82);
          goto LABEL_39;
        }
      }
      else
      {
        v42 = v48;
      }
      LOBYTE(v43) = 1;
      inited = HMValidateHandleNoSecure(v48, v43, v45, v49);
      if ( inited )
        goto LABEL_31;
    }
  }
  v50 = GetKeyState(0x10u, v6, v7, v8);
  v51 = GetNextQueueWindow(v4, v50 < 0, 0);
  inited = (__int64)v51;
  if ( v51 && v51 != (struct tagWND *)v4 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 24LL) & 8) == 0 )
    {
      v88 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v88;
      v89 = v51;
      HMLockObject(v51);
      xxxSetWindowPos((struct tagWND *)v4, 1LL, 0LL, 0LL, 0, 0, 25619);
      inited = ThreadUnlock1(v53, v52, v54);
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
              v55 = *(_QWORD *)v4;
            else
              v55 = 0LL;
            while ( !(unsigned int)xxxInternalGetMessage((int)v91, 0, 0, 0, 2, 0) )
              xxxWaitMessageEx(0x3CFFu, 0, 0LL);
            LOBYTE(v56) = 1;
            v4 = HMValidateHandleNoSecure(v55, v56, v57, v58);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              ThreadLockExchange(v4, (__int64)&v82);
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v91, 6) )
              break;
            xxxInternalGetMessage((int)v91, 0, v91[1], v91[1], 1, 0);
          }
          if ( LODWORD(v91[1]) == 260 )
          {
            if ( !gspwndAltTab || LOWORD(v91[2]) == 9 || LOWORD(v91[2]) == 27 )
              goto LABEL_64;
            if ( LOWORD(v91[2]) != 16 )
              goto LABEL_79;
          }
          if ( LODWORD(v91[1]) > 0x202 )
          {
            if ( LODWORD(v91[1]) >= 0x204
              && (LODWORD(v91[1]) <= 0x205
               || LODWORD(v91[1]) > 0x206
               && (LODWORD(v91[1]) <= 0x208
                || LODWORD(v91[1]) > 0x20A && (LODWORD(v91[1]) <= 0x20C || LODWORD(v91[1]) == 786))) )
            {
              goto LABEL_79;
            }
            goto LABEL_106;
          }
          if ( LODWORD(v91[1]) >= 0x201 || LODWORD(v91[1]) == 75 )
            goto LABEL_79;
          if ( LODWORD(v91[1]) <= 0xFF )
            goto LABEL_106;
          if ( LODWORD(v91[1]) <= 0x101 )
            break;
          if ( LODWORD(v91[1]) == 260 )
          {
LABEL_64:
            LOWORD(v1) = v91[2];
            if ( LOWORD(v91[2]) != 9 && LOWORD(v91[2]) != 16 && LOWORD(v91[2]) != 27 )
              goto LABEL_81;
            if ( v4 )
              v60 = *(_QWORD *)v4;
            else
              v60 = 0LL;
            xxxInternalGetMessage((int)v91, 0, 260, 260, 1, 0);
            LOBYTE(v61) = 1;
            v4 = HMValidateHandleNoSecure(v60, v61, v62, v63);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              ThreadLockExchange(v4, (__int64)&v82);
            }
            if ( (_WORD)v1 == 9 )
              goto LABEL_19;
          }
          else
          {
            if ( LODWORD(v91[1]) > 0x104 && (LODWORD(v91[1]) <= 0x106 || LODWORD(v91[1]) == 512) )
              break;
LABEL_106:
            if ( v4 )
              v75 = *(_QWORD *)v4;
            else
              v75 = 0LL;
            xxxInternalGetMessage((int)v91, 0, v91[1], v91[1], 1, 0);
            xxxTranslateMessage((__int64)v91, 0);
            xxxDispatchMessage((__int64)v91, v76, v77, v78);
            LOBYTE(v79) = 1;
            v4 = HMValidateHandleNoSecure(v75, v79, v80, v81);
            if ( !v4 )
            {
              v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
              v39 = v4;
              goto LABEL_38;
            }
          }
        }
        if ( v4 )
          v59 = *(_QWORD *)v4;
        else
          v59 = 0LL;
        xxxInternalGetMessage((int)v91, 0, v91[1], v91[1], 1, 0);
        LOBYTE(v64) = 1;
        v4 = HMValidateHandleNoSecure(v59, v64, v65, v66);
        if ( !v4 )
        {
          v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
          ThreadLockExchange(v4, (__int64)&v82);
        }
        if ( ((LODWORD(v91[1]) - 257) & 0xFFFFFFFB) == 0 )
          break;
        if ( LODWORD(v91[1]) == 256 )
          goto LABEL_79;
      }
      if ( LOWORD(v91[2]) != 18 )
        break;
      if ( gspwndAltTab )
        goto LABEL_80;
    }
  }
  while ( LOWORD(v91[2]) != 27 );
  if ( gspwndAltTab )
  {
LABEL_79:
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    ThreadLockExchange(v4, (__int64)&v82);
LABEL_80:
    v2 = 0;
    goto LABEL_81;
  }
  v2 = 1;
LABEL_81:
  xxxReleaseCapture();
  v67 = gspwndAltTab != 0;
  if ( v2 == 1 )
  {
    if ( gpqForeground )
    {
      v68 = *(struct tagWND **)(gpqForeground + 128LL);
      if ( v68 )
      {
        if ( v68 != (struct tagWND *)v4 )
        {
          v88 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v88;
          v89 = v68;
          HMLockObject(v68);
          xxxSetWindowPos(v68, 1LL, 0LL, 0LL, 0, 0, 25619);
          ThreadUnlock1(v70, v69, v71);
        }
      }
    }
  }
  if ( v4 )
  {
    xxxSetForegroundWindowWithOptions(v4, 2u, 0, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x20) != 0 && !v2 )
    {
      if ( v67 )
        PostMessage(v4, 274, 61728, 0);
    }
  }
  xxxCancelCoolSwitch();
  return ThreadUnlock1(v73, v72, v74);
}

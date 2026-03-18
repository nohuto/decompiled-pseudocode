/*
 * XREFs of xxxNextWindow @ 0x1C01BC6C8
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     SetNewForegroundQueue @ 0x1C005A780 (SetNewForegroundQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01A28BC (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01BC2A0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
 */

void __fastcall xxxNextWindow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v4; // rbx
  int v5; // r13d
  BOOL v6; // r12d
  __int64 NonChildAncestor; // r15
  ULONG_PTR v8; // r12
  __int64 v9; // r13
  __int64 v10; // r9
  struct tagWND *inited; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  ULONG_PTR v45; // rcx
  struct tagWND *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  ULONG_PTR v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // r13
  struct tagSwitchWndInfo *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r15
  __int128 v64; // [rsp+90h] [rbp-80h]
  __int128 v65; // [rsp+90h] [rbp-80h]
  __int128 v66; // [rsp+90h] [rbp-80h]
  __int128 v67; // [rsp+90h] [rbp-80h]
  __int128 v68; // [rsp+90h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-68h] BYREF
  ULONG_PTR v71; // [rsp+B0h] [rbp-60h]
  __int64 v72; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-48h]
  __int64 v74; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-30h]
  __int64 v76; // [rsp+F0h] [rbp-20h] BYREF
  struct tagWND *v77; // [rsp+F8h] [rbp-18h]
  _QWORD v78[3]; // [rsp+108h] [rbp-8h] BYREF
  __int128 v79; // [rsp+120h] [rbp+10h] BYREF
  __int128 v80; // [rsp+130h] [rbp+20h] BYREF
  __int128 v81; // [rsp+140h] [rbp+30h] BYREF
  __int128 v82; // [rsp+150h] [rbp+40h] BYREF
  __int128 v83; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v84[3]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v85[11]; // [rsp+188h] [rbp+78h] BYREF
  unsigned int v86; // [rsp+1F0h] [rbp+E0h]
  int v87; // [rsp+1F8h] [rbp+E8h]
  int v88; // [rsp+200h] [rbp+F0h]
  _DWORD *Window; // [rsp+200h] [rbp+F0h]
  struct tagSwitchWndInfo *v90; // [rsp+208h] [rbp+F8h] BYREF

  if ( !a1 )
    return;
  v87 = a2;
  v4 = 0LL;
  v5 = a2;
  v6 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v86 = v6;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  if ( v5 == 9 )
  {
    v8 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v84[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v84;
      v84[1] = v8;
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v54 = 0LL;
      while ( 1 )
      {
        v55 = Getpswi((struct tagWND *)v8);
        v90 = v55;
        if ( !v55 )
        {
          ThreadUnlock1(v57, v56, v58);
          v6 = v86;
          goto LABEL_65;
        }
        v59 = xxxMoveSwitchWndHilite((struct tagWND *)v8, v55, v86);
        if ( v54 )
        {
          if ( v54 == v59 )
          {
            v63 = 0LL;
LABEL_62:
            ThreadUnlock1(v61, v60, v62);
            *((_QWORD *)&v68 + 1) = v63;
            *(_QWORD *)&v68 = &gspwndActivate;
            v83 = v68;
            HMAssignmentLock(&v83);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v54 = v59;
        }
        LOBYTE(v60) = 1;
        v63 = HMValidateHandleNoSecure(v59, v60);
        if ( v63 )
          goto LABEL_62;
      }
    }
    ForceResetMouseButtonsDownState();
    *((_QWORD *)&v64 + 1) = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v64 = &gspwndActivate;
    v79 = v64;
    HMAssignmentLock(&v79);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v65 = &gspwndActivate;
      *((_QWORD *)&v65 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 88LL);
      v80 = v65;
      HMAssignmentLock(&v80);
      if ( !gspwndActivate )
        return;
    }
    v72 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v72;
    v73 = NonChildAncestor;
    if ( NonChildAncestor )
      _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
    v9 = gspwndActivate;
    v74 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v74;
    v75 = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    xxxSendTransformableMessageTimeout((__int64 *)v9, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
    inited = InitSwitchWndInfo(&v90, (struct tagWND *)v9, v86, v10);
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
    NextQueueWindow = inited;
    v76 = v14;
    *(_QWORD *)(gptiCurrent + 408LL) = &v76;
    v77 = inited;
    if ( inited )
      _InterlockedAdd((volatile signed __int32 *)inited + 2, 1u);
    if ( v90 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v90);
        ThreadUnlock1(v17, v16, v18);
        ThreadUnlock1(v20, v19, v21);
        ThreadUnlock1(v23, v22, v24);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v90, v85, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v90 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v25)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26),
            v88 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v88 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v78, 0LL);
      v78[2] = 0LL;
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
                 (__int64)v78,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v88,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v78, v28);
      if ( gspwndAltTab )
        PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
      *(_QWORD *)&v66 = &gspwndAltTab;
      *((_QWORD *)&v66 + 1) = Window;
      v81 = v66;
      HMAssignmentLock(&v81);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29);
      *(_QWORD *)(ThreadWin32Thread + 16) = v85[0];
      if ( gspwndAltTab )
      {
        v41 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v41 )
          *(_QWORD *)(v41 + 8) = v90;
        *(_QWORD *)&v67 = &gspwndActivate;
        *((_QWORD *)&v67 + 1) = NextQueueWindow;
        v82 = v67;
        HMAssignmentLock(&v82);
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
        v45 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v45 )
        {
          v70 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v70;
          v71 = v45;
          if ( v45 )
            _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
          v46 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v46 )
            v4 = *(struct _LARGE_STRING **)v46;
          xxxSendNotifyMessage(v46, 0x3Au, 2uLL, v4, 1);
          ThreadUnlock1(v48, v47, v49);
        }
        v50 = gspwndAltTab;
        v70 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v70;
        v71 = v50;
        _InterlockedAdd((volatile signed __int32 *)(v50 + 8), 1u);
        xxxShowSwitchWindow((struct tagWND *)v50, v42, v43, v44);
        ThreadUnlock1(v52, v51, v53);
        goto LABEL_41;
      }
      RemoveSwitchWindowInfo(&v90);
    }
    v6 = v86;
LABEL_23:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v31 = *(_QWORD *)(NonChildAncestor + 144);
          if ( v31 )
            *(_DWORD *)(*(_QWORD *)(v31 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v6 && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 24LL) & 8) == 0 )
        xxxSetWindowPos((struct tagWND *)v9, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v32 = *((_QWORD *)NextQueueWindow + 18);
        if ( v32 )
          *(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) |= 4u;
      }
      v33 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v33 + 424) )
      {
        SetNewForegroundQueue(0LL);
        v33 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v33, 0);
      v34 = 18;
      if ( v87 != 9 )
        v34 = 2;
      xxxSetForegroundWindow2(NextQueueWindow, 0LL, v34, 0);
      if ( v87 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_41:
    ThreadUnlock1(v14, v12, v13);
    ThreadUnlock1(v36, v35, v37);
    ThreadUnlock1(v39, v38, v40);
    return;
  }
  if ( v5 != 27 )
    return;
LABEL_65:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9
      || (v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 448LL) + 8LL) + 24LL) + 88LL)) != 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      v72 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v72;
      v73 = NonChildAncestor;
      if ( NonChildAncestor )
        _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
      v74 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v74;
      v75 = v9;
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      xxxSendTransformableMessageTimeout((__int64 *)v9, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
      NextQueueWindow = GetNextQueueWindow(v9, v6, 1);
      v76 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v76;
      v77 = NextQueueWindow;
      if ( NextQueueWindow )
        _InterlockedAdd((volatile signed __int32 *)NextQueueWindow + 2, 1u);
      if ( NextQueueWindow == (struct tagWND *)v9 )
        goto LABEL_41;
      goto LABEL_23;
    }
  }
}

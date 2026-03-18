/*
 * XREFs of xxxNextWindow @ 0x1C01F5018
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     SetNewForegroundQueue @ 0x1C001B530 (SetNewForegroundQueue.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C010ABE4 (xxxCancelCoolSwitch.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D7428 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3BBC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F41DC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4BE0 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxNextWindow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v3; // rbx
  int v4; // r15d
  __int64 result; // rax
  BOOL v7; // r12d
  __int64 NonChildAncestor; // r14
  struct tagWND *v9; // r15
  __int64 *v10; // r15
  ULONG_PTR v11; // rcx
  struct tagWND *inited; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  char v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG_PTR v49; // rcx
  struct tagWND *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  ULONG_PTR v54; // rcx
  __int64 v55; // rdx
  struct tagWND *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  ULONG_PTR v60; // rcx
  unsigned __int64 v61; // r12
  struct tagSwitchWndInfo *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r14
  __int64 v71; // [rsp+90h] [rbp-80h] BYREF
  ULONG_PTR v72; // [rsp+98h] [rbp-78h]
  __int64 v73; // [rsp+A0h] [rbp-70h]
  __int64 v74; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-60h]
  __int64 v76; // [rsp+B8h] [rbp-58h]
  __int64 v77; // [rsp+C0h] [rbp-50h] BYREF
  ULONG_PTR v78; // [rsp+C8h] [rbp-48h]
  __int64 v79; // [rsp+D0h] [rbp-40h]
  __int64 v80; // [rsp+D8h] [rbp-38h] BYREF
  struct tagWND *v81; // [rsp+E0h] [rbp-30h]
  __int64 v82; // [rsp+E8h] [rbp-28h]
  ULONG_PTR BugCheckParameter3; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v84[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v85; // [rsp+110h] [rbp+0h]
  __int128 v86; // [rsp+120h] [rbp+10h]
  __int128 v87; // [rsp+130h] [rbp+20h]
  __int128 v88; // [rsp+140h] [rbp+30h]
  __int128 v89; // [rsp+150h] [rbp+40h]
  __int64 v90[3]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v91[3]; // [rsp+178h] [rbp+68h] BYREF
  __int128 v92; // [rsp+190h] [rbp+80h] BYREF
  __int128 v93; // [rsp+1A0h] [rbp+90h] BYREF
  __int128 v94; // [rsp+1B0h] [rbp+A0h] BYREF
  __int128 v95; // [rsp+1C0h] [rbp+B0h] BYREF
  __int128 v96[4]; // [rsp+1D0h] [rbp+C0h] BYREF
  int v97; // [rsp+220h] [rbp+110h]
  int v98; // [rsp+228h] [rbp+118h]
  char v99; // [rsp+230h] [rbp+120h]
  __int64 Window; // [rsp+230h] [rbp+120h]
  struct tagSwitchWndInfo *v101; // [rsp+238h] [rbp+128h] BYREF

  v98 = a2;
  v3 = 0LL;
  v74 = 0LL;
  v4 = a2;
  v75 = 0LL;
  v76 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  result = gptiCurrent;
  if ( !a1 )
    return result;
  v7 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v97 = v7;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
  NonChildAncestor = result;
  if ( v4 == 9 )
  {
    v9 = (struct tagWND *)gspwndAltTab;
    if ( gspwndAltTab )
    {
      v91[2] = 0LL;
      v60 = gspwndAltTab;
      v91[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v91;
      v91[1] = v9;
      HMLockObject(v60);
      v61 = 0LL;
      while ( 1 )
      {
        v62 = Getpswi(v9);
        v101 = v62;
        if ( !v62 )
        {
          result = ThreadUnlock1(v64, v63, v65);
          v7 = v97;
          goto LABEL_64;
        }
        v66 = xxxMoveSwitchWndHilite(v9, v62, v97);
        if ( v61 )
        {
          if ( v61 == v66 )
          {
            v70 = 0LL;
LABEL_61:
            ThreadUnlock1(v68, v67, v69);
            *((_QWORD *)&v89 + 1) = v70;
            *(_QWORD *)&v89 = &gspwndActivate;
            v96[0] = v89;
            result = HMAssignmentLock(v96);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v61 = v66;
        }
        LOBYTE(v67) = 1;
        v70 = HMValidateHandleNoSecure(v66, v67, v69);
        if ( v70 )
          goto LABEL_61;
      }
    }
    memset(v84, 0, sizeof(v84));
    ForceResetMouseButtonsDownState();
    *((_QWORD *)&v85 + 1) = *(_QWORD *)(a1 + 128);
    *(_QWORD *)&v85 = &gspwndActivate;
    v92 = v85;
    HMAssignmentLock(&v92);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v86 = &gspwndActivate;
      *((_QWORD *)&v86 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      v93 = v86;
      result = HMAssignmentLock(&v93);
      if ( !gspwndActivate )
        return result;
    }
    v74 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v74;
    v75 = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v10 = (__int64 *)gspwndActivate;
    v77 = *(_QWORD *)(gptiCurrent + 408LL);
    v11 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 408LL) = &v77;
    v78 = v11;
    HMLockObject(v11);
    xxxSendTransformableMessageTimeout(v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0);
    inited = InitSwitchWndInfo(&v101, (struct tagWND *)v10, v7);
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    NextQueueWindow = inited;
    v80 = v15;
    *(_QWORD *)(gptiCurrent + 408LL) = &v80;
    v81 = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v101 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo(&v101);
        ThreadUnlock1(v18, v17, v19);
        ThreadUnlock1(v21, v20, v22);
        ThreadUnlock1(v24, v23, v25);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v101, v84, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v101 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v27, v26)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29, v28),
            v99 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v99 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v90, 0LL);
      v90[2] = 0LL;
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
                 (__int64 **)v90,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v99,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v31, v32);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16, 0, 0);
      *(_QWORD *)&v87 = &gspwndAltTab;
      *((_QWORD *)&v87 + 1) = Window;
      v94 = v87;
      HMAssignmentLock(&v94);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34);
      *(_QWORD *)(ThreadWin32Thread + 16) = v84[0];
      if ( gspwndAltTab )
      {
        v46 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v46 )
          *(_QWORD *)(v46 + 8) = v101;
        *(_QWORD *)&v88 = &gspwndActivate;
        *((_QWORD *)&v88 + 1) = NextQueueWindow;
        v95 = v88;
        HMAssignmentLock(&v95);
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v47, v48);
        v49 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v49 )
        {
          v71 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v71;
          v72 = v49;
          if ( v49 )
            HMLockObject(v49);
          v50 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v50 )
            v3 = *(struct _LARGE_STRING **)v50;
          xxxSendNotifyMessage(v50, 0x3Au, 2LL, v3, 1);
          ThreadUnlock1(v52, v51, v53);
        }
        v54 = gspwndAltTab;
        v71 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v71;
        v72 = v54;
        HMLockObject(v54);
        xxxShowSwitchWindow(v56, v55);
        ThreadUnlock1(v58, v57, v59);
        goto LABEL_40;
      }
      RemoveSwitchWindowInfo(&v101);
    }
LABEL_22:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v36 = *(_QWORD *)(NonChildAncestor + 168);
          if ( v36 )
            *(_DWORD *)(*(_QWORD *)(v36 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v7 && (*(_BYTE *)(v10[5] + 24) & 8) == 0 )
        xxxSetWindowPos((struct tagWND *)v10, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v37 = *((_QWORD *)NextQueueWindow + 21);
        if ( v37 )
          *(_DWORD *)(*(_QWORD *)(v37 + 40) + 40LL) |= 4u;
      }
      v38 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v38 + 424) )
      {
        SetNewForegroundQueue(0LL, v38, v14);
        v38 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v38, 0);
      v39 = 18;
      if ( v98 != 9 )
        v39 = 2;
      xxxSetForegroundWindow2((__int64)NextQueueWindow, 0LL, v39);
      if ( v98 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_40:
    ThreadUnlock1(v15, v13, v14);
    ThreadUnlock1(v41, v40, v42);
    return ThreadUnlock1(v44, v43, v45);
  }
  if ( v4 != 27 )
    return result;
LABEL_64:
  if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
  {
    v10 = *(__int64 **)(a1 + 128);
    if ( v10
      || (result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 448LL) + 8LL),
          (v10 = *(__int64 **)(*(_QWORD *)(result + 24) + 112LL)) != 0LL) )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
      v74 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v74;
      v75 = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      v77 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v77;
      v78 = (ULONG_PTR)v10;
      HMLockObject(v10);
      xxxSendTransformableMessageTimeout(v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v10, v7, 1);
      v80 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v80;
      v81 = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == (struct tagWND *)v10 )
        goto LABEL_40;
      goto LABEL_22;
    }
  }
  return result;
}

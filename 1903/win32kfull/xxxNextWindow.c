/*
 * XREFs of xxxNextWindow @ 0x1C01F5198
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     SetNewForegroundQueue @ 0x1C0013A60 (SetNewForegroundQueue.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01D75A8 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3D3C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4BD0 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F4D60 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
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
  __int64 v15; // r9
  __int64 v16; // rcx
  struct tagWND *NextQueueWindow; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  ULONG_PTR v52; // rcx
  struct tagWND *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  ULONG_PTR v57; // rcx
  __int64 v58; // rdx
  struct tagWND *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  ULONG_PTR v63; // rcx
  unsigned __int64 v64; // r12
  struct tagSwitchWndInfo *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r14
  __int64 v75; // [rsp+90h] [rbp-80h] BYREF
  ULONG_PTR v76; // [rsp+98h] [rbp-78h]
  __int64 v77; // [rsp+A0h] [rbp-70h]
  __int64 v78; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-60h]
  __int64 v80; // [rsp+B8h] [rbp-58h]
  __int64 v81; // [rsp+C0h] [rbp-50h] BYREF
  ULONG_PTR v82; // [rsp+C8h] [rbp-48h]
  __int64 v83; // [rsp+D0h] [rbp-40h]
  __int64 v84; // [rsp+D8h] [rbp-38h] BYREF
  struct tagWND *v85; // [rsp+E0h] [rbp-30h]
  __int64 v86; // [rsp+E8h] [rbp-28h]
  ULONG_PTR BugCheckParameter3; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v88[3]; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v89; // [rsp+110h] [rbp+0h]
  __int128 v90; // [rsp+120h] [rbp+10h]
  __int128 v91; // [rsp+130h] [rbp+20h]
  __int128 v92; // [rsp+140h] [rbp+30h]
  __int128 v93; // [rsp+150h] [rbp+40h]
  __int64 v94[3]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v95[3]; // [rsp+178h] [rbp+68h] BYREF
  __int128 v96; // [rsp+190h] [rbp+80h] BYREF
  __int128 v97; // [rsp+1A0h] [rbp+90h] BYREF
  __int128 v98; // [rsp+1B0h] [rbp+A0h] BYREF
  __int128 v99; // [rsp+1C0h] [rbp+B0h] BYREF
  __int128 v100[4]; // [rsp+1D0h] [rbp+C0h] BYREF
  int v101; // [rsp+220h] [rbp+110h]
  int v102; // [rsp+228h] [rbp+118h]
  char v103; // [rsp+230h] [rbp+120h]
  __int64 Window; // [rsp+230h] [rbp+120h]
  struct tagSwitchWndInfo *v105; // [rsp+238h] [rbp+128h] BYREF

  v102 = a2;
  v3 = 0LL;
  v78 = 0LL;
  v4 = a2;
  v79 = 0LL;
  v80 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  result = gptiCurrent;
  if ( !a1 )
    return result;
  v7 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v101 = v7;
  result = GetNonChildAncestor(*(_QWORD *)(a1 + 120));
  NonChildAncestor = result;
  if ( v4 == 9 )
  {
    v9 = (struct tagWND *)gspwndAltTab;
    if ( gspwndAltTab )
    {
      v95[2] = 0LL;
      v63 = gspwndAltTab;
      v95[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v95;
      v95[1] = v9;
      HMLockObject(v63);
      v64 = 0LL;
      while ( 1 )
      {
        v65 = Getpswi(v9);
        v105 = v65;
        if ( !v65 )
        {
          result = ThreadUnlock1(v67, v66, v68);
          v7 = v101;
          goto LABEL_64;
        }
        v69 = xxxMoveSwitchWndHilite(v9, v65, v101);
        if ( v64 )
        {
          if ( v64 == v69 )
          {
            v74 = 0LL;
LABEL_61:
            ThreadUnlock1(v71, v70, v72);
            *((_QWORD *)&v93 + 1) = v74;
            *(_QWORD *)&v93 = &gspwndActivate;
            v100[0] = v93;
            result = HMAssignmentLock(v100);
            if ( !gspwndActivate )
              return xxxCancelCoolSwitch();
            return result;
          }
        }
        else
        {
          v64 = v69;
        }
        LOBYTE(v70) = 1;
        v74 = HMValidateHandleNoSecure(v69, v70, v72, v73);
        if ( v74 )
          goto LABEL_61;
      }
    }
    memset(v88, 0, sizeof(v88));
    ForceResetMouseButtonsDownState();
    *((_QWORD *)&v89 + 1) = *(_QWORD *)(a1 + 128);
    *(_QWORD *)&v89 = &gspwndActivate;
    v96 = v89;
    HMAssignmentLock(&v96);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v90 = &gspwndActivate;
      *((_QWORD *)&v90 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 112LL);
      v97 = v90;
      result = HMAssignmentLock(&v97);
      if ( !gspwndActivate )
        return result;
    }
    v78 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v78;
    v79 = NonChildAncestor;
    if ( NonChildAncestor )
      HMLockObject(NonChildAncestor);
    v10 = (__int64 *)gspwndActivate;
    v81 = *(_QWORD *)(gptiCurrent + 408LL);
    v11 = gspwndActivate;
    *(_QWORD *)(gptiCurrent + 408LL) = &v81;
    v82 = v11;
    HMLockObject(v11);
    xxxSendTransformableMessageTimeout(v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0);
    inited = InitSwitchWndInfo(&v105, (struct tagWND *)v10, v7);
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    NextQueueWindow = inited;
    v84 = v16;
    *(_QWORD *)(gptiCurrent + 408LL) = &v84;
    v85 = inited;
    if ( inited )
      HMLockObject(inited);
    if ( v105 )
    {
      if ( !NextQueueWindow )
      {
        RemoveSwitchWindowInfo(&v105);
        ThreadUnlock1(v19, v18, v20);
        ThreadUnlock1(v22, v21, v23);
        ThreadUnlock1(v25, v24, v26);
        return HMAssignmentUnlock(&gspwndActivate);
      }
      PushW32ThreadLock((__int64)&v105, v88, (__int64)RemoveSwitchWindowInfo, v15);
      *((_DWORD *)v105 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v28, v27)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30, v29),
            v103 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v103 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v94, 0LL);
      v94[2] = 0LL;
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
                 (__int64 **)v94,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v103,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v94, v32, v33, v34);
      if ( gspwndAltTab )
        PostMessage(gspwndAltTab, 16, 0, 0);
      *(_QWORD *)&v91 = &gspwndAltTab;
      *((_QWORD *)&v91 + 1) = Window;
      v98 = v91;
      HMAssignmentLock(&v98);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37);
      *(_QWORD *)(ThreadWin32Thread + 16) = v88[0];
      if ( gspwndAltTab )
      {
        v49 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v49 )
          *(_QWORD *)(v49 + 8) = v105;
        *(_QWORD *)&v92 = &gspwndActivate;
        *((_QWORD *)&v92 + 1) = NextQueueWindow;
        v99 = v92;
        HMAssignmentLock(&v99);
        if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v50, v51);
        v52 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v52 )
        {
          v75 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v75;
          v76 = v52;
          if ( v52 )
            HMLockObject(v52);
          v53 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v53 )
            v3 = *(struct _LARGE_STRING **)v53;
          xxxSendNotifyMessage(v53, 0x3Au, 2uLL, v3, 1);
          ThreadUnlock1(v55, v54, v56);
        }
        v57 = gspwndAltTab;
        v75 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v75;
        v76 = v57;
        HMLockObject(v57);
        xxxShowSwitchWindow(v59, v58);
        ThreadUnlock1(v61, v60, v62);
        goto LABEL_40;
      }
      RemoveSwitchWindowInfo(&v105);
    }
LABEL_22:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v39 = *(_QWORD *)(NonChildAncestor + 168);
          if ( v39 )
            *(_DWORD *)(*(_QWORD *)(v39 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v7 && (*(_BYTE *)(v10[5] + 24) & 8) == 0 )
        xxxSetWindowPos((struct tagWND *)v10, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
      {
        v40 = *((_QWORD *)NextQueueWindow + 21);
        if ( v40 )
          *(_DWORD *)(*(_QWORD *)(v40 + 40) + 40LL) |= 4u;
      }
      v41 = *((_QWORD *)NextQueueWindow + 2);
      if ( gpqForeground == *(_QWORD *)(v41 + 424) )
      {
        SetNewForegroundQueue(0LL);
        v41 = *((_QWORD *)NextQueueWindow + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v41, 0);
      v42 = 18;
      if ( v102 != 9 )
        v42 = 2;
      xxxSetForegroundWindow2(NextQueueWindow, 0LL, v42);
      if ( v102 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_40:
    ThreadUnlock1(v16, v13, v14);
    ThreadUnlock1(v44, v43, v45);
    return ThreadUnlock1(v47, v46, v48);
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
      v78 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v78;
      v79 = NonChildAncestor;
      if ( NonChildAncestor )
        HMLockObject(NonChildAncestor);
      v81 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v81;
      v82 = (ULONG_PTR)v10;
      HMLockObject(v10);
      xxxSendTransformableMessageTimeout(v10, 0x1Fu, 0LL, 0LL, 2u, 0x64u, (__int64 *)&BugCheckParameter3, 1u, 0);
      NextQueueWindow = GetNextQueueWindow((__int64)v10, v7, 1);
      v84 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v84;
      v85 = NextQueueWindow;
      if ( NextQueueWindow )
        HMLockObject(NextQueueWindow);
      if ( NextQueueWindow == (struct tagWND *)v10 )
        goto LABEL_40;
      goto LABEL_22;
    }
  }
  return result;
}

/*
 * XREFs of xxxNextWindow @ 0x1C01DF29C
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     SetNewForegroundQueue @ 0x1C00D0EA0 (SetNewForegroundQueue.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01C42A0 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01DDE24 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     RemoveSwitchWindowInfo @ 0x1C01DEE70 (RemoveSwitchWindowInfo.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 */

void __fastcall xxxNextWindow(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LARGE_STRING *v4; // rbx
  int v5; // r13d
  BOOL v6; // r12d
  __int64 NonChildAncestor; // r15
  ULONG_PTR v8; // r12
  __int64 v9; // r13
  struct tagWND *inited; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  LARGE_INTEGER *NextQueueWindow; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rax
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG_PTR v38; // rcx
  struct tagWND *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r13
  struct tagSwitchWndInfo *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r15
  __int128 v53; // [rsp+90h] [rbp-80h]
  __int128 v54; // [rsp+90h] [rbp-80h]
  __int128 v55; // [rsp+90h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-68h] BYREF
  ULONG_PTR v60; // [rsp+B0h] [rbp-60h]
  __int64 v61; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-48h]
  __int64 v63; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-30h]
  __int64 v65; // [rsp+F0h] [rbp-20h] BYREF
  void *v66; // [rsp+F8h] [rbp-18h]
  __int64 v67[3]; // [rsp+108h] [rbp-8h] BYREF
  __int128 v68; // [rsp+120h] [rbp+10h] BYREF
  __int128 v69; // [rsp+130h] [rbp+20h] BYREF
  __int128 v70; // [rsp+140h] [rbp+30h] BYREF
  __int128 v71; // [rsp+150h] [rbp+40h] BYREF
  __int128 v72; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v73[3]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v74[11]; // [rsp+188h] [rbp+78h] BYREF
  int v75; // [rsp+1F0h] [rbp+E0h]
  int v76; // [rsp+1F8h] [rbp+E8h]
  int v77; // [rsp+200h] [rbp+F0h]
  _DWORD *Window; // [rsp+200h] [rbp+F0h]
  struct tagSwitchWndInfo *v79; // [rsp+208h] [rbp+F8h] BYREF

  if ( !a1 )
    return;
  v76 = a2;
  v4 = 0LL;
  v5 = a2;
  v6 = (_GetAsyncKeyState(16LL, a2, a3) & 0x8000u) != 0LL;
  v75 = v6;
  NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
  if ( v5 == 9 )
  {
    v8 = gspwndAltTab;
    if ( gspwndAltTab )
    {
      v73[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v73;
      v73[1] = v8;
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v45 = 0LL;
      while ( 1 )
      {
        v46 = Getpswi((struct tagWND *)v8);
        v79 = v46;
        if ( !v46 )
        {
          ThreadUnlock1(v48, v47);
          v6 = v75;
          goto LABEL_65;
        }
        v49 = xxxMoveSwitchWndHilite((struct tagWND *)v8, v46, v75);
        if ( v45 )
        {
          if ( v45 == v49 )
          {
            v52 = 0LL;
LABEL_62:
            ThreadUnlock1(v51, v50);
            *((_QWORD *)&v57 + 1) = v52;
            *(_QWORD *)&v57 = &gspwndActivate;
            v72 = v57;
            HMAssignmentLock(&v72);
            if ( !gspwndActivate )
              xxxCancelCoolSwitch();
            return;
          }
        }
        else
        {
          v45 = v49;
        }
        LOBYTE(v50) = 1;
        v52 = HMValidateHandleNoSecure(v49, v50);
        if ( v52 )
          goto LABEL_62;
      }
    }
    ForceResetMouseButtonsDownState();
    *((_QWORD *)&v53 + 1) = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v53 = &gspwndActivate;
    v68 = v53;
    HMAssignmentLock(&v68);
    if ( !gspwndActivate )
    {
      *(_QWORD *)&v54 = &gspwndActivate;
      *((_QWORD *)&v54 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) + 88LL);
      v69 = v54;
      HMAssignmentLock(&v69);
      if ( !gspwndActivate )
        return;
    }
    v61 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v61;
    v62 = NonChildAncestor;
    if ( NonChildAncestor )
      _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
    v9 = gspwndActivate;
    v63 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v63;
    v64 = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    xxxSendTransformableMessageTimeout((__int64 *)v9, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
    inited = InitSwitchWndInfo(&v79, (struct tagWND *)v9, v75);
    v12 = *(_QWORD *)(gptiCurrent + 416LL);
    NextQueueWindow = (LARGE_INTEGER *)inited;
    v65 = v12;
    *(_QWORD *)(gptiCurrent + 416LL) = &v65;
    v66 = inited;
    if ( inited )
      _InterlockedAdd((volatile signed __int32 *)inited + 2, 1u);
    if ( v79 )
    {
      if ( !inited )
      {
        RemoveSwitchWindowInfo(&v79);
        ThreadUnlock1(v15, v14);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
        HMAssignmentUnlock(&gspwndActivate);
        return;
      }
      PushW32ThreadLock((__int64)&v79, v74, (__int64)RemoveSwitchWindowInfo);
      *((_DWORD *)v79 + 27) = 0;
      if ( !PsGetCurrentProcessWin32Process(v20)
        || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21),
            v77 = 1,
            !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        v77 = 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v67, 0LL);
      v67[2] = 0LL;
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
                 (__int64)v67,
                 0LL,
                 0LL,
                 2u,
                 0x400u,
                 v77,
                 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v67, v23);
      if ( gspwndAltTab )
        PostMessage((struct tagWND *)gspwndAltTab, 0x10u, 0LL, 0LL);
      *(_QWORD *)&v55 = &gspwndAltTab;
      *((_QWORD *)&v55 + 1) = Window;
      v70 = v55;
      HMAssignmentLock(&v70);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
      *(_QWORD *)(ThreadWin32Thread + 16) = v74[0];
      if ( gspwndAltTab )
      {
        v34 = safe_cast_fnid_to_PSWITCHWND(gspwndAltTab);
        if ( v34 )
          *(_QWORD *)(v34 + 8) = v79;
        *(_QWORD *)&v56 = &gspwndActivate;
        *((_QWORD *)&v56 + 1) = NextQueueWindow;
        v71 = v56;
        HMAssignmentLock(&v71);
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
          xxxSetThreadDesktop(0LL, grpdeskRitInput, v36, v37);
        v38 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        if ( gspwndFullScreen != v38 )
        {
          v59 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v59;
          v60 = v38;
          if ( v38 )
            _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
          v39 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
          if ( v39 )
            v4 = *(struct _LARGE_STRING **)v39;
          xxxSendNotifyMessage(v39, 0x3Au, 2LL, v4, 1);
          ThreadUnlock1(v41, v40);
        }
        v42 = gspwndAltTab;
        v59 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v59;
        v60 = v42;
        _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
        xxxShowSwitchWindow((struct tagWND *)v42, v35);
        ThreadUnlock1(v44, v43);
        goto LABEL_41;
      }
      RemoveSwitchWindowInfo(&v79);
    }
    v6 = v75;
LABEL_23:
    if ( NextQueueWindow )
    {
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
        {
          v26 = *(_QWORD *)(NonChildAncestor + 144);
          if ( v26 )
            *(_DWORD *)(*(_QWORD *)(v26 + 40) + 40LL) &= ~4u;
        }
      }
      if ( !v6 && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 24LL) & 8) == 0 )
        xxxSetWindowPos((struct tagWND *)v9, 1LL, 0LL, 0LL, 0, 0, 25619);
      if ( (*(_BYTE *)(NextQueueWindow[5].QuadPart + 31) & 0xC0) != 0x40 )
      {
        v27 = NextQueueWindow[18];
        if ( v27.QuadPart )
          *(_DWORD *)(*(_QWORD *)(v27.QuadPart + 40) + 40LL) |= 4u;
      }
      v28 = NextQueueWindow[2];
      if ( gpqForeground == *(_QWORD *)(v28.QuadPart + 432) )
      {
        SetNewForegroundQueue(0LL);
        v28 = NextQueueWindow[2];
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v28.QuadPart, 0);
      v29 = 18;
      if ( v76 != 9 )
        v29 = 2;
      xxxSetForegroundWindow2(NextQueueWindow, 0LL, v29);
      if ( v76 == 9 && (*(_BYTE *)(NextQueueWindow[5].QuadPart + 31) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
    }
LABEL_41:
    ThreadUnlock1(v12, v11);
    ThreadUnlock1(v31, v30);
    ThreadUnlock1(v33, v32);
    return;
  }
  if ( v5 != 27 )
    return;
LABEL_65:
  if ( (*(_DWORD *)(a1 + 388) & 0x4000000) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9
      || (v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 456LL) + 8LL) + 24LL) + 88LL)) != 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(a1 + 112));
      v61 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v61;
      v62 = NonChildAncestor;
      if ( NonChildAncestor )
        _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
      v63 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v63;
      v64 = v9;
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      xxxSendTransformableMessageTimeout((__int64 *)v9, 0x1Fu, 0LL, 0LL, 2, 100, (__int64 *)&BugCheckParameter3, 1, 0);
      NextQueueWindow = (LARGE_INTEGER *)GetNextQueueWindow(v9, v6, 1);
      v65 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v65;
      v66 = NextQueueWindow;
      if ( NextQueueWindow )
        _InterlockedAdd((volatile signed __int32 *)&NextQueueWindow[1], 1u);
      if ( NextQueueWindow == (LARGE_INTEGER *)v9 )
        goto LABEL_41;
      goto LABEL_23;
    }
  }
}

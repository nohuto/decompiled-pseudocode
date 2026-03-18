/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0151364 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0151760 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C015DFE8 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9570 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0014B88 (DwmAsyncNotifyAnimationChange.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C002BDB0 (AdjustPwndPtiPqForDelegation.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0152590 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C015281C (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  InputTransform *v4; // rsi
  BOOL v5; // r13d
  int v6; // r14d
  char v7; // cl
  _DWORD *v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  void *v20; // rax
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // ebx
  char v24; // al
  unsigned int v25; // edx
  _DWORD *v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // r14
  _DWORD *v36; // rax
  __int64 v37; // rax
  unsigned __int16 v38; // bx
  __int64 v39; // rax
  __int64 v40; // rax
  __int128 *v41; // r8
  __int64 v42; // rax
  __int128 *v43; // rdx
  __int64 v44; // rax
  __int128 *v45; // rcx
  __int64 v46; // xmm1_8
  __int128 v47; // xmm0
  __int64 v48; // xmm1_8
  __int128 v49; // xmm0
  __int64 v50; // xmm1_8
  __int128 v51; // xmm0
  __int64 v52; // xmm1_8
  __int128 v53; // xmm0
  __int64 v54; // xmm1_8
  __int128 v55; // xmm0
  __int64 v56; // xmm1_8
  __int128 v57; // xmm0
  __int64 v58; // xmm1_8
  void *v59; // rax
  int v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch]
  int v62; // [rsp+78h] [rbp-88h]
  InputTransform *v63; // [rsp+80h] [rbp-80h] BYREF
  __int128 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  struct tagTHREADINFO *v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v69; // [rsp+B8h] [rbp-48h]
  struct tagQ *v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-28h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  _DWORD v75[30]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v76[30]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v77; // [rsp+1D8h] [rbp+D8h] BYREF
  _OWORD v78[7]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v79; // [rsp+260h] [rbp+160h]
  __int128 v80; // [rsp+270h] [rbp+170h]
  __int128 v81; // [rsp+280h] [rbp+180h]
  __int128 v82; // [rsp+290h] [rbp+190h]
  __int128 v83; // [rsp+2A0h] [rbp+1A0h]
  __int128 v84; // [rsp+2B0h] [rbp+1B0h]
  __int128 v85; // [rsp+2C0h] [rbp+1C0h]
  __int128 v86; // [rsp+2D0h] [rbp+1D0h]
  __int64 v87; // [rsp+2E0h] [rbp+1E0h]

  v2 = 0LL;
  v67 = 0LL;
  v4 = a2;
  v63 = a2;
  v60 = 0;
  v5 = 0;
  v6 = 49185;
  v62 = 0;
  v61 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v60 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = INPUTDEST_FROM_PWND(v75, (__int64)a1);
  v78[0] = *(_OWORD *)v8;
  v78[1] = *((_OWORD *)v8 + 1);
  v78[2] = *((_OWORD *)v8 + 2);
  v78[3] = *((_OWORD *)v8 + 3);
  v78[4] = *((_OWORD *)v8 + 4);
  v78[5] = *((_OWORD *)v8 + 5);
  v78[6] = *((_OWORD *)v8 + 6);
  v79 = *((_QWORD *)v8 + 14);
  v9 = IsCapturedBySystem(v78);
  v10 = *((_QWORD *)a1 + 2);
  v66 = v9;
  v11 = *((_QWORD *)v4 + 2);
  v69 = (__int64 *)((char *)v4 + 16);
  if ( v11 && v10 )
  {
    v12 = *(_QWORD *)(v10 + 424);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 128) == a1
      || gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 && *(struct tagWND **)(v13 + 120) == a1 )
    {
      *(_DWORD *)(v11 + 480) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v14 = *((_QWORD *)a1 + 5);
  v15 = (char *)v4 + 40;
  v77 = *(_OWORD *)(v14 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v68 = (struct tagTHREADINFO *)ValidateHmonitor(*(_QWORD *)(v14 + 256));
    PhysicalToLogicalDPIRect(&v77, &v77, *(unsigned int *)(*(_QWORD *)v15 + 288LL), &v68);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v62 = IsWindowDesktopComposed(v4);
    if ( v62 )
    {
      v19 = *(_QWORD *)a1;
      v20 = (void *)ReferenceDwmApiPort(v17, v16, v18);
      DwmAsyncNotifyAnimationChange(v20, 0, v19);
    }
  }
  v21 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v68 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( v68 )
    {
      xxxWindowEvent(0x8003u, a1, 0LL, 0, 3);
      PostEventMessageEx(v68, *((_QWORD *)v68 + 53), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && (unsigned int)IsTopLevelWindow(v22) )
  {
    v23 = (v61 << 17) + 1;
    v24 = *(_BYTE *)(*(_QWORD *)v15 + 31LL);
    if ( v60 )
    {
      if ( (v24 & 0x20) == 0 )
      {
        v25 = 7;
LABEL_26:
        xxxMinMaximizeEx(v4, v25, v23, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      if ( !v5 )
      {
        if ( (v24 & 0x20) == 0 && (v24 & 1) == 0 )
          goto LABEL_37;
        v26 = CkptRestore((__int64)v4, &v77);
        if ( v26 )
          *(_OWORD *)v26 = v77;
        xxxMinMaximizeEx(v4, 9u, v23, 0LL, 0LL, 0LL);
LABEL_36:
        v6 |= 2u;
LABEL_37:
        v27 = v6 | 0x40;
        v21 = 3;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 25LL) & 8) == 0 )
          v27 = v6;
        v6 = v27;
        if ( (_QWORD)v77 == *(_QWORD *)(*(_QWORD *)v15 + 88LL) )
          v6 = v27 | 2;
        goto LABEL_41;
      }
      if ( (v24 & 1) == 0 )
      {
        v25 = 3;
        goto LABEL_26;
      }
    }
    _CopyWindowCheckpoint(a1, v4);
    goto LABEL_36;
  }
LABEL_41:
  if ( v61
    || !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && (unsigned int)IsTopLevelWindow(v28) && (v6 & 0x40) != 0 )
  {
    SetVisible(a1, 0);
  }
  else
  {
    xxxShowWindowEx(a1, 0, 0);
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) )
  {
    if ( !(unsigned int)IsTopLevelWindow(v29) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v15 + 25LL) & 8) != 0 )
      {
        SetVisible(v4, 0x11u);
        if ( !gdwDeferWinEvent )
          v21 = 1;
        xxxWindowEvent(0x8002u, v4, 0LL, 0, v21);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      }
      goto LABEL_85;
    }
    v60 = 0;
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x420u, 1);
      SetOrClrWF(1, (__int64)v4, 0x420u, 1);
      v33 = 1LL;
LABEL_58:
      if ( (v6 & 0x40) != 0 )
        SetVisible(v4, 1u);
      xxxSetWindowPos(v4, v33, (unsigned int)v77, DWORD1(v77), 0, 0, v6);
      if ( v60 )
        ThreadUnlock1(v31, v30, v32);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow(v4, 0LL, 0LL, 1157);
      if ( (v6 & 0x10) == 0 && !v61 )
        xxxActivateWindowWithOptions((__int64)v4, 0LL, 0LL, 1);
      if ( v66 )
      {
        v35 = *v69;
        v71 = v35;
        if ( v35 )
        {
          v36 = INPUTDEST_FROM_PWND(v76, (__int64)v4);
          v80 = *(_OWORD *)v36;
          v81 = *((_OWORD *)v36 + 1);
          v82 = *((_OWORD *)v36 + 2);
          v83 = *((_OWORD *)v36 + 3);
          v84 = *((_OWORD *)v36 + 4);
          v85 = *((_OWORD *)v36 + 5);
          v86 = *((_OWORD *)v36 + 6);
          v87 = *((_QWORD *)v36 + 14);
          ForceCapture(0LL);
          SetSystemInputSource(&v67);
          v37 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)v15 + 288LL));
          v60 = 0;
          v38 = v37;
          v69 = (__int64 *)v37;
          v70 = *(struct tagQ **)(v35 + 424);
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v70,
                               (__int64 *)&v63,
                               (struct tagTHREADINFO **)&v71,
                               0x201u,
                               &v67,
                               &v60) )
          {
            v39 = *((_QWORD *)v70 + 16);
            if ( v39 )
              v40 = *(_QWORD *)(v39 + 16);
            else
              v40 = 0LL;
            v41 = (__int128 *)gObjDummyLock;
            if ( v40 )
              v41 = (__int128 *)(v40 + 384);
            v42 = *((_QWORD *)v70 + 12);
            v43 = (__int128 *)gObjDummyLock;
            if ( v42 )
              v43 = (__int128 *)(v42 + 384);
            v44 = *((_QWORD *)v70 + 13);
            v45 = (__int128 *)gObjDummyLock;
            if ( v44 )
              v45 = (__int128 *)(v44 + 384);
            v4 = v63;
            v46 = *((_QWORD *)&gpsiLock + 2);
            v64 = gpsiLock;
            v47 = *(_OWORD *)((char *)v63 + 56);
            v65 = v46;
            v48 = *((_QWORD *)v63 + 9);
            v64 = v47;
            v49 = *(_OWORD *)(v71 + 384);
            v65 = v48;
            v50 = *(_QWORD *)(v71 + 400);
            v64 = v49;
            v51 = *(_OWORD *)v70;
            v65 = v50;
            v52 = *((_QWORD *)v70 + 2);
            v64 = v51;
            v53 = *v45;
            v65 = v52;
            v54 = *((_QWORD *)v45 + 2);
            v64 = v53;
            v55 = *v43;
            v65 = v54;
            v56 = *((_QWORD *)v43 + 2);
            v64 = v55;
            v57 = *v41;
            v65 = v56;
            v58 = *((_QWORD *)v41 + 2);
            v64 = v57;
            v65 = v58;
            PostInputMessage(
              v70,
              v63,
              0x201u,
              0LL,
              v38 | (WORD2(v69) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v67,
              0LL,
              0LL,
              v60,
              v71);
          }
          else
          {
            v4 = v63;
          }
        }
      }
LABEL_85:
      if ( v62 )
      {
        if ( v4 )
          v2 = *(_QWORD *)v4;
        v59 = (void *)ReferenceDwmApiPort(v31, v30, v32);
        DwmAsyncNotifyAnimationChange(v59, 1, v2);
      }
      xxxNotifyShellOfWindowSwap(a1, v4);
      return;
    }
    v33 = *((_QWORD *)a1 + 12);
    if ( v33 )
    {
      if ( (InputTransform *)v33 == v4 )
      {
        v6 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*(_QWORD *)v15 + 24LL) & 8) != 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32);
        v72 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v72;
        v73 = v33;
        HMLockObject(v33);
        v4 = v63;
        v60 = 1;
        goto LABEL_58;
      }
    }
    v33 = 0LL;
    goto LABEL_58;
  }
  PostShellHookMessages(2uLL, *(_QWORD *)a1);
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*(_QWORD *)v15 + 25LL) & 8) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)v4);
}

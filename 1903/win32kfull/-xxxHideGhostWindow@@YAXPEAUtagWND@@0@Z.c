/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01505A4 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01509A0 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C015D038 (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9820 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C0025940 (AdjustPwndPtiPqForDelegation.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0084B2C (DwmAsyncNotifyAnimationChange.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01517D0 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0151A5C (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // r14
  _DWORD *v37; // rax
  __int64 v38; // rax
  unsigned __int16 v39; // bx
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 *v42; // r8
  __int64 v43; // rax
  __int128 *v44; // rdx
  __int64 v45; // rax
  __int128 *v46; // rcx
  __int64 v47; // xmm1_8
  __int128 v48; // xmm0
  __int64 v49; // xmm1_8
  __int128 v50; // xmm0
  __int64 v51; // xmm1_8
  __int128 v52; // xmm0
  __int64 v53; // xmm1_8
  __int128 v54; // xmm0
  __int64 v55; // xmm1_8
  __int128 v56; // xmm0
  __int64 v57; // xmm1_8
  __int128 v58; // xmm0
  __int64 v59; // xmm1_8
  void *v60; // rax
  int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch]
  int v63; // [rsp+78h] [rbp-88h]
  InputTransform *v64; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h] BYREF
  struct tagTHREADINFO *v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v70; // [rsp+B8h] [rbp-48h]
  struct tagQ *v71; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  _DWORD v76[30]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v77[30]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v78; // [rsp+1D8h] [rbp+D8h] BYREF
  _OWORD v79[7]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v80; // [rsp+260h] [rbp+160h]
  __int128 v81; // [rsp+270h] [rbp+170h]
  __int128 v82; // [rsp+280h] [rbp+180h]
  __int128 v83; // [rsp+290h] [rbp+190h]
  __int128 v84; // [rsp+2A0h] [rbp+1A0h]
  __int128 v85; // [rsp+2B0h] [rbp+1B0h]
  __int128 v86; // [rsp+2C0h] [rbp+1C0h]
  __int128 v87; // [rsp+2D0h] [rbp+1D0h]
  __int64 v88; // [rsp+2E0h] [rbp+1E0h]

  v2 = 0LL;
  v68 = 0LL;
  v4 = a2;
  v64 = a2;
  v61 = 0;
  v5 = 0;
  v6 = 49185;
  v63 = 0;
  v62 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v61 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = INPUTDEST_FROM_PWND(v76, (__int64)a1);
  v79[0] = *(_OWORD *)v8;
  v79[1] = *((_OWORD *)v8 + 1);
  v79[2] = *((_OWORD *)v8 + 2);
  v79[3] = *((_OWORD *)v8 + 3);
  v79[4] = *((_OWORD *)v8 + 4);
  v79[5] = *((_OWORD *)v8 + 5);
  v79[6] = *((_OWORD *)v8 + 6);
  v80 = *((_QWORD *)v8 + 14);
  v9 = IsCapturedBySystem(v79);
  v10 = *((_QWORD *)a1 + 2);
  v67 = v9;
  v11 = *((_QWORD *)v4 + 2);
  v70 = (__int64 *)((char *)v4 + 16);
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
  v78 = *(_OWORD *)(v14 + 88);
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) != 2 )
  {
    v69 = (struct tagTHREADINFO *)ValidateHmonitor(*(_QWORD *)(v14 + 256));
    PhysicalToLogicalDPIRect(&v78, &v78, *(unsigned int *)(*(_QWORD *)v15 + 288LL), &v69);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v63 = IsWindowDesktopComposed(v4);
    if ( v63 )
    {
      v19 = *(_QWORD *)a1;
      v20 = (void *)ReferenceDwmApiPort(v17, v16, v18);
      DwmAsyncNotifyAnimationChange(v20, 0, v19);
    }
  }
  v21 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v69 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( v69 )
    {
      xxxWindowEvent(0x8003u, a1, 0LL, 0LL, 3);
      PostEventMessageEx(v69, *((_QWORD *)v69 + 53), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v4) && (unsigned int)IsTopLevelWindow(v22) )
  {
    v23 = (v62 << 17) + 1;
    v24 = *(_BYTE *)(*(_QWORD *)v15 + 31LL);
    if ( v61 )
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
        v26 = CkptRestore((__int64)v4, &v78);
        if ( v26 )
          *(_OWORD *)v26 = v78;
        xxxMinMaximizeEx(v4, 9u, v23, 0LL, 0LL, 0LL);
LABEL_36:
        v6 |= 2u;
LABEL_37:
        v27 = v6 | 0x40;
        v21 = 3;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 25LL) & 8) == 0 )
          v27 = v6;
        v6 = v27;
        if ( (_QWORD)v78 == *(_QWORD *)(*(_QWORD *)v15 + 88LL) )
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
  if ( v62
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
        xxxWindowEvent(0x8002u, v4, 0LL, 0LL, v21);
        xxxRedrawWindow(v4, 0LL, 0LL, 1157LL);
      }
      goto LABEL_85;
    }
    v61 = 0;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x420u, 1);
      SetOrClrWF(1, (__int64)v4, 0x420u, 1);
      v34 = 1LL;
LABEL_58:
      if ( (v6 & 0x40) != 0 )
        SetVisible(v4, 1u);
      xxxSetWindowPos(v4, v34, (unsigned int)v78, DWORD1(v78), 0, 0, v6);
      if ( v61 )
        ThreadUnlock1(v31, v30, v32);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow(v4, 0LL, 0LL, 1157LL);
      if ( (v6 & 0x10) == 0 && !v62 )
        xxxActivateWindowWithOptions((__int64)v4, 0LL, 0LL, 1);
      if ( v67 )
      {
        v36 = *v70;
        v72 = v36;
        if ( v36 )
        {
          v37 = INPUTDEST_FROM_PWND(v77, (__int64)v4);
          v81 = *(_OWORD *)v37;
          v82 = *((_OWORD *)v37 + 1);
          v83 = *((_OWORD *)v37 + 2);
          v84 = *((_OWORD *)v37 + 3);
          v85 = *((_OWORD *)v37 + 4);
          v86 = *((_OWORD *)v37 + 5);
          v87 = *((_OWORD *)v37 + 6);
          v88 = *((_QWORD *)v37 + 14);
          ForceCapture(0LL);
          SetSystemInputSource(&v68);
          v38 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)v15 + 288LL));
          v61 = 0;
          v39 = v38;
          v70 = (__int64 *)v38;
          v71 = *(struct tagQ **)(v36 + 424);
          if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                               (__int64 *)&v71,
                               (__int64 *)&v64,
                               (struct tagTHREADINFO **)&v72,
                               0x201u,
                               &v68,
                               &v61) )
          {
            v40 = *((_QWORD *)v71 + 16);
            if ( v40 )
              v41 = *(_QWORD *)(v40 + 16);
            else
              v41 = 0LL;
            v42 = (__int128 *)gObjDummyLock;
            if ( v41 )
              v42 = (__int128 *)(v41 + 384);
            v43 = *((_QWORD *)v71 + 12);
            v44 = (__int128 *)gObjDummyLock;
            if ( v43 )
              v44 = (__int128 *)(v43 + 384);
            v45 = *((_QWORD *)v71 + 13);
            v46 = (__int128 *)gObjDummyLock;
            if ( v45 )
              v46 = (__int128 *)(v45 + 384);
            v4 = v64;
            v47 = *((_QWORD *)&gpsiLock + 2);
            v65 = gpsiLock;
            v48 = *(_OWORD *)((char *)v64 + 56);
            v66 = v47;
            v49 = *((_QWORD *)v64 + 9);
            v65 = v48;
            v50 = *(_OWORD *)(v72 + 384);
            v66 = v49;
            v51 = *(_QWORD *)(v72 + 400);
            v65 = v50;
            v52 = *(_OWORD *)v71;
            v66 = v51;
            v53 = *((_QWORD *)v71 + 2);
            v65 = v52;
            v54 = *v46;
            v66 = v53;
            v55 = *((_QWORD *)v46 + 2);
            v65 = v54;
            v56 = *v44;
            v66 = v55;
            v57 = *((_QWORD *)v44 + 2);
            v65 = v56;
            v58 = *v42;
            v66 = v57;
            v59 = *((_QWORD *)v42 + 2);
            v65 = v58;
            v66 = v59;
            PostInputMessage(
              v71,
              v64,
              0x201u,
              0LL,
              v39 | (WORD2(v70) << 16),
              0,
              0LL,
              0LL,
              0,
              (struct tagINPUT_MESSAGE_SOURCE *)&v68,
              0LL,
              0LL,
              v61,
              v72);
          }
          else
          {
            v4 = v64;
          }
        }
      }
LABEL_85:
      if ( v63 )
      {
        if ( v4 )
          v2 = *(_QWORD *)v4;
        v60 = (void *)ReferenceDwmApiPort(v31, v30, v32);
        DwmAsyncNotifyAnimationChange(v60, 1, v2);
      }
      xxxNotifyShellOfWindowSwap(a1, v4);
      return;
    }
    v34 = *((_QWORD *)a1 + 12);
    if ( v34 )
    {
      if ( (InputTransform *)v34 == v4 )
      {
        v6 |= 4u;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 24LL) & 8) == 0 || (*(_BYTE *)(*(_QWORD *)v15 + 24LL) & 8) != 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32, v33);
        v73 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v73;
        v74 = v34;
        HMLockObject(v34);
        v4 = v64;
        v61 = 1;
        goto LABEL_58;
      }
    }
    v34 = 0LL;
    goto LABEL_58;
  }
  PostShellHookMessages(2uLL, *(_QWORD *)a1);
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*(_QWORD *)v15 + 25LL) & 8) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)v4);
}

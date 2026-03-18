/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01E3704 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C01E39DC (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B83EC (DwmAsyncNotifyAnimationChange.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01E2670 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01E32B4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // r13d
  BOOL v5; // r15d
  int v6; // esi
  char v7; // cl
  _OWORD *v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  void *v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // ebx
  char v24; // al
  unsigned int v25; // edx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r12d
  __int64 v34; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rbx
  _OWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  void *v40; // rax
  __int64 v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch]
  int v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v46[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v47[3]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v48[44]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v49[44]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v50; // [rsp+1F8h] [rbp+F8h] BYREF
  _OWORD v51[22]; // [rsp+210h] [rbp+110h] BYREF

  v43 = 0;
  v3 = 0;
  v50 = 0uLL;
  v5 = 0;
  v6 = 49185;
  v42 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v3 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = INPUTDEST_FROM_PWND(v48, (__int64)a1);
  v51[0] = *v8;
  v51[1] = v8[1];
  v51[2] = v8[2];
  v51[3] = v8[3];
  v51[4] = v8[4];
  v51[5] = v8[5];
  v51[6] = v8[6];
  v51[7] = v8[7];
  v51[8] = v8[8];
  v51[9] = v8[9];
  v51[10] = v8[10];
  v9 = IsCapturedBySystem(v51);
  v10 = *((_QWORD *)a2 + 2);
  v11 = *((_QWORD *)a1 + 2);
  v44 = v9;
  if ( v10 && v11 )
  {
    v12 = *(_QWORD *)(v11 + 432);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 120) == a1
      || gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 120LL)) != 0 && *(struct tagWND **)(v13 + 96) == a1 )
    {
      *(_DWORD *)(v10 + 488) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v14 = *((_QWORD *)a1 + 5);
  v15 = *((_QWORD *)a2 + 5);
  v50 = *(_OWORD *)(v14 + 88);
  if ( (*(_DWORD *)(v15 + 288) & 0xF) != 2 )
  {
    v45 = ValidateHmonitor(*(_QWORD *)(v14 + 256));
    PhysicalToLogicalDPIRect(&v50, &v50, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v45);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v43 = IsWindowDesktopComposed(a2);
    if ( v43 )
    {
      v18 = *(_QWORD *)a1;
      v19 = (void *)ReferenceDwmApiPort(v17, v16);
      DwmAsyncNotifyAnimationChange(v19, 0, v18);
    }
  }
  v20 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v21 = *((_QWORD *)a1 + 2);
    if ( v21 )
    {
      xxxWindowEvent(0x8003u, (__int64)a1, 0, 0, 3u);
      PostEventMessageEx((struct tagTHREADINFO *)v21, *(_QWORD *)(v21 + 432), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v22) )
  {
    v23 = v42 << 17;
    v24 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
    if ( v3 )
    {
      if ( (v24 & 0x20) == 0 )
      {
        v25 = 7;
LABEL_29:
        xxxMinMaximizeEx(a2, v25, v23 | 1, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      if ( !v5 )
      {
        if ( (v24 & 0x21) == 0 )
          goto LABEL_36;
        v26 = CkptRestore((__int64)a2, &v50);
        if ( v26 )
          *(_OWORD *)v26 = v50;
        xxxMinMaximizeEx(a2, 9u, v23 | 1, 0LL, 0LL, 0LL);
LABEL_31:
        v6 |= 2u;
LABEL_36:
        v27 = *((_QWORD *)a2 + 5);
        v28 = v6 | 0x40;
        if ( (*(_BYTE *)(v27 + 25) & 8) == 0 )
          v28 = v6;
        v6 = v28;
        if ( (_QWORD)v50 == *(_QWORD *)(v27 + 88) )
          v6 = v28 | 2;
        goto LABEL_40;
      }
      if ( (v24 & 1) == 0 )
      {
        v25 = 3;
        goto LABEL_29;
      }
    }
    _CopyWindowCheckpoint(a1, a2);
    goto LABEL_31;
  }
LABEL_40:
  if ( v42
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v29) && (v6 & 0x40) != 0 )
  {
    SetVisible(a1, 0);
  }
  else
  {
    xxxShowWindowEx((ULONG_PTR)a1, 0, 0);
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    if ( !(unsigned int)IsTopLevelWindow(v30) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 25LL) & 8) != 0 )
      {
        SetVisible(a2, 0x11u);
        if ( !gdwDeferWinEvent )
          v20 = 1;
        xxxWindowEvent(0x8002u, (__int64)a2, 0, 0, v20);
        xxxRedrawWindow(a2, 0LL, 0LL, 1157);
      }
      goto LABEL_73;
    }
    v33 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x420u, 1);
      SetOrClrWF(1, (__int64)a2, 0x420u, 1);
      v34 = 1LL;
    }
    else
    {
      v34 = *((_QWORD *)a1 + 9);
      if ( !v34 )
        goto LABEL_56;
      if ( (struct tagWND *)v34 == a2 )
      {
        v34 = 0LL;
        v6 |= 4u;
        goto LABEL_57;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 24LL) & 8) != 0 && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) == 0 )
      {
LABEL_56:
        v34 = 0LL;
        goto LABEL_57;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31);
      v47[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v47;
      v47[1] = v34;
      _InterlockedAdd((volatile signed __int32 *)(v34 + 8), 1u);
      v33 = 1;
    }
LABEL_57:
    if ( (v6 & 0x40) != 0 )
      SetVisible(a2, 1u);
    xxxSetWindowPos(a2, v34, (unsigned int)v50, DWORD1(v50), 0, 0, v6);
    if ( v33 )
      ThreadUnlock1(v32, v31);
    if ( (v6 & 0x40) != 0 )
      xxxRedrawWindow(a2, 0LL, 0LL, 1157);
    if ( (v6 & 0x10) == 0 && !v42 )
      xxxActivateWindowWithOptions((__int64)a2, 0LL, 0LL, 1);
    if ( v44 )
    {
      v36 = *((_QWORD *)a2 + 2);
      if ( v36 )
      {
        v37 = INPUTDEST_FROM_PWND(v49, (__int64)a2);
        v51[11] = *v37;
        v51[12] = v37[1];
        v51[13] = v37[2];
        v51[14] = v37[3];
        v51[15] = v37[4];
        v51[16] = v37[5];
        v51[17] = v37[6];
        v51[18] = v37[7];
        v51[19] = v37[8];
        v51[20] = v37[9];
        v51[21] = v37[10];
        ForceCapture(0LL);
        SetSystemInputSource(v46);
        v38 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL));
        LODWORD(v41) = 0;
        PostInputMessage(
          *(_QWORD *)(v36 + 432),
          (__int64)a2,
          0x201u,
          0LL,
          (WORD2(v38) << 16) | (unsigned __int16)v38,
          v41,
          0LL,
          0LL,
          0,
          v46,
          0LL,
          0LL);
      }
    }
LABEL_73:
    if ( v43 )
    {
      v39 = *(_QWORD *)a2;
      v40 = (void *)ReferenceDwmApiPort(v32, v31);
      DwmAsyncNotifyAnimationChange(v40, 1, v39);
    }
    xxxNotifyShellOfWindowSwap(a1, a2);
    return;
  }
  PostShellHookMessages(2uLL, *(_QWORD *)a1);
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x12u, *(_QWORD *)a1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 25LL) & 8) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x12u, *(_QWORD *)a2);
}

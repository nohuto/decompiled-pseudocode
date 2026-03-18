/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C00E6E60 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C010F9BC (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01BFEE0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0066D7C (DwmAsyncNotifyAnimationChange.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C00E7880 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C00E8FB0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  void *v19; // rax
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // ebx
  char v24; // al
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rbx
  void *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // edx
  _DWORD *v39; // rax
  __int64 v40; // rbx
  _OWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+64h] [rbp-9Ch]
  int v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v48[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v49[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v50[176]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v51[176]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v52; // [rsp+1F8h] [rbp+F8h] BYREF
  _OWORD v53[22]; // [rsp+210h] [rbp+110h] BYREF

  v45 = 0;
  v3 = 0;
  v52 = 0uLL;
  v5 = 0;
  v6 = 49185;
  v44 = *(_DWORD *)(gptiCurrent + 480LL) & 1;
  v7 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v7 & 0x20) != 0 )
    v3 = 1;
  else
    v5 = (v7 & 1) != 0;
  v8 = (_OWORD *)INPUTDEST_FROM_PWND(v50, a1);
  v53[0] = *v8;
  v53[1] = v8[1];
  v53[2] = v8[2];
  v53[3] = v8[3];
  v53[4] = v8[4];
  v53[5] = v8[5];
  v53[6] = v8[6];
  v53[7] = v8[7];
  v53[8] = v8[8];
  v53[9] = v8[9];
  v53[10] = v8[10];
  v9 = IsCapturedBySystem(v53);
  v10 = *((_QWORD *)a2 + 2);
  v11 = *((_QWORD *)a1 + 2);
  v46 = v9;
  if ( v10 && v11 )
  {
    v12 = *(_QWORD *)(v11 + 424);
    if ( v12 == gpqForeground && *(struct tagWND **)(v12 + 120) == a1
      || gpqForeground && (v37 = *(_QWORD *)(gpqForeground + 120LL)) != 0 && *(struct tagWND **)(v37 + 96) == a1 )
    {
      *(_DWORD *)(v10 + 480) |= 0x20u;
    }
    else
    {
      v6 = 49201;
    }
  }
  v13 = *((_QWORD *)a1 + 5);
  v14 = *((_QWORD *)a2 + 5);
  v52 = *(_OWORD *)(v13 + 88);
  if ( (*(_DWORD *)(v14 + 288) & 0xF) != 2 )
  {
    v47 = ValidateHmonitor(*(_QWORD *)(v13 + 256));
    PhysicalToLogicalDPIRect(&v52, &v52, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v47);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v45 = IsWindowDesktopComposed(a2);
    if ( v45 )
    {
      v18 = *(_QWORD *)a1;
      v19 = (void *)ReferenceDwmApiPort(v16, v15, v17);
      DwmAsyncNotifyAnimationChange(v19, 0, v18);
    }
  }
  v20 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v21 = *((_QWORD *)a1 + 2);
    if ( v21 )
    {
      xxxWindowEvent(0x8003u, (__int64)a1, 0, 0, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v21, *(_QWORD *)(v21 + 424), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v22) )
  {
    v23 = v44 << 17;
    v24 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
    if ( v3 )
    {
      if ( (v24 & 0x20) != 0 )
        goto LABEL_21;
      v38 = 7;
    }
    else
    {
      if ( !v5 )
      {
        if ( (v24 & 0x21) == 0 )
          goto LABEL_23;
        v39 = CkptRestore((__int64)a2, &v52);
        if ( v39 )
          *(_OWORD *)v39 = v52;
        xxxMinMaximizeEx(a2, 9u, v23 | 1, 0LL, 0LL, 0LL);
LABEL_22:
        v6 |= 2u;
LABEL_23:
        v25 = *((_QWORD *)a2 + 5);
        v26 = v6 | 0x40;
        if ( (*(_BYTE *)(v25 + 25) & 8) == 0 )
          v26 = v6;
        v6 = v26;
        if ( (_QWORD)v52 == *(_QWORD *)(v25 + 88) )
          v6 = v26 | 2;
        goto LABEL_27;
      }
      if ( (v24 & 1) != 0 )
      {
LABEL_21:
        _CopyWindowCheckpoint(a1, a2);
        goto LABEL_22;
      }
      v38 = 3;
    }
    xxxMinMaximizeEx(a2, v38, v23 | 1, 0LL, 0LL, 0LL);
    goto LABEL_21;
  }
LABEL_27:
  if ( v44
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v27) && (v6 & 0x40) != 0 )
  {
    SetVisible(a1, 0);
  }
  else
  {
    xxxShowWindowEx(a1, 0, 0);
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    PostShellHookMessages(2uLL, *(_QWORD *)a1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 25LL) & 8) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x12u, *(_QWORD *)a2);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow(v28) )
    {
      v32 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 1056, 1);
        SetOrClrWF(1, (__int64)a2, 1056, 1);
        v33 = 1LL;
      }
      else
      {
        v33 = *((_QWORD *)a1 + 9);
        if ( v33 )
        {
          if ( (struct tagWND *)v33 == a2 )
          {
            v33 = 0LL;
            v6 |= 4u;
          }
          else
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29);
            v49[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v49;
            v49[1] = v33;
            _InterlockedAdd((volatile signed __int32 *)(v33 + 8), 1u);
            v32 = 1;
          }
        }
      }
      if ( (v6 & 0x40) != 0 )
        SetVisible(a2, 1u);
      xxxSetWindowPos(a2, v33, (unsigned int)v52, DWORD1(v52), 0, 0, v6);
      if ( v32 )
        ThreadUnlock1(v30, v29, v31);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow(a2, 0LL, 0LL, 1157);
      if ( (v6 & 0x10) == 0 && !v44 )
        xxxActivateWindow(a2, 1, v31);
      if ( v46 )
      {
        v40 = *((_QWORD *)a2 + 2);
        if ( v40 )
        {
          v41 = (_OWORD *)INPUTDEST_FROM_PWND(v51, a2);
          v53[11] = *v41;
          v53[12] = v41[1];
          v53[13] = v41[2];
          v53[14] = v41[3];
          v53[15] = v41[4];
          v53[16] = v41[5];
          v53[17] = v41[6];
          v53[18] = v41[7];
          v53[19] = v41[8];
          v53[20] = v41[9];
          v53[21] = v41[10];
          ForceCapture(0LL);
          SetSystemInputSource(v48);
          v42 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL));
          LODWORD(v43) = 0;
          PostInputMessage(
            *(_QWORD *)(v40 + 424),
            (__int64)a2,
            0x201u,
            0LL,
            (WORD2(v42) << 16) | (unsigned __int16)v42,
            v43,
            0LL,
            0LL,
            0,
            v48,
            0LL,
            0LL);
        }
      }
    }
    else if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 25LL) & 8) != 0 )
    {
      SetVisible(a2, 0x11u);
      if ( !gdwDeferWinEvent )
        v20 = 1;
      xxxWindowEvent(0x8002u, (__int64)a2, 0, 0, v20);
      xxxRedrawWindow(a2, 0LL, 0LL, 1157);
    }
    if ( v45 )
    {
      v35 = *(_QWORD *)a2;
      v36 = (void *)ReferenceDwmApiPort(v30, v29, v31);
      DwmAsyncNotifyAnimationChange(v36, 1, v35);
    }
    xxxNotifyShellOfWindowSwap(a1, a2);
  }
}

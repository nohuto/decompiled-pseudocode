/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C00E6E60 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01BFEE0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C0066D7C (DwmAsyncNotifyAnimationChange.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C00E7880 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C00E7938 (DwmAsyncGhostChange.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E7EC8 (xxxEnableChildWindowDpiMessageX.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C00E8FB0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // r15d
  __int64 v5; // rcx
  int v6; // r14d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // r13d
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r12d
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rax
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // rax
  int v32; // [rsp+40h] [rbp-30h]
  __int64 v33; // [rsp+48h] [rbp-28h] BYREF
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF

  v32 = 0;
  v2 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = 99;
  v7 = *(_BYTE *)(v5 + 31);
  if ( (v7 & 0x20) != 0 )
    v32 = 1;
  else
    v2 = (v7 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 424), v9 == gpqForeground) && *(struct tagWND **)(v9 + 120) == a2 )
  {
    v10 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 480LL) |= 0x20u;
    v5 = *((_QWORD *)a2 + 5);
  }
  else
  {
    v6 = 115;
    v10 = 112;
  }
  if ( *(char *)(v5 + 26) < 0 )
  {
    SetOrClrWF(1, (__int64)a1, 2688, 1);
    v5 = *((_QWORD *)a2 + 5);
  }
  v34 = *(_OWORD *)(v5 + 88);
  xxxEnableChildWindowDpiMessageX(a1);
  v11 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
  {
    v33 = ValidateHmonitor(*(_QWORD *)(v11 + 256));
    LogicalToPhysicalDPIRect(&v34, &v34, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v33);
    if ( v2 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v34, DWORD1(v34), DWORD2(v34) - v34, HIDWORD(v34) - DWORD1(v34), 20);
    else
      v6 = v10;
  }
  v12 = 3;
  if ( v32 )
  {
    v13 = 7;
  }
  else
  {
    if ( !v2 )
      goto LABEL_16;
    v13 = 3;
  }
  xxxMinMaximizeEx(a1, v13, 1, 0LL, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v6 |= 2u;
LABEL_16:
  v17 = IsWindowDesktopComposed(a2);
  if ( v17 )
  {
    v18 = (void *)ReferenceDwmApiPort(v15, v14, v16);
    DwmAsyncGhostChange(v18);
    v22 = (void *)ReferenceDwmApiPort(v20, v19, v21);
    DwmAsyncNotifyAnimationChange(v22, 0, *(_QWORD *)a2);
    v26 = (void *)ReferenceDwmApiPort(v24, v23, v25);
    DwmAsyncNotifyAnimationChange(v26, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, (__int64)a1, 3585, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, (__int64)a2, 1056, 1);
    SetOrClrWF(1, (__int64)a1, 1056, 1);
    v27 = 1LL;
  }
  else
  {
    v27 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v12 = 1;
  xxxWindowEvent(0x8003u, (__int64)a2, 0, 0, v12);
  xxxSetWindowPos(a1, v27, (unsigned int)v34, DWORD1(v34), DWORD2(v34) - v34, HIDWORD(v34) - DWORD1(v34), v6);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v17 )
  {
    v31 = (void *)ReferenceDwmApiPort(v29, v28, v30);
    DwmAsyncNotifyAnimationChange(v31, 1, *(_QWORD *)a1);
  }
}

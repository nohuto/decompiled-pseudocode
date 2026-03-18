/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C01E3C90 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00B83EC (DwmAsyncNotifyAnimationChange.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0104E20 (xxxEnableChildWindowDpiMessageX.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01E2670 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01E32B4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C02580E4 (DwmAsyncGhostChange.c)
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
  unsigned int v12; // r13d
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r12d
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  int v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF

  v28 = 0;
  v2 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = 99;
  v7 = *(_BYTE *)(v5 + 31);
  if ( (v7 & 0x20) != 0 )
    v28 = 1;
  else
    v2 = (v7 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 432), v9 == gpqForeground) && *(struct tagWND **)(v9 + 120) == a2 )
  {
    v10 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 488LL) |= 0x20u;
    v5 = *((_QWORD *)a2 + 5);
  }
  else
  {
    v6 = 115;
    v10 = 112;
  }
  if ( *(char *)(v5 + 26) < 0 )
  {
    SetOrClrWF(1, (__int64)a1, 0xA80u, 1);
    v5 = *((_QWORD *)a2 + 5);
  }
  v30 = *(_OWORD *)(v5 + 88);
  xxxEnableChildWindowDpiMessageX(a1);
  v11 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
  {
    v29 = ValidateHmonitor(*(_QWORD *)(v11 + 256));
    LogicalToPhysicalDPIRect(&v30, &v30, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v29);
    if ( v2 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v30, DWORD1(v30), DWORD2(v30) - v30, HIDWORD(v30) - DWORD1(v30), 20);
    else
      v6 = v10;
  }
  v12 = 3;
  if ( v28 )
  {
    v13 = 7;
  }
  else
  {
    if ( !v2 )
      goto LABEL_20;
    v13 = 3;
  }
  xxxMinMaximizeEx(a1, v13, 1, 0LL, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v6 |= 2u;
LABEL_20:
  v16 = IsWindowDesktopComposed(a2);
  if ( v16 )
  {
    v17 = (void *)ReferenceDwmApiPort(v15, v14);
    DwmAsyncGhostChange(v17);
    v20 = (void *)ReferenceDwmApiPort(v19, v18);
    DwmAsyncNotifyAnimationChange(v20, 0, *(_QWORD *)a2);
    v23 = (void *)ReferenceDwmApiPort(v22, v21);
    DwmAsyncNotifyAnimationChange(v23, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, (__int64)a1, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, (__int64)a2, 0x420u, 1);
    SetOrClrWF(1, (__int64)a1, 0x420u, 1);
    v24 = 1LL;
  }
  else
  {
    v24 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v12 = 1;
  xxxWindowEvent(0x8003u, (__int64)a2, 0, 0, v12);
  xxxSetWindowPos(a1, v24, (unsigned int)v30, DWORD1(v30), DWORD2(v30) - v30, HIDWORD(v30) - DWORD1(v30), v6);
  xxxNotifyShellOfWindowSwap(a2, (unsigned int **)a1);
  if ( v16 )
  {
    v27 = (void *)ReferenceDwmApiPort(v26, v25);
    DwmAsyncNotifyAnimationChange(v27, 1, *(_QWORD *)a1);
  }
}

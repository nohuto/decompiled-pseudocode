/*
 * XREFs of xxxAddShadow @ 0x1C0139D34
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013B2B4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r14d
  __int64 v9; // rax
  _DWORD *Window; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int128 v25; // [rsp+98h] [rbp-29h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v27[3]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v28[3]; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v29[4]; // [rsp+E8h] [rbp+27h] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) == gatomShadow )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v27, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6),
        v8 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v9 = *((_QWORD *)a1 + 5);
  v28[2] = 0LL;
  Window = xxxCreateWindowEx(
             v5,
             (wchar_t *)(unsigned __int16)gatomShadow,
             (unsigned __int16)gatomShadow,
             0LL,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v28,
             hModuleWin,
             0LL,
             *(_DWORD *)(v9 + 236),
             0xA00u,
             v8,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v11);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)v27, v12);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
  v29[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v29;
  v29[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxInheritWindowMonitor((struct tagWND *)Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v14, (struct tagWND *)Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window);
    ThreadUnlock1(v24, v23);
    goto LABEL_20;
  }
  *(_QWORD *)&v25 = v3;
  *((_QWORD *)&v25 + 1) = a1;
  v15 = v25;
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v25 = v15;
  HMAssignmentLock(&v25);
  *((_QWORD *)&v25 + 1) = Window;
  *(_QWORD *)&v25 = v3 + 8;
  v26 = v25;
  HMAssignmentLock(&v26);
  if ( (unsigned int)GetWindowCloakState((__int64)a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  *(_QWORD *)(v17 + 16) = v27[0];
  PushW32ThreadLock(v3, v27, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos((struct tagWND *)Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v19, v18);
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
  *(_QWORD *)(v21 + 16) = v27[0];
  return 1LL;
}

/*
 * XREFs of xxxAddShadow @ 0x1C01456C4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146010 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v11; // r14
  __int64 v12; // rax
  struct tagWND *Window; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD v38[3]; // [rsp+98h] [rbp-80h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-68h] BYREF
  struct tagWND *v40; // [rsp+B8h] [rbp-60h]
  __int64 v41; // [rsp+C0h] [rbp-58h]
  __int128 v42; // [rsp+C8h] [rbp-50h]
  __int128 v43; // [rsp+D8h] [rbp-40h]
  __int64 v44[4]; // [rsp+E8h] [rbp-30h] BYREF
  __int128 v45; // [rsp+108h] [rbp-10h] BYREF
  __int128 v46; // [rsp+118h] [rbp+0h] BYREF

  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(v38, 0, sizeof(v38));
  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == gatomShadow )
    return 0LL;
  v2 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v38, (__int64)Win32FreePool, v3);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_BYTE *)(v5 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v5, v7)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8),
        v11 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v11 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v44, 0LL);
  v12 = *((_QWORD *)a1 + 5);
  v44[2] = 0LL;
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v6,
                              (unsigned __int16)gatomShadow,
                              (unsigned __int16)gatomShadow,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64 **)v44,
                              hModuleWin,
                              0LL,
                              *(_DWORD *)(v12 + 236),
                              0xA00u,
                              v11,
                              0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v44, v14, v15, v16);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)v38, v17, v18, v19);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v39 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v39;
  v40 = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, (__int64 *)a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v21, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((__int64 *)Window);
    ThreadUnlock1(v36, v35, v37);
    goto LABEL_20;
  }
  *(_QWORD *)(v4 + 16) = gpshadowFirst;
  *(_QWORD *)&v42 = v4;
  *((_QWORD *)&v42 + 1) = a1;
  gpshadowFirst = (struct tagSHADOW *)v4;
  v45 = v42;
  HMAssignmentLock(&v45);
  *((_QWORD *)&v43 + 1) = Window;
  *(_QWORD *)&v43 = v4 + 8;
  v46 = v43;
  HMAssignmentLock(&v46);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v4 + 8), 0LL, 1u);
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  *(_QWORD *)(v25 + 16) = v38[0];
  PushW32ThreadLock(v4, v38, (__int64)RemoveShadow, v26);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v28, v27, v29);
  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32);
  *(_QWORD *)(v33 + 16) = v38[0];
  return 1LL;
}

/*
 * XREFs of xxxAddShadow @ 0x1C0146474
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v10; // r14
  __int64 v11; // rax
  struct tagWND *Window; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD v32[3]; // [rsp+98h] [rbp-80h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-68h] BYREF
  struct tagWND *v34; // [rsp+B8h] [rbp-60h]
  __int64 v35; // [rsp+C0h] [rbp-58h]
  __int128 v36; // [rsp+C8h] [rbp-50h]
  __int128 v37; // [rsp+D8h] [rbp-40h]
  __int64 v38[4]; // [rsp+E8h] [rbp-30h] BYREF
  __int128 v39; // [rsp+108h] [rbp-10h] BYREF
  __int128 v40; // [rsp+118h] [rbp+0h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(v32, 0, sizeof(v32));
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
  v3 = v2;
  if ( !v2 )
    return 0LL;
  PushW32ThreadLock(v2, v32, (__int64)Win32FreePool);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_BYTE *)(v4 + 24) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v4, v6)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7),
        v10 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v10 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v38, 0LL);
  v11 = *((_QWORD *)a1 + 5);
  v38[2] = 0LL;
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v5,
                              (unsigned __int16)gatomShadow,
                              (unsigned __int16)gatomShadow,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64 **)v38,
                              hModuleWin,
                              0LL,
                              *(_DWORD *)(v11 + 236),
                              0xA00u,
                              v10,
                              0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v13, v14);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_20:
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v15, v16);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16);
  v33 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v33;
  v34 = Window;
  HMLockObject(Window);
  xxxInheritWindowMonitor(Window, (__int64 *)a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v18, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((__int64 *)Window);
    ThreadUnlock1(v30, v29, v31);
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 16) = gpshadowFirst;
  *(_QWORD *)&v36 = v3;
  *((_QWORD *)&v36 + 1) = a1;
  gpshadowFirst = (struct tagSHADOW *)v3;
  v39 = v36;
  HMAssignmentLock(&v39);
  *((_QWORD *)&v37 + 1) = Window;
  *(_QWORD *)&v37 = v3 + 8;
  v40 = v37;
  HMAssignmentLock(&v40);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v3 + 8), 0LL, 1u);
  v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20);
  *(_QWORD *)(v21 + 16) = v32[0];
  PushW32ThreadLock(v3, v32, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v23, v22, v24);
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26);
  *(_QWORD *)(v27 + 16) = v32[0];
  return 1LL;
}

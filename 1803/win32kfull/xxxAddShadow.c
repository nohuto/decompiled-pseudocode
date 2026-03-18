/*
 * XREFs of xxxAddShadow @ 0x1C0119F60
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011A754 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsSysShadow @ 0x1C013B390 (IsSysShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxAddShadow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // r14d
  __int64 v13; // rax
  _DWORD *Window; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v30[4]; // [rsp+98h] [rbp-80h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-60h]
  __int128 v32; // [rsp+C8h] [rbp-50h]
  _QWORD v33[4]; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v34; // [rsp+F8h] [rbp-20h] BYREF
  __int128 v35; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v36[4]; // [rsp+118h] [rbp+0h] BYREF

  if ( gbDisableAlpha )
    return 0LL;
  if ( gcOverlays )
    return 0LL;
  v5 = (unsigned int)gpdwCPUserPreferencesMask & 0x80040000;
  if ( (_DWORD)v5 != -2147221504 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( (unsigned int)IsSysShadow(a1, v5, a3, a4) )
    return 0LL;
  v6 = Win32AllocPoolZInit(24LL, 1685287765LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  PushW32ThreadLock(v6, v30, (__int64)Win32FreePool);
  v8 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8 | 0x800A0;
  if ( !PsGetCurrentProcessWin32Process(v9)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10),
        v12 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v12 = 0;
  }
  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v13 = *((_QWORD *)a1 + 5);
  v33[2] = 0LL;
  Window = xxxCreateWindowEx(
             v8,
             (unsigned __int16)gatomShadow,
             (unsigned __int16)gatomShadow,
             0LL,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             (__int64)v33,
             hModuleWin,
             0LL,
             *(_DWORD *)(v13 + 236),
             0xA00u,
             v12,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v15);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_19:
    PopAndFreeAlwaysW32ThreadLock((__int64)v30);
    return 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v36[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v36;
  v36[1] = Window;
  _InterlockedIncrement(Window + 2);
  xxxInheritWindowMonitor((struct tagWND *)Window, a1, 1);
  ++gdwDeferWinEvent;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(v18, (struct tagWND *)Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow((ULONG_PTR)Window);
    ThreadUnlock1(v28, v27, v29);
    goto LABEL_19;
  }
  *(_QWORD *)(v7 + 16) = gpshadowFirst;
  *(_QWORD *)&v31 = v7;
  *((_QWORD *)&v31 + 1) = a1;
  gpshadowFirst = (struct tagSHADOW *)v7;
  v34 = v31;
  HMAssignmentLock(&v34);
  *((_QWORD *)&v32 + 1) = Window;
  *(_QWORD *)&v32 = v7 + 8;
  v35 = v32;
  HMAssignmentLock(&v35);
  if ( (unsigned int)GetWindowCloakState(a1) )
    zzzSetWindowCompositionCloak(*(_QWORD *)(v7 + 8), 0LL, 1u);
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
  *(_QWORD *)(v20 + 16) = v30[0];
  PushW32ThreadLock(v7, v30, (__int64)RemoveShadow);
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos((struct tagWND *)Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  ThreadUnlock1(v22, v21, v23);
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
  *(_QWORD *)(v25 + 16) = v30[0];
  return 1LL;
}

/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01BFEE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C00E73B0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01BFA14 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BFB78 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // edi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD v20[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v6);
    return v4;
  }
  LOBYTE(v6) = 1;
  v8 = HMValidateHandleNoSecure((unsigned __int64)a2, v6);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v20;
    v20[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v8) )
      goto LABEL_19;
    LOBYTE(v10) = 1;
    v13 = HMValidateHandleNoSecure((unsigned __int64)a1, v10);
    v14 = v13;
    if ( !v13 )
      goto LABEL_19;
    v11 = gptiCurrent;
    v10 = gptiCurrent;
    if ( *(_QWORD *)(v13 + 16) != gptiCurrent )
      goto LABEL_19;
    v12 = *(_WORD **)(*(_QWORD *)(v13 + 112) + 8LL);
    v10 = gpsi;
    v11 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( *v12 != (_WORD)v11 )
      goto LABEL_19;
    v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
    v21[0] = *(_QWORD *)(v15 + 408);
    *(_QWORD *)(v15 + 408) = v21;
    v21[1] = v14;
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v14, a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v8, a1) )
      {
        SetGhostFNID((struct tagWND *)v14, 1);
        xxxShowGhostWindow((struct tagWND *)v14, (struct tagWND *)v8);
        if ( !(unsigned int)IsWindowBeingDestroyed(v14)
          && !(unsigned int)IsWindowBeingDestroyed(v8)
          && (HWND)RealGetProp(*(_QWORD *)(v14 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID((struct tagWND *)v14, 0);
        if ( (HWND)RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
          RealInternalRemoveProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
        xxxHideGhostWindow((struct tagWND *)v14, (struct tagWND *)v8);
      }
      RealInternalRemoveProp(*(_QWORD *)(v14 + 120), *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
    }
LABEL_18:
    ThreadUnlock1(v17, v16, v18);
LABEL_19:
    ThreadUnlock1(v11, v10, v12);
  }
  return v4;
}

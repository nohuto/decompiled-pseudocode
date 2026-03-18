/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C00E6E60
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00C0C4C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C00E708C (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C00E73B0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v21[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v21;
    v21[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v8) )
      goto LABEL_23;
    if ( RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) != -1 )
      goto LABEL_23;
    if ( !(unsigned int)IsHungWindow(v8) )
      goto LABEL_23;
    LOBYTE(v10) = 1;
    v11 = HMValidateHandleNoSecure((unsigned __int64)a1, v10);
    v12 = v11;
    if ( !v11
      || *(_QWORD *)(v11 + 16) != gptiCurrent
      || **(_WORD **)(*(_QWORD *)(v11 + 112) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      goto LABEL_23;
    }
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
    v22[0] = *(_QWORD *)(v13 + 408);
    *(_QWORD *)(v13 + 408) = v22;
    v22[1] = v12;
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v12, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v8, a1) )
      {
        SetGhostFNID((struct tagWND *)v12, 1);
        xxxShowGhostWindow((struct tagWND *)v12, (struct tagWND *)v8);
        if ( !(unsigned int)IsWindowBeingDestroyed(v12)
          && !(unsigned int)IsWindowBeingDestroyed(v8)
          && (HWND)RealGetProp(*(_QWORD *)(v12 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a2
          && (HWND)RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID((struct tagWND *)v12, 0);
        if ( (HWND)RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
          RealInternalRemoveProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
        xxxHideGhostWindow((struct tagWND *)v12, (struct tagWND *)v8);
      }
      RealInternalRemoveProp(*(_QWORD *)(v12 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    }
LABEL_16:
    ThreadUnlock1(v15, v14, v16);
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1(v18, v17, v19);
      return v4;
    }
LABEL_23:
    if ( RealGetProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) == -1 )
      RealInternalRemoveProp(*(_QWORD *)(v8 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    goto LABEL_17;
  }
  return v4;
}

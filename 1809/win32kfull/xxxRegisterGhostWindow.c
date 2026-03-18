/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C01E3C90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0007F84 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01E25A8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E25E8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v29[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v30[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v8, v9, v10);
    return v6;
  }
  LOBYTE(v8) = 1;
  v12 = HMValidateHandleNoSecure((unsigned __int64)a2, v8);
  if ( v12 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
    v29[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v29;
    v29[1] = v12;
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v12) )
      goto LABEL_25;
    if ( GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) != -1 )
      goto LABEL_25;
    if ( !(unsigned int)IsHungWindow(v12) )
      goto LABEL_25;
    LOBYTE(v14) = 1;
    v15 = HMValidateHandleNoSecure((unsigned __int64)a1, v14);
    v16 = v15;
    if ( !v15
      || *(_QWORD *)(v15 + 16) != gptiCurrent
      || **(_WORD **)(*(_QWORD *)(v15 + 112) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      goto LABEL_25;
    }
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
    v30[0] = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = v30;
    v30[1] = v16;
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v16, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v12, a1) )
      {
        SetGhostFNID((struct tagWND *)v16, 1);
        xxxShowGhostWindow((struct tagWND *)v16, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v16)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v16, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_24;
        }
        SetGhostFNID((struct tagWND *)v16, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v20 = *(unsigned __int16 *)(gpsi + 900LL);
          v21 = *(_QWORD *)(v12 + 120);
          if ( (_WORD)v20 == word_1C0317660 )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v21, v20, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v16, (struct tagWND *)v12);
      }
      v22 = *(unsigned __int16 *)(gpsi + 900LL);
      v23 = *(_QWORD *)(v16 + 120);
      if ( (_WORD)v22 == word_1C0317660 )
        *(_QWORD *)(*(_QWORD *)(v16 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v23, v22, 1LL);
    }
LABEL_24:
    ThreadUnlock1(v19, v18);
    if ( v6 )
    {
LABEL_29:
      ThreadUnlock1(v25, v24);
      return v6;
    }
LABEL_25:
    if ( GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == -1 )
    {
      v26 = *(unsigned __int16 *)(gpsi + 900LL);
      v27 = *(_QWORD *)(v12 + 120);
      if ( (_WORD)v26 == word_1C0317660 )
        *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v27, v26, 1LL);
    }
    goto LABEL_29;
  }
  return v6;
}

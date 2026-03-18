/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E2534 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01E25A8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2A30 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v26;
    v26[1] = v12;
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v12) )
      goto LABEL_23;
    LOBYTE(v14) = 1;
    v16 = HMValidateHandleNoSecure((unsigned __int64)a1, v14);
    v17 = v16;
    if ( !v16 )
      goto LABEL_23;
    v15 = gptiCurrent;
    v14 = gptiCurrent;
    if ( *(_QWORD *)(v16 + 16) != gptiCurrent )
      goto LABEL_23;
    v14 = gpsi;
    v15 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( **(_WORD **)(*(_QWORD *)(v16 + 112) + 8LL) != (_WORD)v15 )
      goto LABEL_23;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
    v27[0] = *(_QWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 416) = v27;
    v27[1] = v17;
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v17, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v12, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v17, 1);
        xxxShowGhostWindow((struct tagWND *)v17, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v17)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v17, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_22;
        }
        SetGhostFNID((struct tagWND *)v17, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v21 = *(unsigned __int16 *)(gpsi + 1378LL);
          v22 = *(_QWORD *)(v12 + 120);
          if ( (_WORD)v21 == word_1C0317660 )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v22, v21, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v17, (struct tagWND *)v12);
      }
      v23 = *(unsigned __int16 *)(gpsi + 1378LL);
      v24 = *(_QWORD *)(v17 + 120);
      if ( (_WORD)v23 == word_1C0317660 )
        *(_QWORD *)(*(_QWORD *)(v17 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v24, v23, 1LL);
    }
LABEL_22:
    ThreadUnlock1(v20, v19);
LABEL_23:
    ThreadUnlock1(v15, v14);
  }
  return v6;
}

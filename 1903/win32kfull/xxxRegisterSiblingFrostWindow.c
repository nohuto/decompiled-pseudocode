/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01F9820
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01518E0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F9328 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F9498 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _WORD *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  __int64 v33; // [rsp+28h] [rbp-28h]
  __int64 v34; // [rsp+30h] [rbp-20h]
  __int64 v35; // [rsp+38h] [rbp-18h] BYREF
  __int64 v36; // [rsp+40h] [rbp-10h]
  __int64 v37; // [rsp+48h] [rbp-8h]

  v6 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v8, v9, v10);
    return v6;
  }
  LOBYTE(v8) = 1;
  v12 = HMValidateHandleNoSecure((unsigned __int64)a2, v8, v9, v10);
  if ( v12 )
  {
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14);
    v32 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
    v33 = v12;
    HMLockObject(v12);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v12) )
      goto LABEL_23;
    LOBYTE(v16) = 1;
    v20 = HMValidateHandleNoSecure((unsigned __int64)a1, v16, (__int64)v18, v19);
    v22 = v20;
    if ( !v20 )
      goto LABEL_23;
    v17 = gptiCurrent;
    v16 = gptiCurrent;
    if ( *(_QWORD *)(v20 + 16) != gptiCurrent )
      goto LABEL_23;
    v18 = *(_WORD **)(*(_QWORD *)(v20 + 136) + 8LL);
    v16 = gpsi;
    v17 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( *v18 != (_WORD)v17 )
      goto LABEL_23;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, (__int64)v18, v21);
    v35 = *(_QWORD *)(v23 + 408);
    *(_QWORD *)(v23 + 408) = &v35;
    v36 = v22;
    HMLockObject(v22);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v22, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v12, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v22, 1);
        xxxShowGhostWindow((struct tagWND *)v22, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v22)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v22, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_22;
        }
        SetGhostFNID((struct tagWND *)v22, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v27 = *(unsigned __int16 *)(gpsi + 1378LL);
          v28 = *(_QWORD *)(v12 + 144);
          if ( (_WORD)v27 == word_1C032C66C )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v28, v27, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v22, (struct tagWND *)v12);
      }
      v29 = *(unsigned __int16 *)(gpsi + 1378LL);
      v30 = *(_QWORD *)(v22 + 144);
      if ( (_WORD)v29 == word_1C032C66C )
        *(_QWORD *)(*(_QWORD *)(v22 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v30, v29, 1LL);
    }
LABEL_22:
    ThreadUnlock1(v25, v24, v26);
LABEL_23:
    ThreadUnlock1(v17, v16, v18);
  }
  return v6;
}

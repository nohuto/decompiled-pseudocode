/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C01509A0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0150C18 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01518E0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0151920 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdi
  _WORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-30h] BYREF
  __int64 v38; // [rsp+28h] [rbp-28h]
  __int64 v39; // [rsp+30h] [rbp-20h]
  __int64 v40; // [rsp+38h] [rbp-18h] BYREF
  __int64 v41; // [rsp+40h] [rbp-10h]
  __int64 v42; // [rsp+48h] [rbp-8h]

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
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14);
    v37 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v37;
    v38 = v12;
    HMLockObject(v12);
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v12) )
      goto LABEL_27;
    if ( GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) != -1 )
      goto LABEL_27;
    if ( !(unsigned int)IsHungWindow(v12) )
      goto LABEL_27;
    LOBYTE(v16) = 1;
    v19 = HMValidateHandleNoSecure((unsigned __int64)a1, v16, v17, v18);
    v21 = v19;
    if ( !v19 )
      goto LABEL_27;
    if ( *(_QWORD *)(v19 + 16) != gptiCurrent )
      goto LABEL_27;
    v22 = *(_WORD **)(*(_QWORD *)(v19 + 136) + 8LL);
    if ( *v22 != *(_WORD *)(gpsi + 900LL) )
      goto LABEL_27;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, (__int64)v22, v20);
    v40 = *(_QWORD *)(v23 + 408);
    *(_QWORD *)(v23 + 408) = &v40;
    v41 = v21;
    HMLockObject(v21);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v21, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v12, a1) )
      {
        SetGhostFNID((struct tagWND *)v21, 1);
        xxxShowGhostWindow((struct tagWND *)v21, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v21)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v21, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_16;
        }
        SetGhostFNID((struct tagWND *)v21, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v31 = *(unsigned __int16 *)(gpsi + 900LL);
          v32 = *(_QWORD *)(v12 + 144);
          if ( (_WORD)v31 == word_1C032C66C )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v32, v31, 1LL);
        }
        xxxHideGhostWindow((struct tagWND *)v21, (struct tagWND *)v12);
      }
      v33 = *(unsigned __int16 *)(gpsi + 900LL);
      v34 = *(_QWORD *)(v21 + 144);
      if ( (_WORD)v33 == word_1C032C66C )
        *(_QWORD *)(*(_QWORD *)(v21 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v34, v33, 1LL);
    }
LABEL_16:
    ThreadUnlock1(v25, v24, v26);
    if ( v6 )
    {
LABEL_17:
      ThreadUnlock1(v28, v27, v29);
      return v6;
    }
LABEL_27:
    if ( GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == -1 )
    {
      v35 = *(unsigned __int16 *)(gpsi + 900LL);
      v36 = *(_QWORD *)(v12 + 144);
      if ( (_WORD)v35 == word_1C032C66C )
        *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v36, v35, 1LL);
    }
    goto LABEL_17;
  }
  return v6;
}

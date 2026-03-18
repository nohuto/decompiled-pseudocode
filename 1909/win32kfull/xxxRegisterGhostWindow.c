/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0151760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01519D8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01526A0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01526E0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
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
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  _WORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
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
  v12 = HMValidateHandleNoSecure((unsigned __int64)a2, v8, v9);
  if ( v12 )
  {
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13);
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
    LOBYTE(v15) = 1;
    v17 = HMValidateHandleNoSecure((unsigned __int64)a1, v15, v16);
    v18 = v17;
    if ( !v17 )
      goto LABEL_27;
    if ( *(_QWORD *)(v17 + 16) != gptiCurrent )
      goto LABEL_27;
    v19 = *(_WORD **)(*(_QWORD *)(v17 + 136) + 8LL);
    if ( *v19 != *(_WORD *)(gpsi + 900LL) )
      goto LABEL_27;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, (__int64)v19);
    v40 = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = &v40;
    v41 = v18;
    HMLockObject(v18);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v18, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v12, a1) )
      {
        SetGhostFNID((struct tagWND *)v18, 1);
        xxxShowGhostWindow((struct tagWND *)v18, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v18)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v18, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_16;
        }
        SetGhostFNID((struct tagWND *)v18, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == a1 )
        {
          v30 = *(unsigned __int16 *)(gpsi + 900LL);
          v31 = *(_QWORD *)(v12 + 144);
          if ( (_WORD)v30 == word_1C032A65C )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v31, v30, 1LL, v29);
        }
        xxxHideGhostWindow((struct tagWND *)v18, (struct tagWND *)v12);
      }
      v32 = *(unsigned __int16 *)(gpsi + 900LL);
      v33 = *(_QWORD *)(v18 + 144);
      if ( (_WORD)v32 == word_1C032A65C )
        *(_QWORD *)(*(_QWORD *)(v18 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v33, v32, 1LL, v24);
    }
LABEL_16:
    ThreadUnlock1(v22, v21, v23);
    if ( v6 )
    {
LABEL_17:
      ThreadUnlock1(v26, v25, v27);
      return v6;
    }
LABEL_27:
    if ( GetProp(v12, *(unsigned __int16 *)(gpsi + 900LL), 1LL) == -1 )
    {
      v35 = *(unsigned __int16 *)(gpsi + 900LL);
      v36 = *(_QWORD *)(v12 + 144);
      if ( (_WORD)v35 == word_1C032A65C )
        *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v36, v35, 1LL, v34);
    }
    goto LABEL_17;
  }
  return v6;
}

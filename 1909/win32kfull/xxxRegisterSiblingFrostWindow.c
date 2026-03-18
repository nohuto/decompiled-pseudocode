/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01F9570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01526A0 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F9078 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F91E8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
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
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _WORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 v32; // [rsp+28h] [rbp-28h]
  __int64 v33; // [rsp+30h] [rbp-20h]
  __int64 v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h]
  __int64 v36; // [rsp+48h] [rbp-8h]

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
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13);
    v31 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v31;
    v32 = v12;
    HMLockObject(v12);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v12) )
      goto LABEL_23;
    LOBYTE(v15) = 1;
    v18 = HMValidateHandleNoSecure((unsigned __int64)a1, v15, (__int64)v17);
    v19 = v18;
    if ( !v18 )
      goto LABEL_23;
    v16 = gptiCurrent;
    v15 = gptiCurrent;
    if ( *(_QWORD *)(v18 + 16) != gptiCurrent )
      goto LABEL_23;
    v17 = *(_WORD **)(*(_QWORD *)(v18 + 136) + 8LL);
    v15 = gpsi;
    v16 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( *v17 != (_WORD)v16 )
      goto LABEL_23;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, (__int64)v17);
    v34 = *(_QWORD *)(v20 + 408);
    *(_QWORD *)(v20 + 408) = &v34;
    v35 = v19;
    HMLockObject(v19);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v19, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v12, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v19, 1);
        xxxShowGhostWindow((struct tagWND *)v19, (struct tagWND *)v12);
        if ( !(unsigned int)IsWindowBeingDestroyed(v19)
          && !(unsigned int)IsWindowBeingDestroyed(v12)
          && (HWND)GetProp(v19, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a2
          && (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v6 = 1;
          goto LABEL_22;
        }
        SetGhostFNID((struct tagWND *)v19, 0);
        if ( (HWND)GetProp(v12, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) == a1 )
        {
          v26 = *(unsigned __int16 *)(gpsi + 1378LL);
          v27 = *(_QWORD *)(v12 + 144);
          if ( (_WORD)v26 == word_1C032A65C )
            *(_QWORD *)(*(_QWORD *)(v12 + 40) + 312LL) = 0LL;
          RealInternalRemoveProp(v27, v26, 1LL, v25);
        }
        xxxHideGhostWindow((struct tagWND *)v19, (struct tagWND *)v12);
      }
      v28 = *(unsigned __int16 *)(gpsi + 1378LL);
      v29 = *(_QWORD *)(v19 + 144);
      if ( (_WORD)v28 == word_1C032A65C )
        *(_QWORD *)(*(_QWORD *)(v19 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v29, v28, 1LL, v24);
    }
LABEL_22:
    ThreadUnlock1(v22, v21, v23);
LABEL_23:
    ThreadUnlock1(v16, v15, v17);
  }
  return v6;
}

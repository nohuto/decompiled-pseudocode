/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C01E3704
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C01E3C00 (xxxHandleHealthyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0;
  v4 = *((_QWORD *)a1 + 15);
  v5 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v5 == word_1C0317660 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v4, v5, 1LL);
  if ( v6 )
  {
    if ( v6 == -1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessages(0x34uLL, *(_QWORD *)a1);
      v6 = 0LL;
    }
    goto LABEL_12;
  }
  v8 = *(unsigned __int16 *)(gpsi + 1378LL);
  v9 = *((_QWORD *)a1 + 15);
  if ( (_WORD)v8 == word_1C0317660 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v9, v8, 1LL);
  if ( v6 )
  {
    v2 = 1;
LABEL_12:
    v1 = 1;
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      v11 = HMValidateHandleNoSecure(v6, v7);
      if ( v11 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v11;
        _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
        v14 = *(_QWORD *)(v11 + 40);
        if ( (*(_WORD *)(v14 + 42) & 0x2FFF) == 0x2AA )
        {
          if ( v2 )
            v15 = *(unsigned __int16 *)(gpsi + 1378LL);
          else
            v15 = *(unsigned __int16 *)(gpsi + 900LL);
          v16 = *(_QWORD *)(v11 + 120);
          if ( (_WORD)v15 == word_1C0317660 )
            *(_QWORD *)(v14 + 312) = 0LL;
          RealInternalRemoveProp(v16, v15, 1LL);
          xxxHideGhostWindow((struct tagWND *)v11, a1);
        }
        else
        {
          v1 = 0;
        }
        ThreadUnlock1(ThreadWin32Thread, v12);
      }
    }
  }
  return v1;
}

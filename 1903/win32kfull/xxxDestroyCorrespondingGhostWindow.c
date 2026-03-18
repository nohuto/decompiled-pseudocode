/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C01505A4
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C0150500 (xxxHandleHealthyWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // edi
  int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v2 = 0;
  v4 = *((_QWORD *)a1 + 18);
  v5 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v5 == word_1C032C66C )
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
    goto LABEL_5;
  }
  v21 = *(unsigned __int16 *)(gpsi + 1378LL);
  v22 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v21 == word_1C032C66C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v6 = RealInternalRemoveProp(v22, v21, 1LL);
  if ( v6 )
  {
    v2 = 1;
LABEL_5:
    v1 = 1;
    if ( v6 )
    {
      LOBYTE(v7) = 1;
      v11 = HMValidateHandleNoSecure(v6, v7, v8, v9);
      if ( v11 )
      {
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
        v23 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
        v24 = v11;
        HMLockObject(v11);
        v17 = *(_QWORD *)(v11 + 40);
        if ( (*(_WORD *)(v17 + 42) & 0x3FFF) == 0x2AA )
        {
          if ( v2 )
            v18 = *(unsigned __int16 *)(gpsi + 1378LL);
          else
            v18 = *(unsigned __int16 *)(gpsi + 900LL);
          v19 = *(_QWORD *)(v11 + 144);
          if ( (_WORD)v18 == word_1C032C66C )
            *(_QWORD *)(v17 + 312) = 0LL;
          RealInternalRemoveProp(v19, v18, 1LL);
          xxxHideGhostWindow((struct tagWND *)v11, a1);
        }
        else
        {
          v1 = 0;
        }
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  return v1;
}

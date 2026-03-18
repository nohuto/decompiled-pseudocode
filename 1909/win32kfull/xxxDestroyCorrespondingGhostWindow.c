/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C0151364
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C01512C0 (xxxHandleHealthyWindow.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  __int64 v28; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = 0;
  v7 = *((_QWORD *)a1 + 18);
  v8 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v8 == word_1C032A65C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v9 = RealInternalRemoveProp(v7, v8, 1LL, a4);
  if ( v9 )
  {
    if ( v9 == -1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessages(0x34uLL, *(_QWORD *)a1);
      v9 = 0LL;
    }
    goto LABEL_5;
  }
  v24 = *(unsigned __int16 *)(gpsi + 1378LL);
  v25 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v24 == word_1C032A65C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v9 = RealInternalRemoveProp(v25, v24, 1LL, v12);
  if ( v9 )
  {
    v5 = 1;
LABEL_5:
    v4 = 1;
    if ( v9 )
    {
      LOBYTE(v10) = 1;
      v14 = HMValidateHandleNoSecure(v9, v10, v11);
      if ( v14 )
      {
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15);
        v26 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
        v27 = v14;
        HMLockObject(v14);
        v20 = *(_QWORD *)(v14 + 40);
        if ( (*(_WORD *)(v20 + 42) & 0x3FFF) == 0x2AA )
        {
          if ( v5 )
            v21 = *(unsigned __int16 *)(gpsi + 1378LL);
          else
            v21 = *(unsigned __int16 *)(gpsi + 900LL);
          v22 = *(_QWORD *)(v14 + 144);
          if ( (_WORD)v21 == word_1C032A65C )
            *(_QWORD *)(v20 + 312) = 0LL;
          RealInternalRemoveProp(v22, v21, 1LL, v19);
          xxxHideGhostWindow((struct tagWND *)v14, a1);
        }
        else
        {
          v4 = 0;
        }
        ThreadUnlock1(v18, v17, v20);
      }
    }
  }
  return v4;
}

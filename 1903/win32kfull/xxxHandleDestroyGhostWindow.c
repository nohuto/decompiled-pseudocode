/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C015D038
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = *((_QWORD *)a1 + 18);
  v4 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v4 == word_1C032C66C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v3, v4, 1LL);
  if ( v5 )
    goto LABEL_9;
  v9 = *(unsigned __int16 *)(gpsi + 1378LL);
  v10 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v9 == word_1C032C66C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v10, v9, 1LL);
  if ( v5 )
  {
    v1 = 1;
LABEL_9:
    LOBYTE(v6) = 1;
    v13 = HMValidateHandleNoSecure(v5, v6, v7, v8);
    if ( v13 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15);
      v22 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
      v23 = v13;
      HMLockObject(v13);
      if ( v1 )
        v17 = *(unsigned __int16 *)(gpsi + 1378LL);
      else
        v17 = *(unsigned __int16 *)(gpsi + 900LL);
      v18 = *(_QWORD *)(v13 + 144);
      if ( (_WORD)v17 == word_1C032C66C )
        *(_QWORD *)(*(_QWORD *)(v13 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v18, v17, 1LL);
      xxxHideGhostWindow(a1, (struct tagWND *)v13);
      ThreadUnlock1(v20, v19, v21);
    }
  }
  return 0LL;
}

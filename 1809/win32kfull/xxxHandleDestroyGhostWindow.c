/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C01E39DC
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = *((_QWORD *)a1 + 15);
  v4 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v4 == word_1C0317660 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v3, v4, 1LL);
  if ( v5 )
    goto LABEL_8;
  v7 = *(unsigned __int16 *)(gpsi + 1378LL);
  v8 = *((_QWORD *)a1 + 15);
  if ( (_WORD)v7 == word_1C0317660 )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v5 = RealInternalRemoveProp(v8, v7, 1LL);
  if ( v5 )
  {
    v1 = 1;
LABEL_8:
    LOBYTE(v6) = 1;
    v10 = HMValidateHandleNoSecure(v5, v6);
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v17;
      v17[1] = v10;
      _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
      if ( v1 )
        v12 = *(unsigned __int16 *)(gpsi + 1378LL);
      else
        v12 = *(unsigned __int16 *)(gpsi + 900LL);
      v13 = *(_QWORD *)(v10 + 120);
      if ( (_WORD)v12 == word_1C0317660 )
        *(_QWORD *)(*(_QWORD *)(v10 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v13, v12, 1LL);
      xxxHideGhostWindow(a1, (struct tagWND *)v10);
      ThreadUnlock1(v15, v14);
    }
  }
  return 0LL;
}

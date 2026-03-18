/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C015DFE8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  __int64 v27; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v6 = *((_QWORD *)a1 + 18);
  v7 = *(unsigned __int16 *)(gpsi + 900LL);
  if ( (_WORD)v7 == word_1C032A65C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v8 = RealInternalRemoveProp(v6, v7, 1LL, a4);
  if ( v8 )
    goto LABEL_9;
  v12 = *(unsigned __int16 *)(gpsi + 1378LL);
  v13 = *((_QWORD *)a1 + 18);
  if ( (_WORD)v12 == word_1C032A65C )
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
  v8 = RealInternalRemoveProp(v13, v12, 1LL, v11);
  if ( v8 )
  {
    v4 = 1;
LABEL_9:
    LOBYTE(v9) = 1;
    v16 = HMValidateHandleNoSecure(v8, v9, v10);
    if ( v16 )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v17);
      v25 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
      v26 = v16;
      HMLockObject(v16);
      if ( v4 )
        v20 = *(unsigned __int16 *)(gpsi + 1378LL);
      else
        v20 = *(unsigned __int16 *)(gpsi + 900LL);
      v21 = *(_QWORD *)(v16 + 144);
      if ( (_WORD)v20 == word_1C032A65C )
        *(_QWORD *)(*(_QWORD *)(v16 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v21, v20, 1LL, v19);
      xxxHideGhostWindow(a1, (struct tagWND *)v16);
      ThreadUnlock1(v23, v22, v24);
    }
  }
  return 0LL;
}

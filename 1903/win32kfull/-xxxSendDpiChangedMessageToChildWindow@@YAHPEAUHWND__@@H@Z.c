/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E5F50
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagWND *v9; // rbx
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v9 = (struct tagWND *)v5;
  if ( !v5 )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 40);
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 || *(_WORD *)(v10 + 286) )
    return 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  v16 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
  v17 = v9;
  HMLockObject(v9);
  xxxSendMessage((ULONG_PTR)v9);
  if ( v4 )
    xxxSetWindowPos(v9, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v13, v12, v14);
  return 1LL;
}

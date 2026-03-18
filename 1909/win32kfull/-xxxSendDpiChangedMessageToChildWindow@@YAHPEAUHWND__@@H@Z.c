/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E5DD0
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *v7; // rbx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-18h]

  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3);
  v7 = (struct tagWND *)v4;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  if ( (*(_DWORD *)(v8 + 288) & 0xF) != 2 || *(_WORD *)(v8 + 286) )
    return 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v7;
  HMLockObject(v7);
  xxxSendMessage((ULONG_PTR)v7);
  if ( v3 )
    xxxSetWindowPos(v7, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v11, v10, v12);
  return 1LL;
}

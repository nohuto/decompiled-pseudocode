/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01AE294
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  v5 = v3;
  if ( !v3 || (*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) & 0xF) != 2 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
  v11[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  xxxSendMessage(v5);
  if ( v2 )
    xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v8, v7, v9);
  return 1LL;
}

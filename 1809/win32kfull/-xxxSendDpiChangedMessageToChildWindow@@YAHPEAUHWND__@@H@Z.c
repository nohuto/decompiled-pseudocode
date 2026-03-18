/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01D1368
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00724BC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  v5 = v3;
  if ( !v3 )
    return 0LL;
  v6 = *(_QWORD *)(v3 + 40);
  if ( (*(_DWORD *)(v6 + 288) & 0xF) != 2 || *(_WORD *)(v6 + 286) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  xxxSendMessage(v5);
  if ( v2 )
    xxxSetWindowPos((struct tagWND *)v5, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v9, v8);
  return 1LL;
}

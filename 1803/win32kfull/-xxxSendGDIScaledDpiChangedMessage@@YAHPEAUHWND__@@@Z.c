/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01AE358
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01AE400 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 */

ULONG_PTR __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR result; // rax
  __int64 v3; // rdx
  ULONG_PTR v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  v4 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v9;
    v9[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 232LL) & 0x20000000) != 0 )
      xxxSendMessage(v4);
    xxxSetWindowPos((struct tagWND *)v4, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v7, v6, v8);
    return 1LL;
  }
  return result;
}

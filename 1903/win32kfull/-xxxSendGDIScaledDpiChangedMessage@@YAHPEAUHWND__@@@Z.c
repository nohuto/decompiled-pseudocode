/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E6050
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

ULONG_PTR __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v8 = result;
  if ( result )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    v13 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
    v14 = v8;
    HMLockObject(v8);
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 232LL) & 0x20000000) != 0 )
      xxxSendMessage(v8);
    xxxSetWindowPos((struct tagWND *)v8, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v11, v10, v12);
    return 1LL;
  }
  return result;
}

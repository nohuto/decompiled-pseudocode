/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E5ED0
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E5F9C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

ULONG_PTR __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  ULONG_PTR v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3);
  v6 = result;
  if ( result )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v6;
    HMLockObject(v6);
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 232LL) & 0x20000000) != 0 )
      xxxSendMessage(v6);
    xxxSetWindowPos((struct tagWND *)v6, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v9, v8, v10);
    return 1LL;
  }
  return result;
}

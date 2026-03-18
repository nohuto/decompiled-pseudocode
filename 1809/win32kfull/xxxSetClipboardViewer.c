/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00DE71C
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C00DE810 (NtUserSetClipboardViewer.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v5 = CheckClipboardAccess(a1, a2);
  v6 = (_QWORD *)v5;
  if ( !v5 )
    return 0LL;
  if ( a1 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    if ( *(_QWORD *)(a2 + 672) != v5 )
    {
LABEL_11:
      UserSetLastError(87LL, a2, a3, a4);
      return 0LL;
    }
  }
  PushW32ThreadLock(v5, v13, UserDereferenceObject);
  ObfReferenceObject(v6);
  v7 = (_QWORD *)v6[9];
  if ( v7 )
    v7 = (_QWORD *)*v7;
  v12[0] = v6 + 9;
  v12[1] = a1;
  HMAssignmentLock(v12);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v6, v8);
  PopAndFreeW32ThreadLock((__int64)v13, v9);
  if ( !v7 )
    return 0LL;
  LOBYTE(v10) = 1;
  return HMValidateHandleNoSecure((unsigned __int64)v7, v10);
}

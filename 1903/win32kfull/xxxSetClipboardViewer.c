/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00116B0
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C00115E0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0011998 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v2 = CheckClipboardAccess();
  v3 = (_QWORD *)v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 664LL) != v2 )
  {
LABEL_11:
    UserSetLastError(87LL);
    return 0LL;
  }
  PushW32ThreadLock(v2, v8, UserDereferenceObject);
  ObfReferenceObject(v3);
  v4 = (_QWORD *)v3[9];
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v7[0] = v3 + 9;
  v7[1] = a1;
  HMAssignmentLock(v7);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
  PopAndFreeW32ThreadLock(v8);
  if ( !v4 )
    return 0LL;
  LOBYTE(v5) = 1;
  return HMValidateHandleNoSecure(v4, v5);
}

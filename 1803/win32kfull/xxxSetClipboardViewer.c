/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00B58F0
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C00B5850 (NtUserSetClipboardViewer.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B5D90 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v3 = (_QWORD *)CheckClipboardAccess();
  if ( !v3 )
    return 0LL;
  if ( a1 && *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 664LL) != v3 )
  {
LABEL_11:
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v3, v9, UserDereferenceObject);
  ObfReferenceObject(v3);
  v4 = (_QWORD *)v3[9];
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v8[0] = v3 + 9;
  v8[1] = a1;
  HMAssignmentLock(v8);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
  PopAndFreeW32ThreadLock((__int64)v9, v5);
  if ( !v4 )
    return 0LL;
  LOBYTE(v6) = 1;
  return HMValidateHandleNoSecure((unsigned __int64)v4, v6);
}

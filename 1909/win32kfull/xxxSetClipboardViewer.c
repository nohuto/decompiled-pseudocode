/*
 * XREFs of xxxSetClipboardViewer @ 0x1C0100960
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C0100890 (NtUserSetClipboardViewer.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0100A58 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v14, 0, 24);
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v5 = CheckClipboardAccess();
  v6 = (_QWORD *)v5;
  if ( !v5 )
    return 0LL;
  if ( a1 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
    if ( *(_QWORD *)(a2 + 664) != v5 )
    {
LABEL_11:
      UserSetLastError(87LL, a2, a3, a4);
      return 0LL;
    }
  }
  PushW32ThreadLock(v5, v14, UserDereferenceObject);
  ObfReferenceObject(v6);
  v7 = (_QWORD *)v6[9];
  if ( v7 )
    v7 = (_QWORD *)*v7;
  v13[0] = v6 + 9;
  v13[1] = a1;
  HMAssignmentLock(v13);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v6);
  PopAndFreeW32ThreadLock((__int64)v14, v8, v9);
  if ( !v7 )
    return 0LL;
  LOBYTE(v10) = 1;
  return HMValidateHandleNoSecure((unsigned __int64)v7, v10, v11);
}

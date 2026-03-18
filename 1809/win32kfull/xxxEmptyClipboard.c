/*
 * XREFs of xxxEmptyClipboard @ 0x1C00DE988
 * Callers:
 *     NtUserEmptyClipboard @ 0x1C00DF2C0 (NtUserEmptyClipboard.c)
 *     FreeWindowStation @ 0x1C00E03A0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00DEAE8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00DF170 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rsi
  struct tagCLIP **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  struct tagCLIP *v11; // rdi
  __int64 v12; // rdx
  int v14; // ebp
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( Object )
    goto LABEL_4;
  v6 = (struct tagCLIP **)CheckClipboardAccess(v4, v3);
  Object = v6;
  if ( !v6 )
    return 0LL;
  if ( v6[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v7, v8, v9);
    return 0LL;
  }
LABEL_4:
  v10 = (_DWORD)Object[4] & 0x10;
  if ( !v10 && ThreadWin32Thread )
  {
    PushW32ThreadLock((__int64)Object, v17, UserDereferenceObject);
    ObfReferenceObject(Object);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
  }
  v11 = Object[12];
  if ( v11 )
  {
    v14 = *((_DWORD *)Object + 26);
    if ( v14 )
    {
      do
      {
        v15 = *(unsigned __int16 *)v11;
        --v14;
        if ( (unsigned __int16)v15 >= 0xC000u )
          UserDeleteAtom(v15);
        UT_FreeCBFormat(v11);
        v11 = (struct tagCLIP *)((char *)v11 + 32);
      }
      while ( v14 );
      v11 = Object[12];
    }
    Win32FreePool(v11);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  v16[0] = Object + 10;
  v16[1] = Object[8];
  HMAssignmentLock(v16);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v10 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v17, v12);
  }
  return 1LL;
}

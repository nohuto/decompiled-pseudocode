/*
 * XREFs of xxxEmptyClipboard @ 0x1C00B5A04
 * Callers:
 *     FreeWindowStation @ 0x1C00B54D0 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C00B59D0 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00B5B4C (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C013102C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object, __int64 a2)
{
  __int64 ThreadWin32Thread; // rsi
  struct tagCLIP **v4; // rax
  __int64 v5; // rdx
  int v6; // r14d
  struct tagCLIP *v7; // rdi
  __int64 v8; // rdx
  int v10; // ebp
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( Object )
    goto LABEL_4;
  v4 = (struct tagCLIP **)CheckClipboardAccess();
  Object = v4;
  if ( !v4 )
    return 0LL;
  if ( v4[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v5);
    return 0LL;
  }
LABEL_4:
  v6 = (_DWORD)Object[4] & 0x10;
  if ( !v6 && ThreadWin32Thread )
  {
    PushW32ThreadLock((__int64)Object, v14, UserDereferenceObject);
    ObfReferenceObject(Object);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
  }
  v7 = Object[12];
  if ( v7 )
  {
    v10 = *((_DWORD *)Object + 26);
    if ( v10 )
    {
      do
      {
        v11 = *(unsigned __int16 *)v7;
        --v10;
        if ( (unsigned __int16)v11 >= 0xC000u )
          UserDeleteAtom(v11);
        UT_FreeCBFormat(v7);
        v7 = (struct tagCLIP *)((char *)v7 + 32);
      }
      while ( v10 );
      v7 = Object[12];
    }
    Win32FreePool(v7);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  *(_QWORD *)&v12 = Object + 10;
  *((_QWORD *)&v12 + 1) = Object[8];
  v13 = v12;
  HMAssignmentLock(&v13);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v6 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v14, v8);
  }
  return 1LL;
}

/*
 * XREFs of xxxEmptyClipboard @ 0x1C00FF5E0
 * Callers:
 *     FreeWindowStation @ 0x1C00FF260 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C00FF5A0 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00FF75C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00FF830 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rsi
  struct tagCLIP **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  struct tagCLIP *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // ebp
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v18, 0, 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( Object )
    goto LABEL_4;
  v5 = (struct tagCLIP **)CheckClipboardAccess();
  Object = v5;
  if ( !v5 )
    return 0LL;
  if ( v5[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v6, v7, v8);
    return 0LL;
  }
LABEL_4:
  if ( ((_DWORD)Object[4] & 0x10) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, v18, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v10 = Object[12];
  if ( v10 )
  {
    v14 = *((_DWORD *)Object + 26);
    if ( v14 )
    {
      do
      {
        v15 = *(unsigned __int16 *)v10;
        --v14;
        if ( (unsigned __int16)v15 >= 0xC000u )
          UserDeleteAtom(v15);
        UT_FreeCBFormat(v10);
        v10 = (struct tagCLIP *)((char *)v10 + 32);
      }
      while ( v14 );
      v10 = Object[12];
    }
    Win32FreePool(v10);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  *(_QWORD *)&v16 = Object + 10;
  *((_QWORD *)&v16 + 1) = Object[8];
  v17 = v16;
  HMAssignmentLock(&v17);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v9 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v18, v11, v12);
  }
  return 1LL;
}

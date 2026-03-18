/*
 * XREFs of xxxEmptyClipboard @ 0x1C01256F0
 * Callers:
 *     FreeWindowStation @ 0x1C0125370 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C01256B0 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C012586C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0125940 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagCLIP **Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagCLIP **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r14d
  struct tagCLIP *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // ebp
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-48h]
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v23, 0, 24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( Object )
    goto LABEL_4;
  v10 = (struct tagCLIP **)CheckClipboardAccess(v6, v5, v8, v9);
  Object = v10;
  if ( !v10 )
    return 0LL;
  if ( v10[6] != (struct tagCLIP *)ThreadWin32Thread )
  {
    UserSetLastError(1418LL, v11, v12, v9);
    return 0LL;
  }
LABEL_4:
  if ( ((_DWORD)Object[4] & 0x10) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, v23, UserDereferenceObject, v9);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v14 = Object[12];
  if ( v14 )
  {
    v19 = *((_DWORD *)Object + 26);
    if ( v19 )
    {
      do
      {
        v20 = *(unsigned __int16 *)v14;
        --v19;
        if ( (unsigned __int16)v20 >= 0xC000u )
          UserDeleteAtom(v20);
        UT_FreeCBFormat(v14);
        v14 = (struct tagCLIP *)((char *)v14 + 32);
      }
      while ( v19 );
      v14 = Object[12];
    }
    Win32FreePool(v14);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  *((_DWORD *)Object + 8) |= 0x40u;
  *(_QWORD *)&v21 = Object + 10;
  *((_QWORD *)&v21 + 1) = Object[8];
  v22 = v21;
  HMAssignmentLock(&v22);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v13 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v23, v15, v16, v17);
  }
  return 1LL;
}

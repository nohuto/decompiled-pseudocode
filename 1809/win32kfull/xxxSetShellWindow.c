/*
 * XREFs of xxxSetShellWindow @ 0x1C0009324
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00091A0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     xxxGenerateIAMKey @ 0x1C0009530 (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C00096A0 (CleanupIAMAccess.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     DwmAsyncShellWindowChange @ 0x1C00C96C4 (DwmAsyncShellWindowChange.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  void *v11; // rcx
  void *v12; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(__int64 **)(*((_QWORD *)a1 + 2) + 464LL);
  if ( v4[21] )
  {
    v5 = 5LL;
LABEL_16:
    UserSetLastError(v5);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 12) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v5 = 87LL;
    goto LABEL_16;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 820) & 0x30) == 0x20) )
    v4[22] = v7;
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  *(_QWORD *)&v15 = v4 + 21;
  *((_QWORD *)&v15 + 1) = a1;
  v10 = v15;
  *(_QWORD *)(v8 + 24) = v9;
  v15 = v10;
  HMAssignmentLock(&v15);
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = v4 + 23;
  HMAssignmentLock(&v15);
  PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), v16, UserDereferenceObject);
  v11 = *(void **)(gptiCurrent + 456LL);
  if ( v11 )
  {
    ObfReferenceObject(v11);
    v11 = *(void **)(gptiCurrent + 456LL);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v11);
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v12);
  }
  SetOrClrWF(1LL, a1, 1056LL, 1LL);
  xxxSetWindowPos(a1, 0, 0, 19);
  PopAndFreeW32ThreadLock(v16);
  return 1LL;
}

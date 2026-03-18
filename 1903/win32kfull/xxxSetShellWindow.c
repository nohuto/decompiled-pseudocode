/*
 * XREFs of xxxSetShellWindow @ 0x1C000B20C
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C000B060 (NtUserSetShellWindowEx.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C000B3CC (DwmAsyncShellWindowChange.c)
 *     xxxGenerateIAMKey @ 0x1C000B46C (xxxGenerateIAMKey.c)
 *     CleanupIAMAccess @ 0x1C000C230 (CleanupIAMAccess.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  struct tagWND **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  void *v11; // rax
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 456LL);
  v5 = (struct tagWND **)(v4 + 21);
  if ( v4[21] )
  {
    v13 = 5LL;
LABEL_15:
    UserSetLastError(v13);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v13 = 87LL;
    goto LABEL_15;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 812) & 0x30) == 0x20) )
    v4[22] = v7;
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  *(_QWORD *)&v15 = v4 + 21;
  *((_QWORD *)&v15 + 1) = a1;
  v10 = v15;
  *(_QWORD *)(v8 + 24) = v9;
  v15 = v10;
  HMAssignmentLock(&v15);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 448LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 448LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v11 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v11);
  }
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = v4 + 23;
  HMAssignmentLock(&v15);
  SetOrClrWF(1LL, *v5, 1056LL, 1LL);
  xxxSetWindowPos(*v5, 0, 0, 19);
  return 1LL;
}

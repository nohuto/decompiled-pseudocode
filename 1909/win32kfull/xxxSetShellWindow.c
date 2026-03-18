/*
 * XREFs of xxxSetShellWindow @ 0x1C000EFF4
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C01193D0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C000B900 (CleanupIAMAccess.c)
 *     xxxGenerateIAMKey @ 0x1C000EFA8 (xxxGenerateIAMKey.c)
 *     DwmAsyncShellWindowChange @ 0x1C0010A4C (DwmAsyncShellWindowChange.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rax
  __int64 v15; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 456LL);
  v5 = (struct tagWND **)(v4 + 21);
  if ( v4[21] )
  {
    v15 = 5LL;
LABEL_15:
    UserSetLastError(v15);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v15 = 87LL;
    goto LABEL_15;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 812) & 0x30) == 0x20) )
    v4[22] = v7;
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  *(_QWORD *)&v17 = v4 + 21;
  *((_QWORD *)&v17 + 1) = a1;
  v10 = v17;
  *(_QWORD *)(v8 + 24) = v9;
  v17 = v10;
  HMAssignmentLock(&v17);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 448LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 448LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v11, v12);
    DwmAsyncShellWindowChange(v13);
  }
  *((_QWORD *)&v17 + 1) = a2;
  *(_QWORD *)&v17 = v4 + 23;
  HMAssignmentLock(&v17);
  SetOrClrWF(1LL, *v5, 1056LL, 1LL);
  xxxSetWindowPos(*v5, 0, 0, 19);
  return 1LL;
}

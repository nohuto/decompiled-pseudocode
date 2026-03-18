/*
 * XREFs of xxxSetShellWindow @ 0x1C00F1620
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00F14D0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F17E8 (DwmAsyncShellWindowChange.c)
 *     CleanupIAMAccess @ 0x1C00F1880 (CleanupIAMAccess.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01A1830 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v15; // rax
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(__int64 **)(*((_QWORD *)a1 + 2) + 456LL);
  v5 = v4 + 21;
  if ( v4[21] )
  {
    v17 = 5LL;
LABEL_21:
    UserSetLastError(v17, a2);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 12) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v17 = 87LL;
    goto LABEL_21;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744, 2, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 812) & 0x30) == 0x20) )
    v4[22] = v7;
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  *(_QWORD *)&v19 = v4 + 21;
  *((_QWORD *)&v19 + 1) = a1;
  v10 = v19;
  *(_QWORD *)(v8 + 24) = v9;
  v19 = v10;
  HMAssignmentLock(&v19);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 448LL));
  v11 = *(_QWORD *)(gptiCurrent + 448LL);
  v12 = SystemPrng(&v20, 8LL);
  if ( v12 )
  {
    *(_QWORD *)(v11 + 280) = v20;
  }
  else
  {
    if ( (int)xxxCallGenerateIAMKey((struct tagIAM_KKEY *)(v11 + 272)) >= 0 )
      goto LABEL_11;
    v12 = 0;
  }
  if ( v12 )
LABEL_11:
    *(_DWORD *)(v11 + 272) = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v15 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v13, v14);
    DwmAsyncShellWindowChange(v15);
  }
  *((_QWORD *)&v19 + 1) = a2;
  *(_QWORD *)&v19 = v4 + 23;
  HMAssignmentLock(&v19);
  SetOrClrWF(1, *v5, 1056, 1);
  xxxSetWindowPos((struct tagWND *)*v5, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}

/*
 * XREFs of _PostThreadMessageEx @ 0x1C001B65C
 * Callers:
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C001B630 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C0102B40 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rdx
  struct tagQMSG *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rcx

  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 480) & 0x1000001) != 0x1000000 )
  {
    v17 = 1444LL;
    goto LABEL_48;
  }
  if ( a2 < 0x400 && ((a1 = (unsigned __int16)MessageTable[a2], (a1 & 0x200) != 0) || a2 == 537 && (a3 & 0x8000) != 0)
    || a2 == 536 && (a3 & 0x8000) != 0 )
  {
    v17 = 1159LL;
LABEL_48:
    UserSetLastError(v17);
    return 0LL;
  }
  v9 = *(_QWORD *)(v8 + 416);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( a2 <= 0xD0 )
    {
      if ( a2 != 208 && a2 != 12 )
      {
        if ( a2 == 13 )
          goto LABEL_8;
        if ( a2 == 78 )
          goto LABEL_42;
        if ( a2 != 188 )
          goto LABEL_8;
      }
    }
    else
    {
      if ( a2 == 272 )
        goto LABEL_42;
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_8;
    }
    if ( gbEnforceUIPI && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 772) == *(_DWORD *)(CurrentProcessWin32Process + 772)
      && *(_DWORD *)(v9 + 776) == *(_DWORD *)(CurrentProcessWin32Process + 776) )
    {
      goto LABEL_8;
    }
LABEL_42:
    v17 = 5LL;
    goto LABEL_48;
  }
LABEL_8:
  if ( a2 == 576 || a2 == 281 || (unsigned int)IsPointerInputMessage(a2) )
  {
    v17 = 1002LL;
    goto LABEL_48;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 800), 0LL, a2);
  if ( (*(_DWORD *)(v8 + 1200) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v11 = AllocQEntryEx((struct tagMLIST *)(v8 + 800), 0LL, 0);
  if ( !v11 )
    return 0LL;
  v12 = *(_QWORD *)(v8 + 424);
  v13 = *(_QWORD *)(v12 + 120);
  if ( v13 )
    v14 = *(_QWORD *)(v13 + 16);
  else
    v14 = *(_QWORD *)(v12 + 96);
  StoreQMessage(v11, 0LL, a2, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v14 + 416) + 280LL), 0LL, 0LL);
  SetWakeBit(v8, 264LL);
  if ( a2 == 786 )
    SetWakeBit(v8, 128LL);
  v15 = *(_QWORD *)(v8 + 424);
  if ( v8 == *(_QWORD *)(v15 + 64) )
    *(_QWORD *)(v15 + 72) = v11;
  return 1LL;
}

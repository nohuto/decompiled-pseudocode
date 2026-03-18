/*
 * XREFs of _PostThreadMessageEx @ 0x1C000F734
 * Callers:
 *     _PostThreadMessage @ 0x1C000F6C8 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C000F948 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01096A0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C012E418 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rbp
  struct tagQMSG *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx

  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 480) & 0x1000001) != 0x1000000 )
  {
    v16 = 1444LL;
    goto LABEL_45;
  }
  if ( a2 < 0x400 && ((a1 = (unsigned __int16)MessageTable[a2], (a1 & 0x200) != 0) || a2 == 537 && (a3 & 0x8000) != 0)
    || a2 == 536 && (a3 & 0x8000) != 0 )
  {
    v16 = 1159LL;
LABEL_45:
    UserSetLastError(v16);
    return 0LL;
  }
  v9 = *(_QWORD *)(v8 + 416);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, 0x8000LL);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( a2 <= 0xD0 )
    {
      if ( a2 != 208 )
      {
        v10 = a2 - 12;
        if ( a2 != 12 )
        {
          if ( a2 == 13 )
            goto LABEL_8;
          if ( a2 == 78 )
            goto LABEL_39;
          v10 = a2 - 188;
          if ( a2 != 188 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      if ( a2 == 272 )
        goto LABEL_39;
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_8;
    }
    if ( (unsigned __int8)Enforced(v10) && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 772) == *(_DWORD *)(CurrentProcessWin32Process + 772)
      && *(_DWORD *)(v9 + 776) == *(_DWORD *)(CurrentProcessWin32Process + 776) )
    {
      goto LABEL_8;
    }
LABEL_39:
    v16 = 5LL;
    goto LABEL_45;
  }
LABEL_8:
  if ( a2 == 576 || a2 == 281 || (unsigned int)IsPointerInputMessage(a2) )
  {
    v16 = 1002LL;
    goto LABEL_45;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 800), 0LL, a2);
  if ( (*(_DWORD *)(v8 + 1224) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v12 = AllocQEntryEx((struct tagMLIST *)(v8 + 800), 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = PtiKbdFromQ(*(_QWORD *)(v8 + 424));
  StoreQMessage(v12, 0LL, a2, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v13 + 416) + 280LL), 0LL, 0LL);
  SetWakeBit(v8, 264LL);
  if ( a2 == 786 )
    SetWakeBit(v8, 128LL);
  v14 = *(_QWORD *)(v8 + 424);
  if ( v8 == *(_QWORD *)(v14 + 72) )
    *(_QWORD *)(v14 + 80) = v12;
  return 1LL;
}

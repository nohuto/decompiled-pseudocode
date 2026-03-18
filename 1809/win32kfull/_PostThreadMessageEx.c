/*
 * XREFs of _PostThreadMessageEx @ 0x1C00D4A14
 * Callers:
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00D4E90 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FF6FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C0124C00 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        __int64 a1,
        __int64 CurrentProcessWin32Process,
        __int64 a3,
        __int64 a4,
        DWORD *a5)
{
  __int64 v5; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  LARGE_INTEGER *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx

  v5 = (unsigned int)CurrentProcessWin32Process;
  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 488) & 0x1000001) != 0x1000000 )
  {
    v16 = 1444LL;
    goto LABEL_47;
  }
  CurrentProcessWin32Process = 0x8000LL;
  if ( (unsigned int)v5 < 0x400
    && ((a1 = (unsigned __int16)MessageTable[v5], (a1 & 0x200) != 0) || (_DWORD)v5 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)v5 == 536 && (a3 & 0x8000) != 0 )
  {
    v16 = 1159LL;
LABEL_47:
    UserSetLastError(v16, CurrentProcessWin32Process, a3, a4);
    return 0LL;
  }
  v9 = *(_QWORD *)(v8 + 424);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( (unsigned int)v5 <= 0xD0 )
    {
      if ( (_DWORD)v5 != 208 && (_DWORD)v5 != 12 )
      {
        if ( (_DWORD)v5 == 13 )
          goto LABEL_8;
        if ( (_DWORD)v5 == 78 )
          goto LABEL_41;
        if ( (_DWORD)v5 != 188 )
          goto LABEL_8;
      }
    }
    else
    {
      if ( (_DWORD)v5 == 272 )
        goto LABEL_41;
      if ( (_DWORD)v5 != 353 && (_DWORD)v5 != 424 && (_DWORD)v5 != 563 && (_DWORD)v5 != 648 )
        goto LABEL_8;
    }
    if ( gbEnforceUIPI && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v9 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_8;
    }
LABEL_41:
    v16 = 5LL;
    goto LABEL_47;
  }
LABEL_8:
  if ( (_DWORD)v5 == 576 || (_DWORD)v5 == 281 || IsPointerInputMessage(v5) )
  {
    v16 = 1002LL;
    goto LABEL_47;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 808), 0LL, v5);
  if ( (*(_DWORD *)(v8 + 1208) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, (unsigned int)v5, a3, a4) )
  {
    return 0LL;
  }
  v10 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v8 + 808), 0LL, 0);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v8 + 432);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 16);
  else
    v13 = *(_QWORD *)(v11 + 96);
  StoreQMessage(
    v10,
    0LL,
    v5,
    (LARGE_INTEGER)a3,
    (LARGE_INTEGER)a4,
    0,
    0LL,
    0,
    0LL,
    0,
    a5,
    *(_DWORD *)(*(_QWORD *)(v13 + 424) + 280LL),
    0LL,
    0LL);
  SetWakeBit(v8, 0x108u);
  if ( (_DWORD)v5 == 786 )
    SetWakeBit(v8, 0x80u);
  v14 = *(_QWORD *)(v8 + 432);
  if ( v8 == *(_QWORD *)(v14 + 64) )
    *(_QWORD *)(v14 + 72) = v10;
  return 1LL;
}

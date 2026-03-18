/*
 * XREFs of xxxUpdateTray @ 0x1C005AAD0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     xxxSetTrayWindow @ 0x1C006E028 (xxxSetTrayWindow.c)
 *     Is31TrayWindow @ 0x1C01F9D64 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int8 v5; // r10
  __int64 i; // rdx
  _BYTE *v7; // rcx
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  char v18; // al
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64)a1;
  if ( (*(_BYTE *)(a1[5] + 31LL) & 0x10) != 0 )
  {
    v3 = a1[12];
    while ( v3 )
    {
      v16 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v17 = v3;
      v3 = *(_QWORD *)(v3 + 96);
      if ( v16 )
        v17 = v2;
      v2 = v17;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
       || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 192LL))
      && (unsigned int)IsTopLevelWindow(v2)
      && ((v5 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL)) != 0 || (*(_BYTE *)(v4 + 26) & 4) != 0) )
    {
      for ( i = 1LL; ; i = 0LL )
      {
        v7 = *(_BYTE **)(v2 + 40);
        if ( (v7[21] & 2) != 0 )
        {
          if ( (*(_BYTE *)(v4 + 21) & 2) != 0 && (unsigned int)IsTrayWindow(a1) )
          {
            v8 = (__int64)a1;
            goto LABEL_15;
          }
          v15 = IsTrayWindow((_QWORD *)v2);
          goto LABEL_23;
        }
        if ( (char)v7[24] < 0 )
          break;
        if ( (v7[20] & 0x40) != 0 || (v18 = v7[30], (v18 & 0xA) != 0) && ((v18 & 0xC0) != 0 || (v7[31] & 0x20) != 0) )
        {
          v15 = Is31TrayWindow(v2);
LABEL_23:
          v8 = v2 & -(__int64)(v15 != 0);
          goto LABEL_15;
        }
        if ( !(_DWORD)i )
          return;
        v2 = *(_QWORD *)(v2 + 184);
        if ( !v2 )
          return;
      }
      v8 = 0LL;
LABEL_15:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i);
      v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v19;
      v19[1] = v8;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v10 = *(_QWORD *)(v8 + 24);
      }
      else
      {
        v10 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v10, v8);
      ThreadUnlock1(v12, v11, v13);
    }
    if ( !a1[12] || (v14 = 23LL, (*(_BYTE *)(a1[5] + 26LL) & 4) != 0) )
      v14 = 19LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v14, *a1);
  }
}

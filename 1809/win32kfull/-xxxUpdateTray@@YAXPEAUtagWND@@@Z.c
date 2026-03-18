/*
 * XREFs of ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetTrayWindow @ 0x1C00B376C (xxxSetTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     Is31TrayWindow @ 0x1C022245C (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int8 v5; // r10
  __int64 i; // rdx
  _BYTE *v7; // rcx
  struct tagWND *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  char v17; // al
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = *((_QWORD *)a1 + 12);
    while ( v3 )
    {
      v15 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v16 = v3;
      v3 = *(_QWORD *)(v3 + 96);
      if ( v15 )
        v16 = v2;
      v2 = v16;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
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
            v8 = a1;
            goto LABEL_15;
          }
          v14 = IsTrayWindow((_QWORD *)v2);
          goto LABEL_23;
        }
        if ( (char)v7[24] < 0 )
          break;
        if ( (v7[20] & 0x40) != 0 || (v17 = v7[30], (v17 & 0xA) != 0) && ((v17 & 0xC0) != 0 || (v7[31] & 0x20) != 0) )
        {
          v14 = Is31TrayWindow(v2);
LABEL_23:
          v8 = (struct tagWND *)(v2 & -(__int64)(v14 != 0));
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
      v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v18;
      v18[1] = v8;
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        v10 = *((_QWORD *)v8 + 3);
      }
      else
      {
        v10 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v10, v8);
      ThreadUnlock1(v12, v11);
    }
    if ( !*((_QWORD *)a1 + 12) || (v13 = 23LL, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v13 = 19LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v13, *(_QWORD *)a1);
  }
}

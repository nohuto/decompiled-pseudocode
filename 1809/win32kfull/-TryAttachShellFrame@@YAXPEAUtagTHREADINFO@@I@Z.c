/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C00D46D4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00E7278 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01C36F8 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // esi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct tagWND *v17; // rcx
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 54);
  if ( *(_DWORD *)(v1 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v5 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 488) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 672);
        if ( !v6 || (*(_DWORD *)(v6 + 196) & 0x100000) == 0 )
        {
          v7 = *(_DWORD *)(v4 + 1208);
          *(_DWORD *)(v4 + 1208) = v7 & 0xFFE7FFFF | 0x100000;
          DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v4);
          v8 = (__int64 *)(v1 + 24);
          while ( 1 )
          {
            v9 = *v8;
            if ( !*v8 || !IsMiPMouseMessage(*(_DWORD *)(v9 + 24)) )
              break;
            if ( v9 == *(_QWORD *)(v1 + 72) )
              *(_QWORD *)(v1 + 72) = 0LL;
            if ( v9 == *(_QWORD *)(v1 + 80) )
              *(_QWORD *)(v1 + 80) = 0LL;
            DelQEntry(v1 + 24, v9, 1);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 64) == a1 )
            *(_QWORD *)(v1 + 64) = 0LL;
          v10 = *(_QWORD *)(v1 + 112);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
          v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v20;
          v20[1] = v10;
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          LockW32Thread(v5, v21);
          v12 = (int)zzzAttachThreadInput((__int64)a1, v5, 32769);
          v13 = *((_QWORD *)a1 + 54);
          v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 480) = v14;
          v15 = ThreadUnlock1(v13, v14);
          v16 = *((_QWORD *)a1 + 54);
          v19[1] = v15;
          v19[0] = v16 + 112;
          HMAssignmentLock(v19);
          v17 = *(struct tagWND **)(v5 + 1368);
          if ( v17 )
            PostMessage(v17, 0x348u, 2uLL, v12);
          v18 = gpqForeground;
          if ( gpqForeground == *((_QWORD *)a1 + 54) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent(2);
          }
          PopAndFreeW32ThreadLock((__int64)v21, v18);
          *((_DWORD *)a1 + 302) ^= (*((_DWORD *)a1 + 302) ^ v7) & 0x100000;
        }
      }
    }
  }
}

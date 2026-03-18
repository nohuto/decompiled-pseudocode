/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0019B5C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     DisassociateShellFrameAppThreads @ 0x1C006CD18 (DisassociateShellFrameAppThreads.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01A1E50 (FindShellFrameThreadFromAssociation.c)
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
  __int64 v15; // r8
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 53);
  if ( *(_DWORD *)(v1 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v5 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 480) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 664);
        if ( !v6 || (*(_DWORD *)(v6 + 196) & 0x100000) == 0 )
        {
          v7 = *(_DWORD *)(v4 + 1200);
          *(_DWORD *)(v4 + 1200) = v7 & 0xFFE7FFFF | 0x100000;
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
            DelQEntry((_QWORD *)(v1 + 24), (_QWORD *)v9);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 64) == a1 )
            *(_QWORD *)(v1 + 64) = 0LL;
          v10 = *(_QWORD *)(v1 + 112);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
          v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v20;
          v20[1] = v10;
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          LockW32Thread(v5, (__int64)v21);
          v12 = (int)zzzAttachThreadInput((__int64)a1, v5, 32769);
          v13 = *((_QWORD *)a1 + 53);
          v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 480) = v14;
          *((_QWORD *)&v18 + 1) = ThreadUnlock1(v13, v14, v15);
          *(_QWORD *)&v18 = *((_QWORD *)a1 + 53) + 112LL;
          v19 = v18;
          HMAssignmentLock(&v19);
          v16 = *(struct tagWND **)(v5 + 1376);
          if ( v16 )
            PostMessage(v16, 0x348u, 2uLL, v12);
          v17 = gpqForeground;
          if ( gpqForeground == *((_QWORD *)a1 + 53) )
          {
            if ( *(_QWORD *)(gpqForeground + 112LL) )
              zzzInputFocusReceivedWindowEvent(2);
          }
          PopAndFreeW32ThreadLock((__int64)v21, v17);
          *((_DWORD *)a1 + 300) ^= (*((_DWORD *)a1 + 300) ^ v7) & 0x100000;
        }
      }
    }
  }
}

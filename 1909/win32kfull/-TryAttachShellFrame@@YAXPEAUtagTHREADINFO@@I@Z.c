/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C002A7A4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00D6CB8 (DisassociateShellFrameAppThreads.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D6858 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // r15d
  __int64 *v7; // r14
  __int64 v8; // rdx
  void *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+48h] [rbp-49h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h]
  __int64 v25; // [rsp+58h] [rbp-39h]
  _QWORD v26[3]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v27; // [rsp+78h] [rbp-19h]
  __int128 v28; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v29[24]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v30[24]; // [rsp+B0h] [rbp+1Fh] BYREF

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v29, *((_QWORD *)a1 + 53));
  v2 = *((_QWORD *)a1 + 53);
  if ( *(_DWORD *)(v2 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v4 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 480) & 1) == 0 )
      {
        v5 = *(_QWORD *)(ShellFrameThreadFromAssociation + 664);
        if ( !v5 || (*(_DWORD *)(v5 + 196) & 0x100000) == 0 )
        {
          v6 = *((_DWORD *)a1 + 306);
          v23 = 0LL;
          v24 = 0LL;
          v25 = 0LL;
          memset(v26, 0, sizeof(v26));
          *((_DWORD *)a1 + 306) = v6 & 0xFFE7FFFF | 0x100000;
          DisassociateShellFrameAppThreads(a1);
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v30, v2);
          v7 = (__int64 *)(v2 + 24);
          v8 = *(_QWORD *)(v2 + 24);
          v9 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
          if ( v8 )
          {
            do
            {
              if ( !IsMiPMouseMessage(*(_DWORD *)(v8 + 24)) )
                break;
              if ( v8 == *(_QWORD *)(v2 + 80) )
                *(_QWORD *)(v2 + 80) = 0LL;
              if ( v8 == *(_QWORD *)(v2 + 88) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_qq(
                    v10,
                    v8,
                    0x12u,
                    0xDu,
                    (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                    v2,
                    *(_QWORD *)(v2 + 88));
                  v8 = *(_QWORD *)(v2 + 24);
                }
                *(_QWORD *)(v2 + 88) = 0LL;
              }
              DelQEntry(v2 + 24, v8, 1);
              v8 = *v7;
            }
            while ( *v7 );
            v9 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
          }
          if ( *(struct tagTHREADINFO **)(v2 + 72) == a1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                (__int64)&WPP_RECORDER_INITIALIZED,
                v8,
                0x12u,
                0xEu,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                v2,
                *(_QWORD *)(v2 + 72));
            *(_QWORD *)(v2 + 72) = 0LL;
          }
          v11 = *(_QWORD *)(v2 + 120);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, (__int64)v9);
          v23 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
          v24 = v11;
          if ( v11 )
            HMLockObject(v11);
          LockW32Thread(v4, v26, v13);
          v14 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v15 = *((_QWORD *)a1 + 53);
          v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v15 + 488) = v16;
          v18 = ThreadUnlock1(v15, v16, v17);
          v19 = *((_QWORD *)a1 + 53);
          *((_QWORD *)&v27 + 1) = v18;
          *(_QWORD *)&v27 = v19 + 120;
          v28 = v27;
          HMAssignmentLock(&v28);
          v21 = *(_QWORD *)(v4 + 1392);
          if ( v21 )
            PostMessage(v21, 840, 2, v14);
          v22 = gpqForeground;
          if ( gpqForeground == *((_QWORD *)a1 + 53) )
          {
            if ( *(_QWORD *)(gpqForeground + 120LL) )
              zzzInputFocusReceivedWindowEvent(2);
          }
          PopAndFreeW32ThreadLock((__int64)v26, v22, v20);
          *((_DWORD *)a1 + 306) ^= (v6 ^ *((_DWORD *)a1 + 306)) & 0x100000;
        }
      }
    }
  }
}

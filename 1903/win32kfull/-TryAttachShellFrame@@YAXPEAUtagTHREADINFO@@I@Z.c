/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0014830 (zzzInputFocusReceivedWindowEvent.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0024334 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00F6BC8 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D69D8 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v2; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // r15d
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v9; // rdx
  void *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+50h] [rbp-41h]
  __int64 v28; // [rsp+58h] [rbp-39h]
  _QWORD v29[3]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v30; // [rsp+78h] [rbp-19h]
  __int128 v31; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v32[24]; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v33[24]; // [rsp+B0h] [rbp+1Fh] BYREF

  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v32, *((_QWORD *)a1 + 53));
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
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0LL;
          memset(v29, 0, sizeof(v29));
          *((_DWORD *)a1 + 306) = v6 & 0xFFE7FFFF | 0x100000;
          DisassociateShellFrameAppThreads(a1);
          CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v33, v2);
          v8 = (__int64 *)(v2 + 24);
          v9 = *(_QWORD *)(v2 + 24);
          v10 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
          if ( v9 )
          {
            do
            {
              if ( !IsMiPMouseMessage(*(_DWORD *)(v9 + 24)) )
                break;
              if ( v9 == *(_QWORD *)(v2 + 80) )
                *(_QWORD *)(v2 + 80) = 0LL;
              if ( v9 == *(_QWORD *)(v2 + 88) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_qq(
                    v11,
                    v9,
                    0x12u,
                    0xDu,
                    (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                    v2,
                    *(_QWORD *)(v2 + 88));
                  v9 = *(_QWORD *)(v2 + 24);
                }
                *(_QWORD *)(v2 + 88) = 0LL;
              }
              DelQEntry(v2 + 24, v9, 1);
              v9 = *v8;
            }
            while ( *v8 );
            v10 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
          }
          if ( *(struct tagTHREADINFO **)(v2 + 72) == a1 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                (__int64)&WPP_RECORDER_INITIALIZED,
                v9,
                0x12u,
                0xEu,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                v2,
                *(_QWORD *)(v2 + 72));
            *(_QWORD *)(v2 + 72) = 0LL;
          }
          v12 = *(_QWORD *)(v2 + 120);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)v10, v7);
          v26 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
          v27 = v12;
          if ( v12 )
            HMLockObject(v12);
          LockW32Thread(v4, v29, v14, v15);
          v16 = zzzAttachThreadInput((__int64)a1, v4, 32769);
          v17 = *((_QWORD *)a1 + 53);
          v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v17 + 488) = v18;
          v20 = ThreadUnlock1(v17, v18, v19);
          v21 = *((_QWORD *)a1 + 53);
          *((_QWORD *)&v30 + 1) = v20;
          *(_QWORD *)&v30 = v21 + 120;
          v31 = v30;
          HMAssignmentLock(&v31);
          v24 = *(_QWORD *)(v4 + 1392);
          if ( v24 )
            PostMessage(v24, 840, 2, v16);
          v25 = gpqForeground;
          if ( gpqForeground == *((_QWORD *)a1 + 53) )
          {
            if ( *(_QWORD *)(gpqForeground + 120LL) )
              zzzInputFocusReceivedWindowEvent();
          }
          PopAndFreeW32ThreadLock((__int64)v29, v25, v22, v23);
          *((_DWORD *)a1 + 306) ^= (v6 ^ *((_DWORD *)a1 + 306)) & 0x100000;
        }
      }
    }
  }
}

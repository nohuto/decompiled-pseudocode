/*
 * XREFs of TryDetachShellFrame @ 0x1C01E3B58
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 * Callees:
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C0017AC8 (IsDebuggerAttached.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D6860 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D69D8 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 *a1, __int64 a2, int a3, int a4)
{
  signed int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+28h] [rbp-49h] BYREF
  __int64 v30; // [rsp+30h] [rbp-41h]
  __int64 v31; // [rsp+38h] [rbp-39h]
  _QWORD v32[3]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v33; // [rsp+58h] [rbp-19h]
  __int128 v34; // [rsp+68h] [rbp-9h]
  __int128 v35; // [rsp+78h] [rbp+7h] BYREF
  __int128 v36; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v37[32]; // [rsp+98h] [rbp+27h] BYREF

  v8 = gdwMDAQThreshold;
  result = 0LL;
  v10 = (*(_DWORD *)(a2 + 1224) & 0x100000) == 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( v10 )
  {
    result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
    if ( !result )
    {
      result = IsDebuggerAttached(a1[52]);
      if ( !(_DWORD)result )
      {
        result = IsDebuggerAttached(*(_QWORD *)(a2 + 416));
        if ( !(_DWORD)result )
        {
          if ( !a3 )
            v8 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = a1[53],
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 488)) >= v8) )
          {
            result = AssociateShellFrameAppThreads((__int64)a1, a2);
            if ( (_DWORD)result )
            {
              v14 = *(_QWORD *)(a1[53] + 120);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
              v29 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v29;
              v30 = v14;
              if ( v14 )
                HMLockObject(v14);
              LockW32Thread(a2, v32, v16, v17);
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v37, a1[53]);
              v18 = zzzAttachThreadInput((__int64)a1, a2, 0x4000);
              v25 = ThreadUnlock1(v20, v19, v21);
              if ( v18 >= 0 )
              {
                *(_DWORD *)(a2 + 1224) |= 0x80000u;
                v26 = a1[53];
                *(_QWORD *)&v33 = v26 + 120;
                *((_QWORD *)&v33 + 1) = *(_QWORD *)(v26 + 128);
                v35 = v33;
                HMAssignmentLock(&v35);
                if ( v25 )
                {
                  v27 = *(_QWORD *)(a2 + 424);
                  if ( *(_QWORD *)(*(_QWORD *)(v25 + 16) + 424LL) == v27 )
                  {
                    *((_QWORD *)&v34 + 1) = v25;
                    *(_QWORD *)&v34 = v27 + 120;
                    v36 = v34;
                    HMAssignmentLock(&v36);
                  }
                }
                v28 = a1[174];
                if ( v28 )
                  PostMessage(v28, 840, 1, 0);
              }
              return PopAndFreeW32ThreadLock((__int64)v32, v22, v23, v24);
            }
          }
        }
      }
    }
  }
  return result;
}

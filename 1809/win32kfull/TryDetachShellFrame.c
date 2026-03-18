/*
 * XREFs of TryDetachShellFrame @ 0x1C01CF278
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     IsDebuggerAttached @ 0x1C00D7D60 (IsDebuggerAttached.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     AssociateShellFrameAppThreads @ 0x1C01C358C (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01C36F8 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagWND *v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-18h] BYREF

  result = gdwMDAQThreshold;
  v9 = gdwMDAQThreshold;
  if ( (*(_DWORD *)(a2 + 1208) & 0x100000) == 0 )
  {
    result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
    if ( !result )
    {
      result = IsDebuggerAttached(*(__int64 **)(a1 + 424));
      if ( !(_DWORD)result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a2 + 424));
        if ( !(_DWORD)result )
        {
          if ( !a3 )
            v9 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = *(_QWORD *)(a1 + 432),
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 480)) >= v9) )
          {
            result = AssociateShellFrameAppThreads(a1, a2);
            if ( (_DWORD)result )
            {
              v11 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
              v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v23;
              v23[1] = v11;
              if ( v11 )
                _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
              LockW32Thread(a2, v24);
              v13 = zzzAttachThreadInput(a1, a2, 0x4000);
              v17 = ThreadUnlock1(v15, v14);
              if ( v13 >= 0 )
              {
                *(_DWORD *)(a2 + 1208) |= 0x80000u;
                v18 = *(_QWORD *)(a1 + 432);
                *(_QWORD *)&v21 = v18 + 112;
                *((_QWORD *)&v21 + 1) = *(_QWORD *)(v18 + 120);
                HMAssignmentLock(&v21);
                if ( v17 )
                {
                  v19 = *(_QWORD *)(a2 + 432);
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 432LL) == v19 )
                  {
                    *((_QWORD *)&v21 + 1) = v17;
                    *(_QWORD *)&v21 = v19 + 112;
                    v22 = v21;
                    HMAssignmentLock(&v22);
                  }
                }
                v20 = *(struct tagWND **)(a1 + 1368);
                if ( v20 )
                  PostMessage(v20, 0x348u, 1uLL, 0LL);
              }
              return PopAndFreeW32ThreadLock((__int64)v24, v16);
            }
          }
        }
      }
    }
  }
  return result;
}

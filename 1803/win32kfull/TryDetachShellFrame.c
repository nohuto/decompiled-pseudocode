/*
 * XREFs of TryDetachShellFrame @ 0x1C01AC074
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C006DFB4 (IsDebuggerAttached.c)
 *     AssociateShellFrameAppThreads @ 0x1C01A1CE8 (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01A1E50 (FindShellFrameThreadFromAssociation.c)
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
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagWND *v21; // rcx
  __int128 v22; // [rsp+28h] [rbp-29h]
  __int128 v23; // [rsp+38h] [rbp-19h]
  __int128 v24; // [rsp+48h] [rbp-9h] BYREF
  __int128 v25; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp+17h] BYREF
  _BYTE v27[24]; // [rsp+80h] [rbp+2Fh] BYREF

  result = gdwMDAQThreshold;
  v9 = gdwMDAQThreshold;
  if ( (*(_DWORD *)(a2 + 1200) & 0x100000) == 0 )
  {
    result = FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)a2);
    if ( !result )
    {
      result = IsDebuggerAttached(*(__int64 **)(a1 + 416));
      if ( !(_DWORD)result )
      {
        result = IsDebuggerAttached(*(__int64 **)(a2 + 416));
        if ( !(_DWORD)result )
        {
          if ( !a3 )
            v9 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = *(_QWORD *)(a1 + 424),
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 480)) >= v9) )
          {
            result = AssociateShellFrameAppThreads(a1, a2);
            if ( (_DWORD)result )
            {
              v11 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 112LL);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
              v26[0] = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = v26;
              v26[1] = v11;
              if ( v11 )
                _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
              LockW32Thread(a2, (__int64)v27);
              v13 = zzzAttachThreadInput(a1, a2, 0x4000);
              v18 = ThreadUnlock1(v15, v14, v16);
              if ( v13 >= 0 )
              {
                *(_DWORD *)(a2 + 1200) |= 0x80000u;
                v19 = *(_QWORD *)(a1 + 424);
                *(_QWORD *)&v22 = v19 + 112;
                *((_QWORD *)&v22 + 1) = *(_QWORD *)(v19 + 120);
                v24 = v22;
                HMAssignmentLock(&v24);
                if ( v18 )
                {
                  v20 = *(_QWORD *)(a2 + 424);
                  if ( *(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL) == v20 )
                  {
                    *((_QWORD *)&v23 + 1) = v18;
                    *(_QWORD *)&v23 = v20 + 112;
                    v25 = v23;
                    HMAssignmentLock(&v25);
                  }
                }
                v21 = *(struct tagWND **)(a1 + 1376);
                if ( v21 )
                  PostMessage(v21, 0x348u, 1uLL, 0LL);
              }
              return PopAndFreeW32ThreadLock((__int64)v27, v17);
            }
          }
        }
      }
    }
  }
  return result;
}

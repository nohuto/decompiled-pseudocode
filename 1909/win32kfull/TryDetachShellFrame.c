/*
 * XREFs of TryDetachShellFrame @ 0x1C01E39D8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     IsDebuggerAttached @ 0x1C013386C (IsDebuggerAttached.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     AssociateShellFrameAppThreads @ 0x1C01D66EC (AssociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D6858 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall TryDetachShellFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  signed int v8; // ebx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+28h] [rbp-49h] BYREF
  __int64 v27; // [rsp+30h] [rbp-41h]
  __int64 v28; // [rsp+38h] [rbp-39h]
  _QWORD v29[3]; // [rsp+40h] [rbp-31h] BYREF
  __int128 v30; // [rsp+58h] [rbp-19h]
  __int128 v31; // [rsp+68h] [rbp-9h]
  __int128 v32; // [rsp+78h] [rbp+7h] BYREF
  __int128 v33; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v34[32]; // [rsp+98h] [rbp+27h] BYREF

  v8 = gdwMDAQThreshold;
  result = 0LL;
  v10 = (*(_DWORD *)(a2 + 1224) & 0x100000) == 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( v10 )
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
            v8 = gdwMDAQThreshold / 0xAu;
          if ( a4
            || (result = *(_QWORD *)(a1 + 424),
                (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - *(_DWORD *)(result + 488)) >= v8) )
          {
            result = AssociateShellFrameAppThreads(a1, a2);
            if ( (_DWORD)result )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 120LL);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
              v26 = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
              v27 = v13;
              if ( v13 )
                HMLockObject(v13);
              LockW32Thread(a2, v29, v15);
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
                (__int64)v34,
                *(_QWORD *)(a1 + 424));
              v16 = zzzAttachThreadInput(a1, a2, 0x4000);
              v22 = ThreadUnlock1(v18, v17, v19);
              if ( v16 >= 0 )
              {
                *(_DWORD *)(a2 + 1224) |= 0x80000u;
                v23 = *(_QWORD *)(a1 + 424);
                *(_QWORD *)&v30 = v23 + 120;
                *((_QWORD *)&v30 + 1) = *(_QWORD *)(v23 + 128);
                v32 = v30;
                HMAssignmentLock(&v32);
                if ( v22 )
                {
                  v24 = *(_QWORD *)(a2 + 424);
                  if ( *(_QWORD *)(*(_QWORD *)(v22 + 16) + 424LL) == v24 )
                  {
                    *((_QWORD *)&v31 + 1) = v22;
                    *(_QWORD *)&v31 = v24 + 120;
                    v33 = v31;
                    HMAssignmentLock(&v33);
                  }
                }
                v25 = *(_QWORD *)(a1 + 1392);
                if ( v25 )
                  PostMessage(v25, 840, 1, 0);
              }
              return PopAndFreeW32ThreadLock((__int64)v29, v20, v21);
            }
          }
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of NtUserKillTimer @ 0x1C00EB530
 * Callers:
 *     <none>
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00EB774 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD **v11; // rdi
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  int v14; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v21; // rbx
  int v22; // [rsp+40h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive(v5)
    && (v4 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v5 = 0LL;
    v8 = ++gdwAtomicCheckSerial;
    v6 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      v7 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v21 = (unsigned __int64)(unsigned int)v5 << 6;
      *(_DWORD *)(v21 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v21 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v21 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v21 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v8 = v22;
  }
LABEL_5:
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
    {
LABEL_29:
      v10 = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0LL;
  v11 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v9)) & 0x3F));
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      v13 = v12 - 14;
      if ( *(v12 - 3) == v9 && v13[12] == a2 )
      {
        v14 = *((_DWORD *)v13 + 12);
        if ( (v14 & 6) == 0 )
        {
          if ( (v14 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          v5 = v13[3];
          if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 424) || !v9 && (v13[6] & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_29;
    }
    if ( (unsigned int)HMMarkObjectDestroy(v12 - 14) )
    {
      if ( (v13[6] & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v12 - 14));
      v16 = v13[9];
      if ( *(_QWORD **)(v16 + 8) != v13 + 9
        || (v17 = (_QWORD *)v13[10], (_QWORD *)*v17 != v13 + 9)
        || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12)
        || (v19 = (_QWORD *)v12[1], (_QWORD *)*v19 != v12) )
      {
        __fastfail(3u);
      }
      *v19 = v18;
      v18[1] = v19;
      if ( !v13[11] )
        _bittestandreset(gTimerId, *((_DWORD *)v13 + 24) - 256);
      EtwTraceKillTimer(v12 - 14);
      HMAssignmentUnlock(v13 + 11);
      HMFreeObject(v12 - 14);
    }
    v10 = 1LL;
  }
LABEL_24:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v5) )
    {
      --gdwInAtomicOperation;
      v6 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v4 = 0LL;
        v7 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v5 = (unsigned int)v4;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) == v8 )
              break;
            v4 = (unsigned int)(v4 + 1);
            if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
              goto LABEL_27;
          }
          v5 = (unsigned __int64)(unsigned int)v4 << 6;
          *(_DWORD *)(v5 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v10;
}

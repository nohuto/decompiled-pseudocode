/*
 * XREFs of NtUserKillTimer @ 0x1C00D66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00186A8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r12d
  __int64 v9; // rbp
  unsigned int v10; // r14d
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v21; // rdi
  int v22; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive(v5)
    && (v5 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v4 = 0LL;
    v8 = ++gdwAtomicCheckSerial;
    v6 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      v7 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v21 = (unsigned __int64)(unsigned int)v4 << 6;
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
      v10 = 0;
      goto LABEL_24;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0;
  v11 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v9)) & 0x3F));
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      if ( *(v12 - 3) == v9 && *(v12 - 2) == a2 )
      {
        v13 = *((_DWORD *)v12 - 16);
        if ( (v13 & 6) == 0 )
        {
          if ( (v13 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          v5 = *(v12 - 11);
          if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 416) || !v9 && (*(_BYTE *)(v12 - 8) & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_24;
    }
    if ( (unsigned int)HMMarkObjectDestroy(v12 - 14) )
    {
      if ( (*(_DWORD *)(v12 - 8) & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v12 - 14));
      v15 = *(v12 - 5);
      v16 = v12 - 5;
      if ( *(_QWORD **)(v15 + 8) != v12 - 5 || (v17 = (_QWORD *)v16[1], (_QWORD *)*v17 != v16) )
        __fastfail(3u);
      *v17 = v15;
      *(_QWORD *)(v15 + 8) = v17;
      v18 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v19 = (_QWORD *)v12[1], (_QWORD *)*v19 != v12) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( !*(v12 - 3) )
        _bittestandreset(gTimerId, *((_DWORD *)v12 - 4) - 256);
      EtwTraceKillTimer(v12 - 14);
      HMAssignmentUnlock(v12 - 3);
      HMFreeObject(v12 - 14);
    }
    v10 = 1;
  }
LABEL_24:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v5) )
    {
      --gdwInAtomicOperation;
      v5 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v6 = 0LL;
        v7 = gdwAtomicCheckLogSize;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v4 = (unsigned int)v6;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v6 << 6) + gpAtomickCheckStacks) == v8 )
              break;
            v6 = (unsigned int)(v6 + 1);
            if ( (unsigned int)v6 >= gdwAtomicCheckLogSize )
              goto LABEL_27;
          }
          v4 = (unsigned __int64)(unsigned int)v6 << 6;
          *(_DWORD *)(v4 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v10;
}

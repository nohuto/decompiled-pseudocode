/*
 * XREFs of NtUserKillTimer @ 0x1C007A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C007AC0C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z @ 0x1C016552C (-EntryInList@@YAHQEAU_LIST_ENTRY@@AEBU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // r15d
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // edx
  _QWORD **v11; // rdi
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  int v14; // eax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  int v22; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive(v5)
    && (v4 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v5 = 0LL;
    v6 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
          goto LABEL_10;
      }
      v7 = (unsigned __int64)(unsigned int)v5 << 6;
      *(_DWORD *)(v7 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v7 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v7 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v7 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v6 = v22;
  }
LABEL_10:
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
LABEL_12:
      v9 = 0LL;
      goto LABEL_13;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 0LL;
  v11 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v8)) & 0x3F));
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      v13 = v12 - 14;
      if ( *(v12 - 3) == v8 && v13[12] == a2 )
      {
        v14 = *((_DWORD *)v13 + 12);
        if ( (v14 & 6) == 0 )
        {
          if ( (v14 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
          v5 = v13[3];
          if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 416) || !v8 && (v13[6] & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_12;
    }
    v16 = v13 + 9;
    if ( !v13[9] || !(unsigned int)EntryInList((struct _LIST_ENTRY *const)(v13 + 9), gtmrListHead) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    if ( (unsigned int)HMMarkObjectDestroy(v12 - 14) )
    {
      if ( (v13[6] & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v12 - 14));
      v17 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16
        || (v18 = (_QWORD *)v13[10], (_QWORD *)*v18 != v16)
        || (*v18 = v17,
            *(_QWORD *)(v17 + 8) = v18,
            *v16 = 0LL,
            v13[10] = 0LL,
            v19 = (_QWORD *)*v12,
            *(_QWORD **)(*v12 + 8LL) != v12)
        || (v20 = (_QWORD *)v12[1], (_QWORD *)*v20 != v12) )
      {
        __fastfail(3u);
      }
      *v20 = v19;
      v19[1] = v20;
      *v12 = 0LL;
      v13[15] = 0LL;
      if ( !v13[11] )
        _bittestandreset(gTimerId, *((_DWORD *)v13 + 24) - 256);
      EtwTraceKillTimer(v12 - 14);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
      HMAssignmentUnlock(v13 + 11);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
      HMFreeObject(v12 - 14);
    }
    v9 = 1LL;
  }
LABEL_13:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(v5) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v10 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v5 = v10;
            if ( *(_DWORD *)(((unsigned __int64)v10 << 6) + gpAtomickCheckStacks) == v6 )
              break;
            if ( ++v10 >= gdwAtomicCheckLogSize )
              goto LABEL_47;
          }
          v5 = (unsigned __int64)v10 << 6;
          *(_DWORD *)(v5 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_47:
  UserSessionSwitchLeaveCrit(v5);
  return v9;
}

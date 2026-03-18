/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C00DAE60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C0109770 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??1?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01E138C (--1-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ScheduleDispatchNotification(InputTransform *a1, __int64 a2)
{
  LARGE_INTEGER v2; // rdi
  __int64 v4; // rdx
  __int64 CurrentProcessWin32Process; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rsi
  unsigned int DLT; // eax
  __int64 v11; // rcx
  tagDomLock *DomainLockRef; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  LARGE_INTEGER *v18; // rax
  LARGE_INTEGER *v19; // r14
  int v20; // eax
  LARGE_INTEGER **v21; // rax
  unsigned int v23; // eax
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v25; // rcx
  HANDLE ThreadId; // rax
  _QWORD v27[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v28; // [rsp+88h] [rbp+17h]
  __int128 SystemInformation; // [rsp+98h] [rbp+27h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+37h]

  v2 = *(LARGE_INTEGER *)((char *)a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( *(_QWORD *)(v2.QuadPart + 416) == CurrentProcessWin32Process )
  {
    v8 = 0;
    if ( v2.QuadPart != gptiCurrent
      && !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, *(_QWORD *)(v2.QuadPart + 424) + 436LL) )
    {
      return 1LL;
    }
    v9 = *(_QWORD *)(v2.QuadPart + 424);
    DLT = DLT_QUEUE::getDLT(CurrentProcessWin32Process);
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v27[0] = DomainLockRef;
    v27[1] = v9;
    if ( v9 == gObjDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    tagDomLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)v9);
    if ( (*(_DWORD *)(v2.QuadPart + 480) & 1) == 0 )
    {
      SystemInformation = 0uLL;
      v30 = 0LL;
      v17 = *(_DWORD *)(v2.QuadPart + 1224);
      if ( (v17 & 0x2000) != 0
        && (v17 & 0x4000) == 0
        && (PsGetCurrentProcess(v14, v13, v15, v16) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
      {
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2.QuadPart);
        v25 = *(struct _KTHREAD **)v2.QuadPart;
        *(_QWORD *)&v28 = ThreadProcessId;
        ThreadId = PsGetThreadId(v25);
        LODWORD(v30) = 13;
        *((_QWORD *)&v28 + 1) = ThreadId;
        SystemInformation = v28;
        if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
          *(_DWORD *)(v2.QuadPart + 1224) |= 0x4000u;
      }
      if ( (*(_DWORD *)(v2.QuadPart + 1224) & 0x20) == 0
        || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                           (LARGE_INTEGER)v2.QuadPart,
                           9LL,
                           a1,
                           96LL,
                           0LL,
                           0LL) )
      {
        if ( *(_DWORD *)(v9 + 40) >= gUserPostMessageLimit )
        {
          v23 = 1816;
        }
        else
        {
          v18 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v19 = v18;
          if ( v18 )
          {
            memset(v18, 0, 0xA8uLL);
            v20 = 8;
            if ( *(_DWORD *)(v9 + 44) != 2 )
              v20 = 4;
            v19[12].HighPart |= v20;
            v21 = *(LARGE_INTEGER ***)(v9 + 32);
            if ( v21 )
            {
              *v21 = v19;
              v19[1] = *(LARGE_INTEGER *)(v9 + 32);
            }
            else
            {
              *(_QWORD *)(v9 + 24) = v19;
            }
            *(_QWORD *)(v9 + 32) = v19;
            ++*(_DWORD *)(v9 + 40);
            StoreQMessage(
              v19,
              a1,
              0x60u,
              0LL,
              0LL,
              0,
              0LL,
              9u,
              0LL,
              0,
              0LL,
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
              0LL,
              0LL);
            v19[13] = v2;
            if ( (*(_DWORD *)(v2.QuadPart + 480) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v2.QuadPart + 440) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v2.QuadPart + 440) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v2.QuadPart + 440) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v2.QuadPart + 728), 2, 0);
            }
            tagObjLock::UnLockExclusive((tagObjLock *)v9);
            tagDomLock::UnLockShared(DomainLockRef);
            return 2;
          }
          v23 = 8;
        }
        UserSetLastError(v23, v13, v15, v16);
      }
    }
    CLockExclusiveInUserCrit<DLT_QUEUE>::~CLockExclusiveInUserCrit<DLT_QUEUE>(v27);
    return v8;
  }
  UserSetLastError(5LL, v4, v6, v7);
  return 0LL;
}

/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C003BFF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C0102C18 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C0196AA0 (--1-$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ScheduleDispatchNotification(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 CurrentProcessWin32Process; // rdx
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int DLT; // eax
  __int64 v8; // rcx
  tagObjLock *DomainLockRef; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rax
  _DWORD *v14; // rbp
  int v15; // eax
  _QWORD *v16; // rax
  unsigned int v18; // eax
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v20; // rcx
  _QWORD v21[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v22; // [rsp+80h] [rbp-48h]
  __int128 SystemInformation; // [rsp+90h] [rbp-38h] BYREF
  int v24; // [rsp+A0h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 416) == CurrentProcessWin32Process )
  {
    v5 = 0;
    if ( v1 != gptiCurrent )
    {
      CurrentProcessWin32Process = *(_QWORD *)(CurrentProcessWin32Process + 872);
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 424) + 428LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)CurrentProcessWin32Process <= (unsigned int)v4 )
        {
          if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v4 )
            return 1LL;
          v4 >>= 32;
          CurrentProcessWin32Process >>= 32;
          if ( (_DWORD)CurrentProcessWin32Process != (_DWORD)v4
            && (_DWORD)v4 != -1
            && (_DWORD)CurrentProcessWin32Process != -1 )
          {
            return 1LL;
          }
        }
      }
    }
    v6 = *(_QWORD *)(v1 + 424);
    DLT = DLT_QUEUE::getDLT(v4, CurrentProcessWin32Process);
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    v21[0] = DomainLockRef;
    v21[1] = v6;
    if ( v6 == gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    tagObjLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)v6);
    if ( (*(_DWORD *)(v1 + 480) & 1) == 0 )
    {
      v12 = *(_DWORD *)(v1 + 1200);
      if ( (v12 & 0x2000) != 0
        && (v12 & 0x4000) == 0
        && (PsGetCurrentProcess(v11, v10) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
      {
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v1);
        v20 = *(struct _KTHREAD **)v1;
        *(_QWORD *)&v22 = ThreadProcessId;
        v24 = 13;
        *((_QWORD *)&v22 + 1) = PsGetThreadId(v20);
        SystemInformation = v22;
        if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
          *(_DWORD *)(v1 + 1200) |= 0x4000u;
      }
      if ( (*(_DWORD *)(v1 + 1200) & 0x20) == 0
        || (unsigned int)ProcessSuspendedEventMessage(v1, 9LL, a1, 96LL, 0LL, 0LL) )
      {
        if ( *(_DWORD *)(v6 + 40) >= gUserPostMessageLimit )
        {
          v18 = 1816;
        }
        else
        {
          v13 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v14 = v13;
          if ( v13 )
          {
            memset(v13, 0, 0xA0uLL);
            v15 = 8;
            if ( *(_DWORD *)(v6 + 44) != 2 )
              v15 = 4;
            v14[25] |= v15;
            v16 = *(_QWORD **)(v6 + 32);
            if ( v16 )
            {
              *v16 = v14;
              *((_QWORD *)v14 + 1) = *(_QWORD *)(v6 + 32);
            }
            else
            {
              *(_QWORD *)(v6 + 24) = v14;
            }
            *(_QWORD *)(v6 + 32) = v14;
            ++*(_DWORD *)(v6 + 40);
            StoreQMessage(
              v14,
              a1,
              96LL,
              0LL,
              0LL,
              0,
              0LL,
              9,
              0LL,
              0,
              0LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
              0LL,
              0LL);
            *((_QWORD *)v14 + 13) = v1;
            if ( (*(_DWORD *)(v1 + 480) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v1 + 440) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v1 + 440) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v1 + 720), 2, 0);
            }
            tagObjLock::UnLock((tagObjLock *)v6);
            tagObjLock::UnLock(DomainLockRef);
            return 2;
          }
          v18 = 8;
        }
        UserSetLastError(v18, v10);
      }
    }
    CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(v21);
    return v5;
  }
  UserSetLastError(5LL, CurrentProcessWin32Process);
  return 0LL;
}

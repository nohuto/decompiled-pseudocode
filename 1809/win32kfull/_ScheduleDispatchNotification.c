/*
 * XREFs of _ScheduleDispatchNotification @ 0x1C0026670
 * Callers:
 *     <none>
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ProcessSuspendedEventMessage @ 0x1C0124B64 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C01CCFCC (--1-$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  _DWORD *v15; // rax
  _DWORD *v16; // rbp
  int v17; // eax
  _QWORD *v18; // rax
  unsigned int v20; // eax
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v22; // rcx
  _QWORD v23[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v24; // [rsp+80h] [rbp-48h]
  __int128 SystemInformation; // [rsp+90h] [rbp-38h] BYREF
  int v26; // [rsp+A0h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 16);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( *(_QWORD *)(v1 + 424) == CurrentProcessWin32Process )
  {
    v5 = 0;
    if ( v1 != gptiCurrent )
    {
      CurrentProcessWin32Process = *(_QWORD *)(CurrentProcessWin32Process + 880);
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 432) + 428LL);
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
    v6 = *(_QWORD *)(v1 + 432);
    DLT = DLT_QUEUE::getDLT(v4, CurrentProcessWin32Process);
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    v23[0] = DomainLockRef;
    v23[1] = v6;
    if ( v6 == gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    tagObjLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)v6);
    if ( (*(_DWORD *)(v1 + 488) & 1) == 0 )
    {
      v14 = *(_DWORD *)(v1 + 1208);
      if ( (v14 & 0x2000) != 0
        && (v14 & 0x4000) == 0
        && (PsGetCurrentProcess(v11, v10, v12, v13) == gpepCSRSS || (unsigned __int8)IsInputThread()) )
      {
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v1);
        v22 = *(struct _KTHREAD **)v1;
        *(_QWORD *)&v24 = ThreadProcessId;
        v26 = 13;
        *((_QWORD *)&v24 + 1) = PsGetThreadId(v22);
        SystemInformation = v24;
        if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
          *(_DWORD *)(v1 + 1208) |= 0x4000u;
      }
      if ( (*(_DWORD *)(v1 + 1208) & 0x20) == 0 || (unsigned int)ProcessSuspendedEventMessage(v1, 9LL, a1) )
      {
        if ( *(_DWORD *)(v6 + 40) >= gUserPostMessageLimit )
        {
          v20 = 1816;
        }
        else
        {
          v15 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v16 = v15;
          if ( v15 )
          {
            memset(v15, 0, 0xA8uLL);
            v17 = 8;
            if ( *(_DWORD *)(v6 + 44) != 2 )
              v17 = 4;
            v16[25] |= v17;
            v18 = *(_QWORD **)(v6 + 32);
            if ( v18 )
            {
              *v18 = v16;
              *((_QWORD *)v16 + 1) = *(_QWORD *)(v6 + 32);
            }
            else
            {
              *(_QWORD *)(v6 + 24) = v16;
            }
            *(_QWORD *)(v6 + 32) = v16;
            ++*(_DWORD *)(v6 + 40);
            StoreQMessage(v16, a1, 96LL);
            *((_QWORD *)v16 + 13) = v1;
            if ( (*(_DWORD *)(v1 + 488) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v1 + 448) + 6LL) |= 0x2040u;
              *(_WORD *)(*(_QWORD *)(v1 + 448) + 4LL) |= 0x2040u;
              if ( (*(_WORD *)(*(_QWORD *)(v1 + 448) + 10LL) & 0x2040) != 0 )
                KeSetEvent(*(PRKEVENT *)(v1 + 736), 2, 0);
            }
            tagObjLock::UnLock((tagObjLock *)v6);
            tagObjLock::UnLock(DomainLockRef);
            return 2;
          }
          v20 = 8;
        }
        UserSetLastError(v20);
      }
    }
    CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(v23);
    return v5;
  }
  UserSetLastError(5LL);
  return 0LL;
}

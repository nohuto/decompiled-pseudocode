/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C00379A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0035C9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0035CD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0037AA0 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int NotificationTokens; // edi
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF
  char v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
  if ( UserIsCurrentProcessDwm(v8, v7) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (SfmTokenArray *)((char *)gpSfmState + 32));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(gpSfmState, a1, &v11, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
    v3 = v11;
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion();
  }
  return NotificationTokens;
}

/*
 * XREFs of EmPowerPagingEnabled @ 0x1407264D8
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  char v3; // al
  char result; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
  if ( a1 )
  {
    dword_1404634A8 |= 0x80000000;
  }
  else
  {
    dword_1404634A8 &= ~0x80000000;
    if ( dword_1404634A8 )
    {
      v2 = 1;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      EmpPagingStatus = &Event;
    }
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpPagingLock, 0LL);
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}

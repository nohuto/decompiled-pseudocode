/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x14010085C
 * Callers:
 *     PopFxPluginWork @ 0x1401006F0 (PopFxPluginWork.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopFxEnableWorkOrderWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 *v4; // rax
  char v5; // al

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (unsigned int)PopFxWatchdogWorkOrderTimeout;
  if ( v1 )
  {
    *(_QWORD *)(v1 + 168) = KeGetCurrentThread();
    if ( (_DWORD)v2 )
    {
      KeSetCoalescableTimer(
        (PKTIMER)(v1 + 16),
        (LARGE_INTEGER)(-10000 * v2),
        0,
        (unsigned int)v2 / 0xA,
        (PKDPC)(v1 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v1 + 152) = 0LL;
      *(_QWORD *)(v1 + 160) = v3;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
      v4 = (__int64 *)qword_140419F68;
      if ( *(__int64 **)qword_140419F68 != &PopWorkOrderList )
        __fastfail(3u);
      *(_QWORD *)(v1 + 8) = qword_140419F68;
      *(_QWORD *)v1 = &PopWorkOrderList;
      *v4 = v1;
      qword_140419F68 = v1;
      v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
      KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
    }
  }
  return v1;
}

/*
 * XREFs of ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00C2D18
 * Callers:
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00C2CD0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

NdisWatchdogState *__fastcall NdisWatchdogState::NdisWatchdogState(char *DeferredContext)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_DWORD *)DeferredContext + 48) = 0;
  memset(DeferredContext + 200, 0, 0x40uLL);
  DeferredContext[264] = 0;
  KeInitializeDpc((PRKDPC)DeferredContext, (PKDEFERRED_ROUTINE)ndisWatchdogTimeoutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 1);
  *((_QWORD *)DeferredContext + 19) = DeferredContext;
  *((_QWORD *)DeferredContext + 18) = ndisWatchdogTimeoutWorkerRoutine;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 7, NotificationEvent, 1u);
  v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
  KeEnterCriticalRegion();
  v5.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
  v2 = (_QWORD *)qword_1C00A0970;
  v5.m_State = Exclusive;
  v3 = DeferredContext + 272;
  if ( *(struct _LIST_ENTRY **)qword_1C00A0970 != &g_ndisWatchdogList )
    __fastfail(3u);
  *((_QWORD *)DeferredContext + 35) = qword_1C00A0970;
  *v3 = &g_ndisWatchdogList;
  *v2 = v3;
  qword_1C00A0970 = (__int64)(DeferredContext + 272);
  KLockHolder::~KLockHolder(&v5);
  return (NdisWatchdogState *)DeferredContext;
}

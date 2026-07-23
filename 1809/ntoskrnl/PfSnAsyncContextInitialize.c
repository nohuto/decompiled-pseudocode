/*
 * XREFs of PfSnAsyncContextInitialize @ 0x1406C2244
 * Callers:
 *     PfSnPrefetchScenario @ 0x1406C21A0 (PfSnPrefetchScenario.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4B30 (PfSnReferenceProcessTrace.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall PfSnAsyncContextInitialize(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  _KPROCESS *Process; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  KSPIN_LOCK *v10; // rcx

  memset(a1, 0, 0xF8uLL);
  a1[26] = a2;
  a1[4] = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[27] = Process;
  ObfReferenceObject(Process);
  v9 = PfSnReferenceProcessTrace(a1[27]);
  v10 = (KSPIN_LOCK *)a1[4];
  a1[28] = v9;
  ExInitializePushLock(v10);
  *((_DWORD *)a1 + 59) = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
  *a1 = 0LL;
  a1[2] = PfSnAsyncPrefetchWorker;
  a1[3] = a1;
  if ( a4 )
    *((_DWORD *)a1 + 60) |= 1u;
  ExInitializePushLock(a1 + 5);
  a1[22] = 0LL;
  a1[24] = PfSnPowerBoostWorker;
  a1[25] = a1 + 5;
  KeInitializeTimerEx((PKTIMER)(a1 + 6), NotificationTimer);
  KeInitializeDpc((PRKDPC)(a1 + 14), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, a1 + 5);
}

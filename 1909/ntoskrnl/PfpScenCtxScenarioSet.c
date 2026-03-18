/*
 * XREFs of PfpScenCtxScenarioSet @ 0x14059E460
 * Callers:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140746420 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PfpServiceMainThreadBoost @ 0x140169398 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140169C04 (PfpScenCtxWaiterTimedOut.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14059CEC0 (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14072AD34 (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  KPRIORITY v10; // ebp
  int v11; // eax
  BOOL v12; // eax
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 48);
    v10 = 1;
    v12 = v9
       && (PfpScenCtxPrefetchStateSet(BugCheckParameter2, v9, 0, 1),
           PfpScenCtxWaiterTimedOut(BugCheckParameter2),
           v11 = *(_DWORD *)(BugCheckParameter2 + 48),
           *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
           *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
           v11)
       || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v12 )
    {
      if ( a3 )
      {
        if ( Object )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)&Object);
          v10 = 0;
        }
        else
        {
          v10 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v10, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}

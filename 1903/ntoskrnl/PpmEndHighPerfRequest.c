/*
 * XREFs of PpmEndHighPerfRequest @ 0x14018156C
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140727A18 (PoClearBroadcast.c)
 *     PopUserShutdownCancelled @ 0x140729950 (PopUserShutdownCancelled.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078A450 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408AB7F0 (PdcPoPerfOverride.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = (unsigned int)(10000 * PpmHighPerfDuration[v1]);
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}

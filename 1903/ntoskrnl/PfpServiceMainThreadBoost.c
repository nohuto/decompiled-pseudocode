/*
 * XREFs of PfpServiceMainThreadBoost @ 0x140169948
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x14059E480 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  KIRQL v6; // al
  KIRQL v7; // r15
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2[1];
  v3 = 0;
  if ( *a2 )
  {
    *(_DWORD *)(v2 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v7 = v6;
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v8 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v8, 12LL);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 104));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_BYTE *)(v2 + 64) = 8;
    *(_QWORD *)(v2 + 80) = v2 + 72;
    *(_QWORD *)(v2 + 72) = v2 + 72;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_QWORD *)(v2 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v2 = 275;
    *(_QWORD *)(v2 + 32) = v2;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    KiSetTimerEx(v2 + 64, -200000000LL, 0, 0, v2);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v3;
}

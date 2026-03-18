/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1400C7500
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1406874E8 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessBackgroundCountCallback @ 0x1406ED7F0 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x1400803B4 (KeAbProcessBaseIoPriorityChange.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 *v7; // rsi
  __int64 *i; // rbx
  int v9; // r8d
  int v10; // edx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 780), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 780), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1760);
  ExAcquirePushLockSharedEx(a1 + 1760, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = (__int64 *)(a1 + 1160);
  for ( i = *(__int64 **)(a1 + 1160); i != v7; i = (__int64 *)*i )
  {
    if ( (*((char *)i - 928) | *((char *)i - 298)) != 0x3F )
    {
      v9 = (*((_DWORD *)i + 10) >> 9) & 7;
      if ( a2 )
      {
        v10 = (*((_DWORD *)i + 10) >> 9) & 7;
        v9 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 != v9 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 215), v10, v9);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

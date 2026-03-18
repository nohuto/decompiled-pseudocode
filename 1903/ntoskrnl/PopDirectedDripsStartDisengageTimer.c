/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x1402F175C
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1401689C0 (PoFxNotifySurprisePowerOn.c)
 *     PopRequestCompletion @ 0x140171E80 (PopRequestCompletion.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x140113E70 (KeCancelTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1401593AC (PopDirectedDripsSetDisengageReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (KSPIN_LOCK *)((char *)&unk_140444BA8 + 160 * a1);
  v5[0] = 0LL;
  v5[1] = -1LL;
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
  if ( !KeCancelTimer2((__int64)(v1 + 3)) && ++*((_DWORD *)v1 + 5) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)v1);
  KeSetTimer2((__int64)(v1 + 3), -10000000LL * *((unsigned int *)v1 + 1), 0LL, (__int64)v5);
  ++*((_DWORD *)v1 + 4);
  KxReleaseSpinLock(v1 + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}

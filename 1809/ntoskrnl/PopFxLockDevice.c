/*
 * XREFs of PopFxLockDevice @ 0x14015B158
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1401587D0 (PoFxNotifySurprisePowerOn.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1406F02AC (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall PopFxLockDevice(__int64 a1, char a2)
{
  unsigned __int64 v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0LL;
  if ( a1 )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 80);
    v6 = v5;
    if ( a2 )
      v4 &= -(__int64)((*(_BYTE *)(a1 + 296) & 4) != 0);
    if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 224), 0LL, &File, 1u, 0x20u) < 0 )
      v4 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
  return v4;
}

/*
 * XREFs of ViIsActiveChannelWcb @ 0x14030A1B4
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x14092C3B0 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  char v4; // si
  __int64 *v5; // rbx
  KIRQL v6; // di
  __int64 i; // rax
  __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 144);
  v4 = 0;
  v5 = (__int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  for ( i = *v5; ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( v5 == (__int64 *)(v8 + 72) )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
  return v4;
}

/*
 * XREFs of ViRemoveChannelWcb @ 0x14030A568
 * Callers:
 *     VfCancelAdapterChannel @ 0x14092B9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092BD60 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x14092C040 (VfFreeMapRegisters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // r14
  __int64 v10; // rax
  __int64 i; // rbx
  __int64 v12; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 144);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v10 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v12 + 72) )
  {
    v12 = i - 72;
    if ( v10 == v12 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v12 + 96) == a2 || *(_QWORD *)(v12 + 88) == a2)
      || a3 && *(_QWORD *)(v12 + 40) == a3
      || *(_DWORD *)(v12 + 52) <= 1u )
    {
      v14 = *(_QWORD *)(v12 + 72);
      v15 = *(_QWORD **)(v12 + 80);
      if ( *(_QWORD *)(v14 + 8) != v12 + 72 || *v15 != v12 + 72 )
        __fastfail(3u);
      *v15 = v14;
      v6 = 1;
      *(_QWORD *)(v14 + 8) = v15;
      break;
    }
  }
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v9);
  if ( v6 != 1 )
    return 0LL;
  return v12;
}

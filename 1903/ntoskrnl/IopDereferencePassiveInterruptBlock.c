/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x14029E5F4
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14029E8C0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140861A48 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14029E544 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14029E59C (IopAcquirePassiveInterruptBlockLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // di
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v6; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v8);
  IopAcquirePassiveInterruptBlockLock((__int64)P, &v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v3 = *(_QWORD **)P;
    v4 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v4 != P )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v7);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v6);
  }
  __writecr8(v8);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}

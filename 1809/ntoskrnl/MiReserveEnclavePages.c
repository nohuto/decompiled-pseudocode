/*
 * XREFs of MiReserveEnclavePages @ 0x1402BE9C8
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x14085ADF0 (MiCreateHardwareEnclave.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetEnclavePage @ 0x1402BDF38 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r8
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v12; // rcx
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 4128), &v13);
  v6 = *(_QWORD *)(a2 + 4096);
  if ( v6 < a3 )
  {
    v7 = -1073741801;
  }
  else
  {
    *(_QWORD *)(a2 + 4096) = v6 - a3;
    v7 = 0;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13);
  OldIrql = v13.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v7 < 0 )
    return (unsigned int)v7;
  for ( *(_QWORD *)(a1 + 104) += a3; a3; --a3 )
  {
    v12 = (_QWORD *)(48 * MiGetEnclavePage(a2, 1, v8) - 0x58000000000LL);
    *v12 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v12;
  }
  return 0LL;
}

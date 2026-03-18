/*
 * XREFs of IoProcessPassiveInterrupts @ 0x14029E488
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x1402B0A90 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x1402B0B24 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14029E59C (IopAcquirePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x14029E714 (IopFindPassiveInterruptBlock.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  bool v2; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v4; // [rsp+48h] [rbp+10h] BYREF

  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      ((void (__fastcall *)(_QWORD, __int64))off_1404244B0[0])(*(unsigned int *)(result + 24), 1LL);
    IopAcquirePassiveInterruptBlockLock(v1, &v4);
    v2 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v2 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 56));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}

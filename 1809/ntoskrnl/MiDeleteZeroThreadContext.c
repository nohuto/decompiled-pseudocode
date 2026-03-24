/*
 * XREFs of MiDeleteZeroThreadContext @ 0x1401850B4
 * Callers:
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x140185040 (MiZeroLargePageThread.c)
 *     MiInitializePartitionThreads @ 0x140851E50 (MiInitializePartitionThreads.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     MiDeleteUltraThreadContext @ 0x1400E180C (MiDeleteUltraThreadContext.c)
 *     KeSignalGate @ 0x1401276B0 (KeSignalGate.c)
 *     MiDecrementHugeContext @ 0x140185A48 (MiDecrementHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteZeroThreadContext(__int64 a1)
{
  unsigned int *v2; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 210) )
  {
    v2 = *(unsigned int **)(a1 + 216);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(qword_14043C950 + 1984LL * v2[46] + 1904), &LockHandle);
      MiDecrementHugeContext(v2);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
  }
  result = MiDeleteUltraThreadContext(a1 + 80);
  v5 = *(_QWORD *)(a1 + 224);
  if ( v5 )
  {
    result = *(unsigned int *)(v5 + 52);
    if ( (_DWORD)result )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 52), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return KeSignalGate(v5, 1LL, v4);
    }
  }
  return result;
}

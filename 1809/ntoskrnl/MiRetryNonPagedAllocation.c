/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1400CB4EC
 * Callers:
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiRetryNonPagedAllocation()
{
  unsigned int v1; // edi
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // ebx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v6; // bl
  struct _KPRCB *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !KeAreInterruptsEnabled()
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
    return 1LL;
  v1 = 0;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_14043ED28, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043ED00, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140439B2C == 1 )
      {
        if ( dword_140439B28 == dword_14043ED40 )
          goto LABEL_27;
        byte_140439B2C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140439B2C )
        {
          dword_140439B28 = dword_14043ED40;
          byte_140439B2C = 1;
        }
        goto LABEL_27;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_14043ED28);
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
  if ( byte_140439B2C == 1 )
    byte_140439B2C = 0;
  v1 = 1;
LABEL_27:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v6 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  __writecr8(v6);
  return v1;
}

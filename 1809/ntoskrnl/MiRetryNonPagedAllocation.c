/*
 * XREFs of MiRetryNonPagedAllocation @ 0x1400CB3EC
 * Callers:
 *     MiGetPoolPages @ 0x1400CB1A0 (MiGetPoolPages.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_14043DC68, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043DC40, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0xA0uLL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140438A6C == 1 )
      {
        if ( dword_140438A68 == dword_14043DC80 )
          goto LABEL_27;
        byte_140438A6C = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140438A6C )
        {
          dword_140438A68 = dword_14043DC80;
          byte_140438A6C = 1;
        }
        goto LABEL_27;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_14043DC68);
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
  if ( byte_140438A6C == 1 )
    byte_140438A6C = 0;
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

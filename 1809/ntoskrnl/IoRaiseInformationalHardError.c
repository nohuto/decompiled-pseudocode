/*
 * XREFs of IoRaiseInformationalHardError @ 0x1402836F0
 * Callers:
 *     MiCauseOverCommitPopup @ 0x1402C03D0 (MiCauseOverCommitPopup.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     FsRtlLogCcFlushError @ 0x140815820 (FsRtlLogCcFlushError.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  PVOID v9; // rax
  PVOID v10; // rsi
  KIRQL v11; // di
  __int64 v12; // r9
  const void *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rsi
  int v16; // ebp
  const void *v17; // rcx
  unsigned __int16 v18; // ax
  _QWORD *v19; // rax
  struct _KPRCB *v20; // rcx
  void *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
      return 0;
  }
  else if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) != 0 )
  {
    return 0;
  }
  if ( ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && Semaphore.Header.SignalState >= 25 )
  {
    return 0;
  }
  if ( dword_140436FDC > 25 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x72456F49u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x28uLL);
  *((_DWORD *)v8 + 4) = ErrorStatus;
  if ( String && String->Length )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, String->Length, 0x72456F49u);
    if ( !v9 )
    {
LABEL_45:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v9;
    memmove(v9, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140436FB0);
    if ( Semaphore.Header.SignalState < 25 )
    {
      if ( !IopCurrentHardError
        || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
        || ((v13 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
        && ((v14 = *((_WORD *)v8 + 12), v14 != *(_WORD *)(IopCurrentHardError + 24))
         || memcmp(v13, *(const void **)(IopCurrentHardError + 32), v14)) )
      {
        v15 = qword_140436FA0;
        if ( (__int64 *)qword_140436FA0 == &qword_140436FA0 )
        {
LABEL_35:
          v19 = (_QWORD *)qword_140436FA8;
          if ( *(__int64 **)qword_140436FA8 != &qword_140436FA0 )
            __fastfail(3u);
          *v8 = &qword_140436FA0;
          v8[1] = v19;
          *v19 = v8;
          qword_140436FA8 = (__int64)v8;
          KeReleaseSemaphoreEx((__int64)&Semaphore, 0LL, 1, v12, 0);
          if ( !byte_140436FD8 )
          {
            byte_140436FD8 = 1;
            ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
          }
          KxReleaseSpinLock(&qword_140436FB0);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(v11);
          return 1;
        }
        v16 = *((_DWORD *)v8 + 4);
        while ( 1 )
        {
          if ( v16 == *(_DWORD *)(v15 + 16) )
          {
            v17 = (const void *)v8[4];
            if ( !v17 && !*(_QWORD *)(v15 + 32) )
              break;
            v18 = *((_WORD *)v8 + 12);
            if ( v18 == *(_WORD *)(v15 + 24) && !memcmp(v17, *(const void **)(v15 + 32), v18) )
              break;
          }
          v15 = *(_QWORD *)v15;
          if ( (__int64 *)v15 == &qword_140436FA0 )
            goto LABEL_35;
        }
      }
    }
    KxReleaseSpinLock(&qword_140436FB0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
    __writecr8(v11);
    goto LABEL_43;
  }
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
  if ( !v10 )
  {
LABEL_43:
    v21 = (void *)v8[4];
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_45;
  }
  _InterlockedIncrement(&dword_140436FDC);
  KeInitializeApc(
    (__int64)v10,
    (__int64)Thread,
    0,
    (__int64)SC_ENV::Free,
    0LL,
    (__int64)IopRaiseInformationalHardError,
    0,
    (__int64)v8);
  KeInsertQueueApc((__int64)v10, 0LL, 0LL, 0);
  return 1;
}

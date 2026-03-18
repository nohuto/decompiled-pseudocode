/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1400C21CC
 * Callers:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x140116BDC (MiRemovePageAnyColor.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400C23E8 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, unsigned int a3, int a4, __int16 a5)
{
  ULONG_PTR v5; // r14
  int v8; // r12d
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v11; // rdi
  signed __int8 v12; // al
  bool v13; // cf
  struct _KPRCB *v14; // rcx
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  bool v17; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+50h]
  int v23; // [rsp+98h] [rbp+58h]

  v23 = a4;
  v22 = a3;
  v5 = *(_QWORD *)(a2 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 == 0xFFFFFFFFFLL )
    return 0LL;
  v8 = a5 & 1;
  while ( 1 )
  {
    v9 = 48 * v5 - 0x58000000000LL;
    if ( v8 )
    {
      v11 = (volatile signed __int32 *)(v9 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v11 = (volatile signed __int32 *)(v9 + 24);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL);
      if ( (a5 & 0x4000) != 0 )
      {
        v21 = 0;
        if ( v12 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(__int64 *)v11 < 0 );
          }
          while ( _interlockedbittestandset64(v11, 0x3FuLL) );
          a4 = v23;
        }
      }
      else if ( v12 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v17 = CurrentIrql < 2u;
LABEL_68:
          if ( v17 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
LABEL_29:
        __writecr8(CurrentIrql);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(v9 + 34) & 7) != a4 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        goto LABEL_23;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v13 = CurrentIrql < 2u;
LABEL_48:
        if ( v13 )
        {
          v14 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v14);
        }
      }
LABEL_26:
      __writecr8(CurrentIrql);
      goto LABEL_23;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 32);
    if ( (a5 & 0x4000) == 0 )
    {
      if ( (unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v17 = CurrentIrql < 2u;
        goto LABEL_68;
      }
      goto LABEL_29;
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a2 + 32));
LABEL_11:
    if ( v5 == *(_QWORD *)(a2 + 16) )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v13 = CurrentIrql < 2u;
        goto LABEL_48;
      }
      goto LABEL_26;
    }
LABEL_23:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0xFFFFFFFFFLL )
      return 0LL;
    a4 = v23;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, a2, a5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v8 && *(_QWORD *)(a2 + 16) != 0xFFFFFFFFFLL )
      MiReplenishPageSlist(a1, v23, v22);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x58000000000LL;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiReturnFreeZeroPage(48 * v5 - 0x58000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}

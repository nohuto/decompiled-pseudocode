/*
 * XREFs of MiGetPerfectColorHeadPage @ 0x1400EE0C8
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiRemovePageAnyColor @ 0x1400EB1FC (MiRemovePageAnyColor.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE2E4 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPerfectColorHeadPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int16 a5)
{
  ULONG_PTR v5; // r14
  int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v14; // rdi
  signed __int8 v15; // al
  bool v16; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  bool v20; // cf
  struct _KPRCB *v21; // rcx
  volatile signed __int64 *v22[11]; // [rsp+20h] [rbp-58h] BYREF
  int v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+18h]

  v25 = a3;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 == 0xFFFFFFFFFLL )
    return 0LL;
  v9 = a5 & 1;
  while ( 1 )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    v11 = 2LL;
    v12 = 48 * v5 - 0x58000000000LL;
    if ( v9 )
    {
      v14 = (volatile signed __int32 *)(v12 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v14 = (volatile signed __int32 *)(v12 + 24);
      v15 = _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL);
      if ( (a5 & 0x4000) != 0 )
      {
        v24 = 0;
        if ( v15 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v24, v11, v10);
            while ( *(__int64 *)v14 < 0 );
          }
          while ( _interlockedbittestandset64(v14, 0x3FuLL) );
        }
      }
      else if ( v15 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v20 = CurrentIrql < 2u;
          goto LABEL_68;
        }
LABEL_28:
        __writecr8(CurrentIrql);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(v12 + 34) & 7) == a4 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v16 = CurrentIrql < 2u;
LABEL_48:
        if ( v16 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
LABEL_24:
      __writecr8(CurrentIrql);
    }
LABEL_25:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  v22[0] = 0LL;
  v22[1] = (volatile signed __int64 *)(a2 + 32);
  if ( (a5 & 0x4000) == 0 )
  {
    if ( (unsigned int)KxTryToAcquireQueuedSpinLock(v22) )
      goto LABEL_11;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql == 17 )
      return 0LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v20 = CurrentIrql < 2u;
LABEL_68:
      if ( v20 )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    goto LABEL_28;
  }
  KxAcquireQueuedSpinLock((__int64)v22, (volatile __int64 *)(a2 + 32), 0x7FFFFFFFFFFFFFFFLL);
LABEL_11:
  if ( v5 != *(_QWORD *)(a2 + 16) )
  {
    KxReleaseQueuedSpinLock(v22);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql == 17 )
      goto LABEL_25;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v16 = CurrentIrql < 2u;
      goto LABEL_48;
    }
    goto LABEL_24;
  }
  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v5, a2, a5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v9 && *(_QWORD *)(a2 + 16) != 0xFFFFFFFFFLL )
      MiReplenishPageSlist(a1, a4, v25);
    KxReleaseQueuedSpinLock(v22);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v19);
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x58000000000LL;
  }
  else
  {
    KxReleaseQueuedSpinLock(v22);
    MiReturnFreeZeroPage(48 * v5 - 0x58000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v18);
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}

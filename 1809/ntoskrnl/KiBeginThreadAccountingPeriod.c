/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1401009F0
 * Callers:
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1401C4420 (SwapContext.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v5; // bp
  UCHAR Size; // di
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v13; // rcx
  _BYTE *SchedulerAssist; // rax

  CurrentThread = a2;
  if ( a2 )
  {
    v5 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 23496) = *(_QWORD *)(a1 + 23488);
  if ( (Size & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 24176);
    v8 = *(_QWORD *)(a1 + 24184);
    if ( v7 && v8 )
    {
      if ( *(_BYTE *)(v8 + 100) )
      {
        v9 = *(_DWORD *)(v8 + 116);
      }
      else
      {
        v9 = *(_DWORD *)(v8 + 72);
        if ( v9 >= *(_DWORD *)(v7 + 360) )
          v9 = *(_DWORD *)(v7 + 360);
      }
    }
    else
    {
      v9 = 100;
    }
    if ( v9 < 0x4B )
      v10 = v9 / 0x19;
    else
      v10 = 3;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v10));
    *(_QWORD *)&a2->Header.Lock += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
      KiSetVpThreadSystemWork(a1, 0LL);
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v5 )
  {
    if ( (Size & 0x36) == 0 )
    {
      _enable();
      return;
    }
    if ( CurrentThread->WaitBlock[0].SparePtr )
    {
      LOBYTE(a2) = 1;
      KiBeginCounterAccumulation(CurrentThread, a2);
    }
    _enable();
    if ( (CurrentThread->Header.Size & 4) != 0 )
    {
      v11 = *(&CurrentThread->MiscFlags + 1);
      if ( (v11 & 0x800) == 0 )
      {
        if ( (v11 & 0x600) != 0 )
          return;
        SchedulingGroup = CurrentThread->SchedulingGroup;
        if ( !SchedulingGroup )
          return;
        v13 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
        if ( !v13 )
          return;
        while ( (v13[112] & 2) == 0 )
        {
          v13 = (char *)*((_QWORD *)v13 + 51);
          if ( !v13 )
            return;
        }
      }
      LOBYTE(a3) = 1;
      KiInsertDeferredPreemptionApc(a1, (__int64)CurrentThread, a3);
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
}

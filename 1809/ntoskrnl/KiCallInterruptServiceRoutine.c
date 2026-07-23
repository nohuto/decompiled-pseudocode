/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x1400162E0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140016548 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400165E0 (KeFindFirstSetRightGroupAffinity.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckAndRearmForceIdle @ 0x1400F99D8 (KiCheckAndRearmForceIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  char v10; // bp
  unsigned __int64 v11; // rax
  volatile signed __int32 *v13; // rbp
  struct _KPRCB *v14; // r13
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int64 *v16; // rcx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v10 != 0;
  }
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 16) )
    {
      v19 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      if ( ((unsigned int)(*(_QWORD *)v4 >> (v19 & 0x3F)) & (v19 >> 6 == *(unsigned __int16 *)(v4 + 8))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 240));
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v7 = __rdtsc();
  v8 = (unsigned __int64)HIDWORD(v7) << 32;
  *(_QWORD *)(a1 + 184) = v7;
  v9 = v7;
  if ( a2 )
  {
    v13 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
    }
    else
    {
      v14 = KeGetCurrentPrcb();
      SchedulerAssist = v14->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v23 = SchedulerAssist[5];
          SchedulerAssist[5] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(v14, v8);
        }
      }
      if ( _interlockedbittestandset64(v13, 0LL) )
      {
        v22 = v14->SchedulerAssist;
        if ( v22 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v24 = v22[5] - 1;
            v22[5] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(v14, v8);
          }
        }
        KxWaitForSpinLockAndAcquire(v13);
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
  {
    v16 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v16, retaddr);
    else
      _InterlockedAnd64(v16, 0LL);
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v25 = v18[5] - 1;
        v18[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(v17, v18);
      }
    }
  }
  v11 = __rdtsc();
  *(_QWORD *)(a1 + 176) += v11 - *(_QWORD *)(a1 + 184);
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v21 = v11 - v9;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v21;
    else
      IsrDpcStats[4] += v21;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v10 )
  {
    ++*(_QWORD *)(a1 + 192);
    return v10 != 0;
  }
  return 0;
}

/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x140060910
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiEventClockStateChange @ 0x1400FCFB4 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400FCFF4 (KiSetPendingTick.c)
 *     KiRestoreClockTickRate @ 0x1400FD058 (KiRestoreClockTickRate.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     KiUpdateTimeAssist @ 0x1401178A8 (KiUpdateTimeAssist.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401199F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiGetPendingTick @ 0x1401304CC (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14028E570 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14028ECBC (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14029BA74 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x14031CB1C (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  signed __int32 v4; // eax
  __int64 v5; // rax
  unsigned __int8 ClockOwner; // cl
  volatile signed __int32 *v7; // r8
  struct _KPRCB *v8; // rax
  unsigned __int64 v9; // rbp
  char v10; // r14
  __int64 Number; // r14
  int v12; // ecx
  __int32 v13; // edi
  _BOOL8 v14; // rcx
  unsigned __int8 v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[7]; // [rsp+31h] [rbp-67h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v20[8]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-30h] BYREF
  int v23; // [rsp+70h] [rbp-28h]

  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v4 = KiClockState;
    if ( KiClockState == 1 )
    {
      v4 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v4 == 1 )
        break;
    }
    if ( v4 != 3 )
      goto LABEL_6;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, &v17, v20);
  v9 = v17;
  KiClockTimerOneShotEndTime = v17;
  v10 = off_1403FF5D8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && KiClockTimerOwner == CurrentPrcb->Number && v9 >= KiClockTimerNextTickTime && v10 )
      *a1 = v9 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v9 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_1403FF5D8[0]() )
  {
    *a1 = v9 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v9 - KiClockTimerOneShotStartTime < qword_140422728 )
    qword_140422728 = v9 - KiClockTimerOneShotStartTime;
  if ( v9 - KiClockTimerOneShotStartTime > qword_140422720 )
    qword_140422720 = v9 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v10 && (unsigned int)KiGetPastDueIRTimerInfo(v9, v16, &v15) )
      ExRecordOneTimerExpiry(v16[0], v15);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v9);
    KiConsiderTimerRebasing = 0;
  }
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    if ( ((KiClockOwnerAllowedCpuSet[((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
    {
      LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask);
      if ( (_DWORD)Number == -1 )
        LODWORD(Number) = CurrentPrcb->Number;
    }
    v12 = CurrentPrcb->Number;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
    v12 = Number;
  }
  if ( v12 == (_DWORD)Number )
  {
    if ( v9 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        KiClockTimerOwner = v12;
        if ( !(unsigned __int8)KiGetPendingTick() )
          off_1403FF5C0[0]();
      }
      v13 = 0;
      KiRestoreClockTickRate(v9, v18, v19);
      KiClockTimerNextTickTime = v9 + (unsigned int)KeTimeIncrement;
      KiEventClockStateChange(0LL, 1LL, v19, v18);
      goto LABEL_38;
    }
  }
  else
  {
    v3 = 1;
  }
  ++qword_140422718;
  v13 = 2;
  KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
  if ( v3 )
  {
    KiClockTimerOwner = Number;
    KiSendClockInterruptToClockOwner();
  }
LABEL_38:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v14 = (unsigned __int8)off_1403FF5D8[0]() == 0;
    KiResetForceIdle(v14, 0LL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v23 = KiClockTimerOwner;
    v21[0] = &v22;
    v22 = v9;
    v21[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v21, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v13);
LABEL_6:
  v5 = CurrentPrcb->Number;
  if ( KiClockTimerOwner == (_DWORD)v5 && !CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 1;
  ClockOwner = CurrentPrcb->ClockOwner;
  if ( !ClockOwner )
  {
    v7 = *(volatile signed __int32 **)(KiProcessorBlock[v5] + 25016);
    if ( v7 )
    {
      ClockOwner = 0;
      if ( (KiVelocityFlags & 0x40) != 0 )
      {
        _InterlockedAnd(v7, 0xFFF7FFFF);
        ClockOwner = CurrentPrcb->ClockOwner;
      }
    }
  }
  if ( ClockOwner )
  {
    v8 = KiClockTimerPerCpu ? KeGetCurrentPrcb() : (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
    if ( (v8->PendingTickFlags & 1) == 0 )
    {
      off_1403FF5C0[0]();
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  if ( !ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_1403FF5C8[0]();
    KiSetPendingTick(0LL);
  }
}

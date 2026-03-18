/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x140033A00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1400BE420 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiUpdateTimeAssist @ 0x1400F9BA8 (KiUpdateTimeAssist.c)
 *     KiSendClockInterruptToClockOwner @ 0x140112808 (KiSendClockInterruptToClockOwner.c)
 *     KiRestoreClockTickRate @ 0x14011297C (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x140113014 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140113054 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     KiGetPendingTick @ 0x1401330A8 (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1402A4DF0 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402A55AC (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x1402B2914 (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x1402B2D5C (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x14033BBA0 (ExRecordOneTimerExpiry.c)
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
  unsigned __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  int v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+64h] [rbp-34h]
  _QWORD v24[2]; // [rsp+68h] [rbp-30h] BYREF

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
  v10 = off_1404245D8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && KiClockTimerOwner == CurrentPrcb->Number && v9 >= KiClockTimerNextTickTime && v10 )
      *a1 = v9 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v9 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_1404245D8[0]() )
  {
    *a1 = v9 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v9 - KiClockTimerOneShotStartTime < qword_14044D2E8 )
    qword_14044D2E8 = v9 - KiClockTimerOneShotStartTime;
  if ( v9 - KiClockTimerOneShotStartTime > qword_14044D2E0 )
    qword_14044D2E0 = v9 - KiClockTimerOneShotStartTime;
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
  if ( v12 != (_DWORD)Number )
  {
    v3 = 1;
LABEL_34:
    ++qword_14044D2D8;
    v13 = 2;
    KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
    if ( v3 )
    {
      KiClockTimerOwner = Number;
      KiSendClockInterruptToClockOwner();
    }
    goto LABEL_36;
  }
  if ( v9 + (unsigned int)KiLastRequestedTimeIncrement > KiClockTimerNextTickTime )
    goto LABEL_34;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb->ClockOwner = 1;
    KiClockTimerOwner = v12;
    if ( !(unsigned __int8)KiGetPendingTick() )
      off_1404245C0[0]();
  }
  v13 = 0;
  KiRestoreClockTickRate(v9, v18, v19);
  KiClockTimerNextTickTime = v9 + (unsigned int)KeTimeIncrement;
  KiEventClockStateChange(0LL, 1LL, v19, v18);
LABEL_36:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v14 = (unsigned __int8)off_1404245D8[0]() == 0;
    KiResetForceIdle(v14, 0LL);
  }
  v23 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v22 = KiClockTimerOwner;
    v24[0] = &v21;
    v21 = v9;
    v24[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v24, 1, 1074790400, 3928, 1538);
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
      off_1404245C0[0]();
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  if ( !ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_1404245C8[0]();
    KiSetPendingTick(0LL);
  }
}

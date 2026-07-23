/*
 * XREFs of KiCheckForTimerExpiration @ 0x1400605D0
 * Callers:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCCD0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400FCD90 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x1400FD024 (KiGetClockIntervalOneShot.c)
 *     KiSetClockInterval @ 0x14012EBC8 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140190D2C (KiResetClockInterval.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int16 __fastcall KiCheckForTimerExpiration(__int64 a1)
{
  char v1; // di
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  char v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  int v9; // edx
  int v10; // edx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // r14
  unsigned int ClockIntervalOneShot; // eax
  __int64 v15; // rcx
  __int16 v16; // tt
  char v17; // dl
  unsigned __int8 CurrentIrql; // bp
  char v19; // al
  struct _KPRCB *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 v22; // cx
  unsigned __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int16 v25; // [rsp+38h] [rbp-40h]
  _QWORD v26[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  LOWORD(v4) = *(unsigned __int8 *)(a1 + 11884);
  if ( (v4 & 8) != 0 )
    goto LABEL_13;
  LOWORD(v4) = KiLastNonHrTimerExpiration;
  if ( *(_QWORD *)(a1 + 11688) != KiLastNonHrTimerExpiration )
  {
    v5 = 1;
    v6 = MEMORY[0xFFFFF78000000008] >> 18;
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_18;
      v7 = KiProcessorBlock[0];
    }
    else
    {
      v7 = a1;
    }
    v8 = v7 + 13952;
    if ( v8 )
    {
      v9 = *(_DWORD *)(a1 + 11888);
      if ( (unsigned int)(v6 - v9) >= 0x100 )
        LODWORD(v6) = v9 + 255;
      v10 = v9 - 1;
      while ( 1 )
      {
        LOWORD(v4) = (unsigned __int8)++v10;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(32LL * (unsigned __int8)v10 + v8 + 536) )
          break;
        if ( v10 == (_DWORD)v6 )
          goto LABEL_11;
      }
      v1 = 1;
LABEL_11:
      *(_DWORD *)(a1 + 11888) = v10;
      if ( v1 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_18:
    *(_DWORD *)(a1 + 11888) = v6;
    goto LABEL_13;
  }
  v5 = 0;
LABEL_12:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_13;
  if ( v5 )
  {
    LOWORD(v4) = KiNextTimer2DueTime;
    if ( KiNextTimer2DueTime > v3 )
      goto LABEL_13;
    goto LABEL_32;
  }
  LOWORD(v4) = qword_140422E68;
  if ( qword_140422E68 <= v3 )
LABEL_32:
    v1 = 1;
LABEL_13:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_14;
  v11 = qword_140422E68;
  v12 = v3 + KeMaximumIncrement;
  LOWORD(v4) = KiVelocityFlags;
  if ( (KiVelocityFlags & 0x100) == 0 )
  {
    v17 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v12 > qword_140422E68 )
        goto LABEL_14;
    }
    else if ( v12 <= qword_140422E68 )
    {
      goto LABEL_14;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( v17 == KiHRTimerClockActive )
    {
      if ( v17 )
      {
        KiResetClockInterval(&KiHRTimerClockRequest);
        v19 = 0;
      }
      else
      {
        KiSetClockInterval((unsigned int)KiHrIncrement, 0LL, &KiHRTimerClockRequest);
        v19 = 1;
      }
      KiHRTimerClockActive = v19;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v4 = CurrentIrql;
    goto LABEL_29;
  }
  if ( qword_140422E68 > v3 )
  {
    v4 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v4 = -1LL;
    if ( v4 != qword_140422E68 )
    {
      v13 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( v12 <= v11 )
      {
        if ( KiClockOwnerOneShotRequest )
        {
          PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL);
          KiClockOwnerOneShotRequest = 0LL;
          KiSetClockIntervalToMinimumRequested();
        }
      }
      else
      {
        KiClockOwnerOneShotRequest = v11;
        KiSetClockIntervalToMinimumRequested();
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v11, v3);
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        v20 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v20);
      }
      v4 = v13;
LABEL_29:
      __writecr8(v4);
    }
LABEL_14:
    if ( !v1 )
      goto LABEL_15;
  }
  _m_prefetchw((const void *)(a1 + 11884));
  LOWORD(v4) = *(_WORD *)(a1 + 11884);
  do
  {
    v15 = (unsigned __int16)v4;
    BYTE1(v15) = BYTE1(v4);
    v16 = v4;
    LOWORD(v4) = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), v4 | 8, v4);
  }
  while ( v16 != (_WORD)v4 );
  if ( (v4 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v15) = 2;
      LOWORD(v4) = HalRequestSoftwareInterrupt(v15);
    }
  }
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 )
  {
    LOWORD(v4) = KeGetCurrentIrql();
    if ( (_BYTE)v4 == 13 )
    {
      v22 = 0;
      v24 = v3;
      v25 = 0;
      if ( *(_BYTE *)(a1 + 33) )
      {
        v22 = 1;
        v25 = 1;
      }
      if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
        v25 = v22 | 8;
      v26[1] = 16LL;
      v26[0] = &v24;
      LOWORD(v4) = EtwTraceKernelEvent((unsigned int)v26, 1, 1074003968, 3919, 4196866);
    }
  }
  return v4;
}

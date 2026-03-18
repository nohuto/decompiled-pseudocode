/*
 * XREFs of KiCheckForTimerExpiration @ 0x140033740
 * Callers:
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 * Callees:
 *     RtlBackoff @ 0x14009CBE0 (RtlBackoff.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140112D90 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140112DEC (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x140113084 (KiGetClockIntervalOneShot.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int16 __fastcall KiCheckForTimerExpiration(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  unsigned __int64 v4; // rsi
  char v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r9
  int v9; // ecx
  int v10; // r10d
  int v11; // edx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int ClockIntervalOneShot; // eax
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 v19; // cx
  int v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]
  _QWORD v24[2]; // [rsp+48h] [rbp-30h] BYREF

  LOWORD(v1) = 0;
  v22 = 0LL;
  v23 = 0LL;
  v2 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
    goto LABEL_13;
  LOWORD(v1) = KiLastNonHrTimerExpiration;
  if ( *(_QWORD *)(a1 + 11688) == KiLastNonHrTimerExpiration )
  {
    v5 = 0;
LABEL_12:
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( v5 )
      {
        LOWORD(v1) = KiNextTimer2DueTime;
        if ( KiNextTimer2DueTime <= v4 )
          v2 = 1;
      }
      else
      {
        LOWORD(v1) = qword_14044DA48;
        if ( qword_14044DA48 <= v4 )
          v2 = 1;
      }
    }
    goto LABEL_13;
  }
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
  if ( !v8 )
  {
LABEL_18:
    *(_DWORD *)(a1 + 11888) = v6;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 11888);
  LOWORD(v1) = v6 - v9;
  v10 = v9 + 255;
  if ( (unsigned int)(v6 - v9) < 0x100 )
    v10 = MEMORY[0xFFFFF78000000008] >> 18;
  v11 = v9 - 1;
  while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v11 + v8 + 536) )
  {
    if ( v11 == v10 )
      goto LABEL_11;
  }
  v2 = 1;
LABEL_11:
  *(_DWORD *)(a1 + 11888) = v11;
  if ( !v2 )
    goto LABEL_12;
LABEL_13:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_14;
  v12 = qword_14044DA48;
  v13 = v4 + KeMaximumIncrement;
  if ( qword_14044DA48 > v4 )
  {
    v1 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v1 = -1LL;
    if ( v1 != qword_14044DA48 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( v13 <= v12 )
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
        KiClockOwnerOneShotRequest = v12;
        KiSetClockIntervalToMinimumRequested();
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v12, v4);
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOWORD(v1) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
LABEL_14:
    if ( !v2 )
      goto LABEL_15;
  }
  v21 = 0;
  _m_prefetchw((const void *)(a1 + 11884));
  v16 = *(_WORD *)(a1 + 11884);
  v17 = v16;
  BYTE1(v17) = HIBYTE(v16);
  for ( LOWORD(v1) = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), v16 | 8, v16);
        v16 != (_WORD)v1;
        LOWORD(v1) = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), v16 | 8, v16) )
  {
    RtlBackoff(&v21);
    _m_prefetchw((const void *)(a1 + 11884));
    v16 = *(_WORD *)(a1 + 11884);
    v17 = v16;
    BYTE1(v17) = HIBYTE(v16);
  }
  if ( (v16 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v17) = 2;
      LOWORD(v1) = HalRequestSoftwareInterrupt(v17);
    }
  }
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 )
  {
    LOWORD(v1) = KeGetCurrentIrql();
    if ( (_BYTE)v1 == 13 )
    {
      v19 = 0;
      v22 = v4;
      LOWORD(v23) = 0;
      if ( *(_BYTE *)(a1 + 33) )
      {
        v19 = 1;
        LOWORD(v23) = 1;
      }
      if ( (*(_BYTE *)(a1 + 11884) & 8) != 0 )
        LOWORD(v23) = v19 | 8;
      v24[1] = 16LL;
      v24[0] = &v22;
      LOWORD(v1) = EtwTraceKernelEvent((unsigned int)v24, 1, 1074003968, 3919, 4196866);
    }
  }
  return v1;
}

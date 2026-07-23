/*
 * XREFs of KeFreezeExecution @ 0x1402971B8
 * Callers:
 *     ExpWaitForBootDevices @ 0x14031A3D0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KxTryToAcquireSpinLock @ 0x14011BB44 (KxTryToAcquireSpinLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiSendFreeze @ 0x140297BA0 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140297DF0 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140297E48 (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x1402F650C (RtlWriteTryAcquireTickLock.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // bp
  bool v1; // bp
  unsigned __int8 CurrentIrql; // r14
  int v3; // edi
  char v4; // si
  unsigned int v5; // edi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int16 *v16[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-E8h]
  unsigned __int16 v18; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-D0h]
  int v20; // [rsp+120h] [rbp-8h]

  v0 = v20;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_6:
    v3 = 500000;
    do
    {
      v4 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v4 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_6;
      KeStallExecutionProcessor(4u);
      --v3;
    }
    while ( v3 );
    v5 = v4 != 0 ? 4 * (500000 - v3) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v4 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v4;
    else
      KiFreezeFlag |= 8u;
    if ( v5 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v7) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_1403FF478[0])(v7, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v8 = 20000;
      else
        v8 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      KeCopyAffinityEx((__int64)&v18, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v18, CurrentPrcb->Number);
      LOBYTE(v9) = (KiBugCheckActive & 3) != 3;
      KiSendFreeze(&v18, v9);
      v16[1] = v19;
      v16[0] = &v18;
      v17 = 0;
LABEL_23:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v16) )
      {
        v10 = KiProcessorBlock[v14];
        while ( *(_DWORD *)(v10 + 11656) != 2 )
        {
          if ( !v8 )
          {
            KiFreezeFlag |= 2u;
            goto LABEL_23;
          }
          KeStallExecutionProcessor(0x32u);
          --v8;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled && (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v11.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v12);
      MEMORY[0xFFFFF78000000008] = v12;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v12 / KeMaximumIncrement + 1) - v12;
        MEMORY[0xFFFFF78000000328] = (v12 / KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v12 / KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v1;
}

/*
 * XREFs of ExSetTimerResolution @ 0x1403199A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerResolution @ 0x1400E1F48 (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400FCCD0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  ULONG v5; // ebp
  ULONG v6; // ebx
  KIRQL v7; // di
  int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v11; // [rsp+48h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v5 = KeTimeIncrement;
  v6 = 0;
  v11 = v4;
  v7 = v4;
  if ( SetResolution )
  {
    if ( ++ExpKernelResolutionCount == 1 || DesiredTime < ExpKernelRequestedTimerResolution )
    {
      v6 = DesiredTime;
LABEL_14:
      ExpKernelRequestedTimerResolution = v6;
      return ExpUpdateTimerResolution(SetResolution, v6, &v11);
    }
  }
  else
  {
    v8 = ExpKernelResolutionCount;
    if ( ExpKernelResolutionCount )
    {
      --ExpKernelResolutionCount;
      if ( v8 == 1 )
        goto LABEL_14;
    }
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    v7 = v11;
  }
  __writecr8(v7);
  return v5;
}

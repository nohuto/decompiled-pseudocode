/*
 * XREFs of KiFreezeTargetExecution @ 0x1402978CC
 * Callers:
 *     KiCheckForFreezeExecution @ 0x14028D848 (KiCheckForFreezeExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRestoreProcessorControlState @ 0x1401BBFA0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1401BC070 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1401C5650 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeRestoreSupervisorState @ 0x1402943D0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x140294468 (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x14029778C (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x140297820 (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x140297DF0 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140297E48 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x14029CDDC (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x14029CEF0 (KiSaveProcessorState.c)
 *     KdpReportExceptionStateChange @ 0x140917954 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140937448 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1409374D0 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // di
  bool v6; // di
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // edx
  volatile signed __int32 *SchedulerAssist; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _QWORD v17[20]; // [rsp+20h] [rbp-D8h] BYREF
  int v18; // [rsp+F0h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v18;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_1403FF478[0])(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v10);
    }
    SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v17, 0, 0x98uLL);
        LODWORD(v17[0]) = -2147483641;
        v17[1] = v17;
        v17[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v17, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    v13 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v13 )
      _InterlockedAnd(v13, 0xFFFDFFFF);
    LOBYTE(v12) = KiResumeForReboot;
    ((void (__fastcall *)(_QWORD, __int64))off_1403FF478[0])(0LL, v12);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    v14 = __readcr4();
    if ( (v14 & 0x20080) != 0 )
    {
      __writecr4(v14 ^ 0x80);
      __writecr4(v14);
    }
    else
    {
      v15 = __readcr3();
      __writecr3(v15);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}

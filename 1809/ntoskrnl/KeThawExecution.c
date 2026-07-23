/*
 * XREFs of KeThawExecution @ 0x14029766C
 * Callers:
 *     ExpWaitForBootDevices @ 0x14031A3D0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiEndDebugAccumulation @ 0x140297820 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x140297C64 (KiSendThawExecution.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // di
  __int64 v3; // rcx
  unsigned __int8 v4; // bl
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  ((void (__fastcall *)(_QWORD, _QWORD))off_1403FF478[0])(0LL, 0LL);
  if ( !PoAllProcIntrDisabled )
  {
    MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v4 = KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  v5 = __readcr4();
  if ( (v5 & 0x20080) != 0 )
  {
    __writecr4(v5 ^ 0x80);
    __writecr4(v5);
  }
  else
  {
    v6 = __readcr3();
    __writecr3(v6);
  }
  KiEndDebugAccumulation(KeGetCurrentPrcb());
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}

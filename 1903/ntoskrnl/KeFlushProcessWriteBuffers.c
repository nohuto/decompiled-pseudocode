/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1400B8DE8
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140012BB0 (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x1400B8D20 (NtFlushProcessWriteBuffers.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400EDAE4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE38C (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402F0080 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1405B48E0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x140674ACC (PspTerminateAllThreads.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400B8F44 (KiIpiSendPacket.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  int v4; // esi
  int v5; // eax
  _WORD *v6; // rdx
  __int64 result; // rax
  struct _KPRCB *v8; // rcx
  _WORD v9[88]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v9, 0, 0xA8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  if ( a1 )
  {
    v4 = 1;
    v5 = KeNumberProcessors_0 - 1;
    LODWORD(v6) = 0;
  }
  else
  {
    KeCopyAffinityEx(v9, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(v9, CurrentPrcb->Number);
    v5 = KeCountSetBitsAffinityEx(v9);
    v6 = v9;
  }
  if ( v5 )
  {
    KiIpiSendPacket(v4, (_DWORD)v6, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v8);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

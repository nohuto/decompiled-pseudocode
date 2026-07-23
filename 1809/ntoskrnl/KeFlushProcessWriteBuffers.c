/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1400ED078
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140005DA8 (PoFxSendSystemLatencyUpdate.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     NtFlushProcessWriteBuffers @ 0x1400ED060 (NtFlushProcessWriteBuffers.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3EAC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D5BB0 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140586280 (PsQueryTotalCycleTimeProcess.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // esi
  int v4; // eax
  _BYTE *v5; // rdx
  __int64 result; // rax
  struct _KPRCB *v7; // rcx
  _BYTE v8[176]; // [rsp+30h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
  {
    v3 = 1;
    v4 = KeNumberProcessors_0 - 1;
    LODWORD(v5) = 0;
  }
  else
  {
    KeCopyAffinityEx(v8, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(v8, CurrentPrcb->Number);
    v4 = KeCountSetBitsAffinityEx(v8);
    v5 = v8;
  }
  if ( v4 )
  {
    KiIpiSendPacket(v3, (_DWORD)v5, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

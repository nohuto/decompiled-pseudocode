/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x140098C58
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     NtFlushProcessWriteBuffers @ 0x140098B90 (NtFlushProcessWriteBuffers.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400F09A4 (PoFxSendSystemLatencyUpdate.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402EE0EC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402EFDE0 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1405B4CC0 (PsQueryTotalCycleTimeProcess.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140098BB0 (KeCountSetBitsAffinityEx.c)
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
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

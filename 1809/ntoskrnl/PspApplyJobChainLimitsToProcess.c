/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x140604EB0
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x14008F800 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x14008F830 (PsUpdateComponentPower.c)
 *     PspNotifyProcessBackgroundTransition @ 0x140131598 (PspNotifyProcessBackgroundTransition.c)
 *     PspRequestProcessExecutionState @ 0x140605508 (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x140605550 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14068E758 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  PspApplyJobLimitsToProcess(a3, 0LL);
  v6 = *(_QWORD *)(a1 + 1016);
  if ( v6 )
  {
    if ( a2 && *(_QWORD *)(a2 + 1016) || PsCpuFairShareEnabled )
    {
      PspSetProcessSchedulingGroup(a3, 0LL);
      v6 = *(_QWORD *)(a1 + 1016);
    }
    PspSetProcessSchedulingGroup(a3, v6);
  }
  v7 = (*(_DWORD *)(a1 + 864) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 856) )
    v7 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  PspRequestProcessExecutionState(a3, v7, 0LL);
  if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
    PspNotifyProcessBackgroundTransition((__int64)a3, 1);
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
    _interlockedbittestandset(a3 + 110, 4u);
  PsUpdateComponentPower((PVOID)a3, 8, *(_QWORD *)(a1 + 1560));
  return RtlInterlockedSetClearBits(a3 + 192, 4, 32);
}

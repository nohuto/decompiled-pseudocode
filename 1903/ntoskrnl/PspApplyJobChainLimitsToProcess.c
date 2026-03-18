/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x140693F78
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140694880 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x14009DA08 (PspNotifyProcessBackgroundTransition.c)
 *     RtlInterlockedSetClearBits @ 0x1400E59C0 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x1400E59F0 (PsUpdateComponentPower.c)
 *     PspRequestProcessExecutionState @ 0x14069473C (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x140694784 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x140698E58 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
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
    PspNotifyProcessBackgroundTransition(a3, 1);
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8, *(_QWORD *)(a1 + 1560));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 776), 4, 32);
}

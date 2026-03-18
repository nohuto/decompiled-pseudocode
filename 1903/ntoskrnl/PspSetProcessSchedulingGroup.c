/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x140698E58
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140693F78 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1406979A0 (PspSetCpuRateControlJobPostCallback.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1400E93DC (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 780) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 780) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}

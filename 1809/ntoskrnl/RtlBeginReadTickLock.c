/*
 * XREFs of RtlBeginReadTickLock @ 0x14008A5E4
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A430 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x14008A510 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x140138698 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140296520 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140296F24 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14075A814 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}

/*
 * XREFs of RtlBeginReadTickLock @ 0x1400F8DB0
 * Callers:
 *     KiComputeThreadAffinity @ 0x1400F8CF0 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x1400F9210 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1402ACCF8 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1402AD74C (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140781950 (KeQueryCpuSetInformation.c)
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

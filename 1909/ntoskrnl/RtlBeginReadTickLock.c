/*
 * XREFs of RtlBeginReadTickLock @ 0x1400FC850
 * Callers:
 *     KiComputeThreadAffinity @ 0x1400FC790 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x1400FCCB0 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1402ACA58 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1402AD4AC (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140783CB0 (KeQueryCpuSetInformation.c)
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

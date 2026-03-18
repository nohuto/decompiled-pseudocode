/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14011F5FC
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14011EDC8 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x14011F3C4 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14017562C (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140185AA4 (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x1402AD370 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE70 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C4C (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}

/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1400F9DE0
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x1400F9BA8 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x1400F9E04 (KeSetSystemAllowedCpuSets.c)
 *     KiUpdateSystemTime @ 0x140174EFC (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1401854F4 (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x1402AD610 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x14059AE90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C6C (KiCreateCpuSetForProcessor.c)
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

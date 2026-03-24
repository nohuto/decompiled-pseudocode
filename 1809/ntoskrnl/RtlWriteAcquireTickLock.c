/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140117A70
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14011499C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114AA4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x140117838 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14016AD28 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E24C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x140296DE8 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140571D00 (KiCreateCpuSetForProcessor.c)
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

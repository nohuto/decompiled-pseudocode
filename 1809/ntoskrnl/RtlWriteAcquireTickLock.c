/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140117AE0
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140114A0C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x1401178A8 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x14016AE28 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14017E38C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x140296FD8 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x14056C040 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140572D00 (KiCreateCpuSetForProcessor.c)
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

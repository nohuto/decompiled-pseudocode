/*
 * XREFs of ??_EHidLampRangeUpdateReportParser@@UEAAPEAXI@Z @ 0x1800B90B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

HidLampRangeUpdateReportParser *__fastcall HidLampRangeUpdateReportParser::`vector deleting destructor'(
        HidLampRangeUpdateReportParser *this,
        char a2)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

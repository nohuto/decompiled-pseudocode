/*
 * XREFs of ??_GHidLampAttributesResponseReportParser@@UEAAPEAXI@Z @ 0x1800B77D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

HidLampAttributesResponseReportParser *__fastcall HidLampAttributesResponseReportParser::`scalar deleting destructor'(
        HidLampAttributesResponseReportParser *this,
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

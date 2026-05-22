/*
 * XREFs of ??_EHidLampRangeUpdateReportParser@@UEAAPEAXI@Z @ 0x180080610
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

HidLampRangeUpdateReportParser *__fastcall HidLampRangeUpdateReportParser::`vector deleting destructor'(
        HidLampRangeUpdateReportParser *this,
        char a2)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

/*
 * XREFs of ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x18007DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x18007DCAC (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 */

HidLampRangeUpdateReportBuilder *__fastcall HidLampRangeUpdateReportBuilder::`scalar deleting destructor'(
        HidLampRangeUpdateReportBuilder *this,
        char a2)
{
  HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

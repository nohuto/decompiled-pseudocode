/*
 * XREFs of ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x18007DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x18007DD8C (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::`vector deleting destructor'(
        HidLampMultiUpdateReportBuilder *this,
        char a2)
{
  HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

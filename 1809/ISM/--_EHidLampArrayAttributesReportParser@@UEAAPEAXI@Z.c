/*
 * XREFs of ??_EHidLampArrayAttributesReportParser@@UEAAPEAXI@Z @ 0x18007E510
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

HidLampArrayAttributesReportParser *__fastcall HidLampArrayAttributesReportParser::`vector deleting destructor'(
        HidLampArrayAttributesReportParser *this,
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

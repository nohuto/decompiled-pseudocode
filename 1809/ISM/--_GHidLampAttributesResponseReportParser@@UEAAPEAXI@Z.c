/*
 * XREFs of ??_GHidLampAttributesResponseReportParser@@UEAAPEAXI@Z @ 0x18007EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

HidLampAttributesResponseReportParser *__fastcall HidLampAttributesResponseReportParser::`scalar deleting destructor'(
        HidLampAttributesResponseReportParser *this,
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

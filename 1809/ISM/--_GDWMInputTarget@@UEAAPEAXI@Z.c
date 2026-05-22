/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x18008F78C
 * Callers:
 *     ??_EDWMInputTarget@@WDI@EAAPEAXI@Z @ 0x180090610 (--_EDWMInputTarget@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x18008F7D8 (--1DWMInputTarget@@UEAA@XZ.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

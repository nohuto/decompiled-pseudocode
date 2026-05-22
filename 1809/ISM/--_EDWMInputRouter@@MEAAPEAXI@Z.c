/*
 * XREFs of ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180086F60
 * Callers:
 *     ??_EDWMInputRouter@@OEI@EAAPEAXI@Z @ 0x18008DF60 (--_EDWMInputRouter@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C (--1DWMInputRouter@@MEAA@XZ.c)
 */

DWMInputRouter *__fastcall DWMInputRouter::`vector deleting destructor'(DWMInputRouter *this, char a2)
{
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

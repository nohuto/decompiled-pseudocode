/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x180005E90
 * Callers:
 *     ??_EMPCInputRouter@@GEI@EAAPEAXI@Z @ 0x1800093C0 (--_EMPCInputRouter@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180005F90 (--1MPCInputRouter@@EEAA@XZ.c)
 */

MPCInputRouter *__fastcall MPCInputRouter::`scalar deleting destructor'(MPCInputRouter *this, char a2)
{
  MPCInputRouter::~MPCInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

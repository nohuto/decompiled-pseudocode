/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x180053B18
 * Callers:
 *     ??_EMPCInputRouter@@GEI@EAAPEAXI@Z @ 0x180037E20 (--_EMPCInputRouter@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180053880 (--1MPCInputRouter@@EEAA@XZ.c)
 */

MPCInputRouter *__fastcall MPCInputRouter::`scalar deleting destructor'(MPCInputRouter *this, char a2)
{
  MPCInputRouter::~MPCInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

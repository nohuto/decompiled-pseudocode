/*
 * XREFs of ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x1800C2BDC
 * Callers:
 *     ??_EDWMInputRouter@@OEI@EAAPEAXI@Z @ 0x180038C60 (--_EDWMInputRouter@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800C2528 (--1DWMInputRouter@@MEAA@XZ.c)
 */

DWMInputRouter *__fastcall DWMInputRouter::`vector deleting destructor'(DWMInputRouter *this, char a2)
{
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

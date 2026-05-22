/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x1800C6A70
 * Callers:
 *     ??_EDWMInputTarget@@WDI@EAAPEAXI@Z @ 0x180038F40 (--_EDWMInputTarget@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x1800C69B0 (--1DWMInputTarget@@UEAA@XZ.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

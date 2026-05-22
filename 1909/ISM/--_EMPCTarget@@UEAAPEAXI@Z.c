/*
 * XREFs of ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800572E4
 * Callers:
 *     ??_EMPCTarget@@W7EAAPEAXI@Z @ 0x180037C20 (--_EMPCTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x180057274 (--1MPCTarget@@UEAA@XZ.c)
 */

MPCTarget *__fastcall MPCTarget::`vector deleting destructor'(MPCTarget *this, char a2)
{
  MPCTarget::~MPCTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

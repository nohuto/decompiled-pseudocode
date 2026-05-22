/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801254FC
 * Callers:
 *     ??_EGazeProcessor@@OCI@EAAPEAXI@Z @ 0x180039B90 (--_EGazeProcessor@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x180125338 (--1GazeProcessor@@MEAA@XZ.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  GazeProcessor::~GazeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

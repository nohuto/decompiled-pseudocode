/*
 * XREFs of ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1800EB928
 * Callers:
 *     ??_EGazeProcessor@@OCA@EAAPEAXI@Z @ 0x1800EC810 (--_EGazeProcessor@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1800EB974 (--1GazeProcessor@@MEAA@XZ.c)
 */

GazeProcessor *__fastcall GazeProcessor::`scalar deleting destructor'(GazeProcessor *this, char a2)
{
  GazeProcessor::~GazeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

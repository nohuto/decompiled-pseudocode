/*
 * XREFs of ??_EHeatProcessor@@MEAAPEAXI@Z @ 0x180126180
 * Callers:
 *     ??_EHeatProcessor@@OBI@EAAPEAXI@Z @ 0x180039C40 (--_EHeatProcessor@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801260B8 (--1HeatProcessor@@MEAA@XZ.c)
 */

HeatProcessor *__fastcall HeatProcessor::`vector deleting destructor'(HeatProcessor *this, char a2)
{
  HeatProcessor::~HeatProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

/*
 * XREFs of ??_GEdgyProcessorTarget@@UEAAPEAXI@Z @ 0x180102EFC
 * Callers:
 *     ??_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z @ 0x1800394F0 (--_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1EdgyProcessorTarget@@UEAA@XZ @ 0x180102E2C (--1EdgyProcessorTarget@@UEAA@XZ.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::`scalar deleting destructor'(EdgyProcessorTarget *this, char a2)
{
  EdgyProcessorTarget::~EdgyProcessorTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

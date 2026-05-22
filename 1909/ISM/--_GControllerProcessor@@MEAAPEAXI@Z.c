/*
 * XREFs of ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180074D78
 * Callers:
 *     ??_EControllerProcessor@@OBA@EAAPEAXI@Z @ 0x180038030 (--_EControllerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1800749E0 (--1ControllerProcessor@@MEAA@XZ.c)
 */

ControllerProcessor *__fastcall ControllerProcessor::`scalar deleting destructor'(ControllerProcessor *this, char a2)
{
  ControllerProcessor::~ControllerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

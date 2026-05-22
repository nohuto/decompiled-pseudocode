/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18012B434
 * Callers:
 *     ??_EMouseProcessor@@OCA@EAAPEAXI@Z @ 0x180039CF0 (--_EMouseProcessor@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18012B35C (--1MouseProcessor@@MEAA@XZ.c)
 */

MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  MouseProcessor::~MouseProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

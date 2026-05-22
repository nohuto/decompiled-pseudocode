/*
 * XREFs of ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1800FFE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1800FFD90 (--1EdgyConnection@@UEAA@XZ.c)
 */

EdgyConnection *__fastcall EdgyConnection::`vector deleting destructor'(EdgyConnection *this, char a2)
{
  EdgyConnection::~EdgyConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

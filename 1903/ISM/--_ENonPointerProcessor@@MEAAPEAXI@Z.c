/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x1800922D4
 * Callers:
 *     ??_ENonPointerProcessor@@OBA@EAAPEAXI@Z @ 0x180038760 (--_ENonPointerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x180092264 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

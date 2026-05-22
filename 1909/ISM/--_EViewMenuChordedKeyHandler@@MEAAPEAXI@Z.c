/*
 * XREFs of ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x1800796F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x180079650 (--1ViewMenuChordedKeyHandler@@MEAA@XZ.c)
 */

ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::`vector deleting destructor'(
        ViewMenuChordedKeyHandler *this,
        char a2)
{
  ViewMenuChordedKeyHandler::~ViewMenuChordedKeyHandler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

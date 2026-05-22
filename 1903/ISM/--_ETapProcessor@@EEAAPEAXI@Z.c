/*
 * XREFs of ??_ETapProcessor@@EEAAPEAXI@Z @ 0x1801089F4
 * Callers:
 *     ??_ETapProcessor@@GBA@EAAPEAXI@Z @ 0x180039620 (--_ETapProcessor@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1TapProcessor@@EEAA@XZ @ 0x180108958 (--1TapProcessor@@EEAA@XZ.c)
 */

TapProcessor *__fastcall TapProcessor::`vector deleting destructor'(TapProcessor *this, char a2)
{
  TapProcessor::~TapProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

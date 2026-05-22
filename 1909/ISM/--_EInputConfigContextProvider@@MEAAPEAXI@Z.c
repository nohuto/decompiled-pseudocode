/*
 * XREFs of ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x1800D2D08
 * Callers:
 *     ??_EInputConfigContextProvider@@O7EAAPEAXI@Z @ 0x180038CD0 (--_EInputConfigContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x1800D2C6C (--1InputConfigContextProvider@@MEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

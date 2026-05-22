/*
 * XREFs of ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x18004EEEC
 * Callers:
 *     ??_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z @ 0x1800378C0 (--_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18004E850 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 */

OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::`scalar deleting destructor'(
        OneCoreUAPInputHost *this,
        unsigned int a2)
{
  char v2; // di

  v2 = a2;
  OneCoreUAPInputHost::~OneCoreUAPInputHost(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

/*
 * XREFs of ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800AC0CC
 * Callers:
 *     ??_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z @ 0x180038BC0 (--_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800ABEE0 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::`scalar deleting destructor'(
        LampArrayRawInputProvider *this,
        char a2)
{
  LampArrayRawInputProvider::~LampArrayRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

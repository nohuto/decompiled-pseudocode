/*
 * XREFs of ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800AE460
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800AE320 (--1LampArrayDevice@@UEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::`vector deleting destructor'(LampArrayDevice *this, char a2)
{
  LampArrayDevice::~LampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

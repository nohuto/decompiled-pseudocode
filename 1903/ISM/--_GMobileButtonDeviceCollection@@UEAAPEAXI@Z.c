/*
 * XREFs of ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x1800A1210
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800A10E0 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 */

MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::`scalar deleting destructor'(
        MobileButtonDeviceCollection *this,
        char a2)
{
  MobileButtonDeviceCollection::~MobileButtonDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

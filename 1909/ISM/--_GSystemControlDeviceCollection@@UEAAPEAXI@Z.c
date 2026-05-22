/*
 * XREFs of ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800A3780
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800A36B4 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 */

SystemControlDeviceCollection *__fastcall SystemControlDeviceCollection::`scalar deleting destructor'(
        SystemControlDeviceCollection *this,
        char a2)
{
  SystemControlDeviceCollection::~SystemControlDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

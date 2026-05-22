/*
 * XREFs of ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800A2A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800A2938 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 */

ConsumerControlDeviceCollection *__fastcall ConsumerControlDeviceCollection::`scalar deleting destructor'(
        ConsumerControlDeviceCollection *this,
        char a2)
{
  ConsumerControlDeviceCollection::~ConsumerControlDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

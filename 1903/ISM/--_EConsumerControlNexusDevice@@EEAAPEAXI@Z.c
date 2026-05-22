/*
 * XREFs of ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800AFF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800AFE20 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 */

ConsumerControlNexusDevice *__fastcall ConsumerControlNexusDevice::`vector deleting destructor'(
        ConsumerControlNexusDevice *this,
        char a2)
{
  ConsumerControlNexusDevice::~ConsumerControlNexusDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

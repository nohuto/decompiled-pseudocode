/*
 * XREFs of ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800AFDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800AFCD0 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
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

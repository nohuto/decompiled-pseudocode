/*
 * XREFs of ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800B1180
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800B111C (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 */

HSTRING *__fastcall ConsumerControlGenericDevice::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ConsumerControlGenericDevice::~ConsumerControlGenericDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents((MPCEyeGazeProcessor *)this);
    else
      free(this);
  }
  return this;
}

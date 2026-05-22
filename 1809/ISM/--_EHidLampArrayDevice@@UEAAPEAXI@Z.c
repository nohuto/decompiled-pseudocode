/*
 * XREFs of ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800794C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x18007950C (--1HidLampArrayDevice@@UEAA@XZ.c)
 */

HidLampArrayDevice *__fastcall HidLampArrayDevice::`vector deleting destructor'(HidLampArrayDevice *this, char a2)
{
  HidLampArrayDevice::~HidLampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

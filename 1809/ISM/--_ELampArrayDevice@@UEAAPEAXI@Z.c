/*
 * XREFs of ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x180073D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x180073D4C (--1LampArrayDevice@@UEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::`vector deleting destructor'(LampArrayDevice *this, char a2)
{
  LampArrayDevice::~LampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

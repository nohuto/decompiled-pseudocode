/*
 * XREFs of ??_GPnpDevice@@UEAAPEAXI@Z @ 0x180073150
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PnpDevice@@UEAA@XZ @ 0x18007319C (--1PnpDevice@@UEAA@XZ.c)
 */

PnpDevice *__fastcall PnpDevice::`scalar deleting destructor'(PnpDevice *this, char a2)
{
  PnpDevice::~PnpDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

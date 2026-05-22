/*
 * XREFs of ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x180078D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x180078DBC (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 */

ConsumerControlGenericDevice *__fastcall ConsumerControlGenericDevice::`scalar deleting destructor'(
        ConsumerControlGenericDevice *this,
        char a2)
{
  ConsumerControlGenericDevice::~ConsumerControlGenericDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

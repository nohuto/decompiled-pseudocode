/*
 * XREFs of ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x180072500
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x18007254C (--1ConsumerControlManager@@EEAA@XZ.c)
 */

ConsumerControlManager *__fastcall ConsumerControlManager::`scalar deleting destructor'(
        ConsumerControlManager *this,
        char a2)
{
  ConsumerControlManager::~ConsumerControlManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

/*
 * XREFs of ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x1800ACF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800ACD80 (--1ConsumerControlManager@@EEAA@XZ.c)
 */

ConsumerControlManager *__fastcall ConsumerControlManager::`scalar deleting destructor'(
        ConsumerControlManager *this,
        char a2)
{
  ConsumerControlManager::~ConsumerControlManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}

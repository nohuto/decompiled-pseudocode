/*
 * XREFs of ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C001308C
 * Callers:
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0012E34 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0078F1C (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIoQueue::IsPowerStateNotifyingDriver(FxIoQueue *this)
{
  FxIoQueuePowerState m_PowerState; // eax
  bool result; // al
  int v3; // ecx

  m_PowerState = this->m_PowerState;
  result = 0;
  if ( (unsigned int)m_PowerState <= FxIoQueuePowerRestartingNotifyingDriver )
  {
    v3 = 2336;
    if ( _bittest(&v3, m_PowerState) )
      return 1;
  }
  return result;
}

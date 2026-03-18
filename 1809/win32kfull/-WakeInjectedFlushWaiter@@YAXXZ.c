/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C0125480
 * Callers:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C010E250 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void WakeInjectedFlushWaiter(void)
{
  if ( (unsigned __int8)IsInputThread() )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}

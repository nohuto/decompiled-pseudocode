/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C01058A0
 * Callers:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00F5A30 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void __fastcall WakeInjectedFlushWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned __int8)IsInputThread(a1, a2, a3, a4) )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}

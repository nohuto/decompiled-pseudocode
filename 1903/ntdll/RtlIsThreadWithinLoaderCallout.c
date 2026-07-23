/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return stru_18015F4F8.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}

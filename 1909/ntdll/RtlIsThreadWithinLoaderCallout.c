/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007D000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_18015F508 == NtCurrentTeb()->ClientId.UniqueThread;
}

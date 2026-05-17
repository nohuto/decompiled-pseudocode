/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180081210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_18015F5D8 == NtCurrentTeb()->ClientId.UniqueThread;
}

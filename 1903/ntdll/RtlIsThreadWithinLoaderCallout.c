/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (HANDLE)qword_18015F508 == NtCurrentTeb()->ClientId.UniqueThread;
}

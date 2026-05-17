/*
 * XREFs of RtlAreLongPathsEnabled @ 0x18007A310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}

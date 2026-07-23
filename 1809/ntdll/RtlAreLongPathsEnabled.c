/*
 * XREFs of RtlAreLongPathsEnabled @ 0x18007A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlAreLongPathsEnabled(void)
{
  return NtCurrentPeb()->BitField >> 7;
}

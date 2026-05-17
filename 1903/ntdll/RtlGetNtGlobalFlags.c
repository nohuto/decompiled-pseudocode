/*
 * XREFs of RtlGetNtGlobalFlags @ 0x18009BDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}

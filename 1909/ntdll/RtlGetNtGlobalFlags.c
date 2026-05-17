/*
 * XREFs of RtlGetNtGlobalFlags @ 0x18009C550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}

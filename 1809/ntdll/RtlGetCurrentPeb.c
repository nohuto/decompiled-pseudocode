/*
 * XREFs of RtlGetCurrentPeb @ 0x1800F8EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

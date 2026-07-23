/*
 * XREFs of RtlGetCurrentPeb @ 0x1800F6B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PPEB RtlGetCurrentPeb(void)
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

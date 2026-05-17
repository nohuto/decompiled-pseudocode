/*
 * XREFs of RtlGetCurrentPeb @ 0x1800F6A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

/*
 * XREFs of RtlIsCurrentThreadAttachExempt @ 0x18009B9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsCurrentThreadAttachExempt(void)
{
  return (NtCurrentTeb()->SameTebFlags & 8) != 0 && (NtCurrentTeb()->SameTebFlags & 0x20) == 0;
}

/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1402A67C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400048C0 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __noreturn KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}

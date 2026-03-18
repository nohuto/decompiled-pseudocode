/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1402A6520
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __noreturn KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}

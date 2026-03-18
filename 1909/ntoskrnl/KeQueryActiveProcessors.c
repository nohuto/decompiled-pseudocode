/*
 * XREFs of KeQueryActiveProcessors @ 0x1402A6510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140572748[0];
}

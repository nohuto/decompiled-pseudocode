/*
 * XREFs of KeQueryActiveProcessors @ 0x14028FF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1405426A8[0];
}

/*
 * XREFs of KeQueryActiveProcessors @ 0x14028FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1405416A8[0];
}

/*
 * XREFs of KeAreApcsDisabled @ 0x1400103F0
 * Callers:
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}

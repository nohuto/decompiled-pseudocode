/*
 * XREFs of KeAreApcsDisabled @ 0x1400D5800
 * Callers:
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}

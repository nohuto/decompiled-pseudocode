/*
 * XREFs of KeAreApcsDisabled @ 0x1400EE0F0
 * Callers:
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}

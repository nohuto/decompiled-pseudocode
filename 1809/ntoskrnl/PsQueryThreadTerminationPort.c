/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405813A4
 * Callers:
 *     sub_140322760 @ 0x140322760 (sub_140322760.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}

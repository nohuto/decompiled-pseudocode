/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405803A4
 * Callers:
 *     sub_140322470 @ 0x140322470 (sub_140322470.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}

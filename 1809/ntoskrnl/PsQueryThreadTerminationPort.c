/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405803A4
 * Callers:
 *     sub_140322570 @ 0x140322570 (sub_140322570.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}

/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405B0380
 * Callers:
 *     sub_140343AB0 @ 0x140343AB0 (sub_140343AB0.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}

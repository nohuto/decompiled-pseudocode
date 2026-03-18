/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405B0380
 * Callers:
 *     sub_140344050 @ 0x140344050 (sub_140344050.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}

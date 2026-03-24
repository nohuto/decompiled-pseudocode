/*
 * XREFs of KeExecuteVerw @ 0x1401D1500
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x140187360 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:701Ch }
}

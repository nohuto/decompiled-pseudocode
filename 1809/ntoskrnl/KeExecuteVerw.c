/*
 * XREFs of KeExecuteVerw @ 0x1401D1600
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1401874A0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:701Ch }
}

/*
 * XREFs of IoGetActivityIdThread @ 0x1400EE010
 * Callers:
 *     PnpInsertEventInQueue @ 0x140696EC0 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140784E10 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}

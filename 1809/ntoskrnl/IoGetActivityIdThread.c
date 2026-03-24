/*
 * XREFs of IoGetActivityIdThread @ 0x1400065C0
 * Callers:
 *     PnpInsertEventInQueue @ 0x14058FED8 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF60 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}

/*
 * XREFs of IoGetActivityIdThread @ 0x140099FC0
 * Callers:
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140782B40 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

PVOID IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
}

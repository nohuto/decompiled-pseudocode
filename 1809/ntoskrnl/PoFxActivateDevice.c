/*
 * XREFs of PoFxActivateDevice @ 0x14015A18C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406EAEE4 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083B62C (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086BB40 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

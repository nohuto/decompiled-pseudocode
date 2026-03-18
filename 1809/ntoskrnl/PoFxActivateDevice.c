/*
 * XREFs of PoFxActivateDevice @ 0x14015A06C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1406E7F30 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C64 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EE154 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3EC (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14083F824 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086A900 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14015A088 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

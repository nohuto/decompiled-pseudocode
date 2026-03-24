/*
 * XREFs of PoFxActivateDevice @ 0x14015A08C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E655C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1406E7F10 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C44 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EE134 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083A3CC (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14083F804 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086A8E0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14015A0A8 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

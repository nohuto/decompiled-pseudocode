/*
 * XREFs of PoFxActivateDevice @ 0x140145FD8
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140703450 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140874740 (PiProcessResourceRequirementsChanged.c)
 *     PnpQueryStopDeviceNode @ 0x14087A960 (PnpQueryStopDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x1408A6400 (PopFxUpdateVetoMaskWork.c)
 *     PopIssueDirectedPowerTransition @ 0x1408ABDFC (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDevice(__int64 a1)
{
  return PopFxActivateDevice(a1, 0LL, 0LL);
}

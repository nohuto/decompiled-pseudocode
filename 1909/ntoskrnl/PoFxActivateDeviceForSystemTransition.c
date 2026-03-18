/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14015F308
 * Callers:
 *     PopNotifyDevice @ 0x1405985CC (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140145FF4 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}

/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14015EC68
 * Callers:
 *     PopNotifyDevice @ 0x1405985F0 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140145954 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}

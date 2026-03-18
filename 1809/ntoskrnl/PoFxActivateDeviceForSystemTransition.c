/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14014345C
 * Callers:
 *     PopNotifyDevice @ 0x140568C68 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14015A088 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  LOBYTE(a2) = 1;
  return PopFxActivateDevice(a1, a2, a3);
}

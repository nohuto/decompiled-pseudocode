/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14014357C
 * Callers:
 *     PopNotifyDevice @ 0x140569C68 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  LOBYTE(a2) = 1;
  return PopFxActivateDevice(a1, a2, a3);
}

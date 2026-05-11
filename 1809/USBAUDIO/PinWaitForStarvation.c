/*
 * XREFs of PinWaitForStarvation @ 0x1C000255C
 * Callers:
 *     USBHwDataPipeReset @ 0x1C002A664 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0030130 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C00024A4 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}

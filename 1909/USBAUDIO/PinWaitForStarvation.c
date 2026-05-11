/*
 * XREFs of PinWaitForStarvation @ 0x1C00023BC
 * Callers:
 *     USBHwDataPipeReset @ 0x1C002B9B0 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C00314F0 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C0002304 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}

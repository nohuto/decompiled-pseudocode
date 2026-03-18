/*
 * XREFs of ValidateHwnd @ 0x1C0026610
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0034AE0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0035310 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0026630 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}

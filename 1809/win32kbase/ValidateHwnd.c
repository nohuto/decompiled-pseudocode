/*
 * XREFs of ValidateHwnd @ 0x1C0024E40
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00E6850 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E7090 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(void *a1)
{
  return ValidateHwndEx(a1);
}

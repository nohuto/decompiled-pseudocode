/*
 * XREFs of ValidateHwnd @ 0x1C00260F0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0035600 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0035E30 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}

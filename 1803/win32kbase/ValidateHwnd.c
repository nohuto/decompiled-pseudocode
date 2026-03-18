/*
 * XREFs of ValidateHwnd @ 0x1C0022EB0
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00706D0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0070E20 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0022ED0 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(void *a1)
{
  return ValidateHwndEx(a1);
}

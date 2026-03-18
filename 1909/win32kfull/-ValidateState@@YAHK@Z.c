/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C0113838
 * Callers:
 *     SetWindowState @ 0x1C0113780 (SetWindowState.c)
 *     ClearWindowState @ 0x1C01137E0 (ClearWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C02DFEC0[HIBYTE(a1)]) == (_BYTE)a1;
}

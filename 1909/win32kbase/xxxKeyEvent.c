/*
 * XREFs of xxxKeyEvent @ 0x1C0183F90
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxKeyEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  return xxxKeyEventEx(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL);
}

/*
 * XREFs of ?bAddOverflow@@YAHJJ@Z @ 0x1C0003888
 * Callers:
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C00037B4 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bAddOverflow(int a1)
{
  return a1 >= 0 && 0x7FFFFFFF - a1 < 4;
}

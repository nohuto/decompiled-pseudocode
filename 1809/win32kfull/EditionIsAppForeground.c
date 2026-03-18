/*
 * XREFs of EditionIsAppForeground @ 0x1C01C3250
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsAppForeground(const struct tagWND *a1)
{
  return CoreWindowProp::CompositeAppHasForeground(a1);
}

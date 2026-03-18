/*
 * XREFs of EditionIsCompositeAppOrSelfDisabled @ 0x1C01F8440
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  return CoreWindowProp::IsCompositeAppOrSelfDisabled(a1);
}

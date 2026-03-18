/*
 * XREFs of EditionUpdateCursorSizes @ 0x1C010DE30
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ @ 0x1C010DE50 (-RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ.c)
 */

void __fastcall EditionUpdateCursorSizes(CCursorSizes *a1)
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizesForMonitors(a1);
}

/*
 * XREFs of EditionUpdateCursorSizes @ 0x1C013C7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizes(gpCursorSizes);
}

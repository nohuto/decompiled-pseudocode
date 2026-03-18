/*
 * XREFs of EditionUpdateCursorSizes @ 0x1C00E3020
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void EditionUpdateCursorSizes()
{
  if ( gpCursorSizes )
    CCursorSizes::RefreshSizes(gpCursorSizes);
}
